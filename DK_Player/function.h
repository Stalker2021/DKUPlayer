#pragma once

#include <cliext/vector>

#define INNER_TEXT( T ) L"<x:si xmlns:x=\"http://schemas.openxmlformats.org/spreadsheetml/2006/main\"><x:t xml:space=\"preserve\">" + T + L"</x:t></x:si>"
#define INNER_CELL( C ) L"<x:c r=\"" + C + L"\" s=\"1\" t=\"s\" xmlns:x=\"http://schemas.openxmlformats.org/spreadsheetml/2006/main\"></x:c>"
#define INNER_ROW( R ) L"<x:row r=\"" + R + L"\" customFormat=\"false\" ht=\"12.75\" hidden=\"false\" customHeight=\"false\" outlineLevel=\"0\" collapsed=\"false\" xmlns:x=\"http://schemas.openxmlformats.org/spreadsheetml/2006/main\"></x:row>"

void saveDataBackup(String^ cell, String^ value)
{
	IO::StreamWriter^ dataSaver = gcnew IO::StreamWriter(Application::StartupPath + L"\\backupper.txt", true);
	dataSaver->WriteLine(cell + L" = " + value);
	dataSaver->Close();
}

Void initStringTable(Excel::WorkbookPart^ wbp, cliext::vector < Excel::SharedStringItem^ >^ string_table)
{
	string_table->clear();

	Excel::SharedStringTablePart^ stringTable = wbp->SharedStringTablePart;
	if (nullptr == stringTable || nullptr == stringTable->SharedStringTable)
	{
		return;
	}

	for each (Excel::SharedStringItem^ str_item in stringTable->SharedStringTable->Elements())
	{
		string_table->push_back(str_item);
	}
}

Excel::Cell^ getCell(Excel::Worksheet^ sheet, int row_num, int col_num, bool create = false)
{
	wchar_t col_char_1 = (col_num - 1)  / ('Z' - 'A' + 1);
	wchar_t col_char_2 = col_num - (col_char_1 * ('Z' - 'A' + 1) ) + 'A' - 1;
	col_char_1 = col_char_1 + 'A' - 1;
	String^ col_name = "";
	if (col_char_1 < 'A' || col_char_1 > 'Z')
		col_name = col_name + col_char_2;
	else
		col_name = col_name + col_char_1 + col_char_2;

	col_name = col_name + row_num.ToString();

	Excel::Row^ row = nullptr;
	for each(Excel::Row^ iter_row in sheet->GetFirstChild<Excel::SheetData^>())
	{
		if (nullptr != iter_row->RowIndex && iter_row->RowIndex == row_num)
		{
			row = iter_row;
			break;
		}
	}

	if (nullptr == row)
	{
		if (create)
		{
			row = gcnew Excel::Row( gcnew Excel::Row( INNER_ROW( row_num.ToString( ) ) ) );
			row->RowIndex = row_num;
			sheet->GetFirstChild<Excel::SheetData^>()->AppendChild( row );

		}
		else
		{
			return nullptr;
		}
	}

	Excel::Cell^ cell = nullptr;
	for each (Excel::Cell^ iter_cell in row)
	{
		if (nullptr != iter_cell->CellReference && nullptr != iter_cell->CellReference->Value && iter_cell->CellReference->Value == col_name)
		{
			cell = iter_cell;
			break;
		}
	}

	if (nullptr == cell && create)
	{
		cell = gcnew Excel::Cell( INNER_CELL( col_name ) );
		cell->CellReference->Value = col_name;
		row->AppendChild( cell );
	}

	return cell;
}

String^ getValue(Excel::Worksheet^ sheet, int row_num, int col_num, cliext::vector < Excel::SharedStringItem^ >^ string_table)
{
	Excel::Cell^ cell = getCell(sheet, row_num, col_num);
	if (nullptr == cell || nullptr == cell->CellValue )
	{
		return "";
	}

	int str_index = Int32::Parse( cell->CellValue->InnerText );
	return string_table[str_index]->InnerText;
}

Void setValue(Excel::Worksheet^ sheet, int row_num, int col_num, String^ value, Excel::WorkbookPart^ wbp, cliext::vector < Excel::SharedStringItem^ >^ string_table)
{
	Excel::Cell^ cell = getCell(sheet, row_num, col_num, true);
	if (nullptr == cell)
	{
		MessageBox::Show( "'" + value->ToString() + "' cannot be added." );
		return;
	}

	if (nullptr == wbp->SharedStringTablePart)
	{
		wbp->AddNewPart<Excel::SharedStringTablePart^>( );
	}

	if (nullptr == wbp->SharedStringTablePart->SharedStringTable)
	{
		wbp->SharedStringTablePart->SharedStringTable = gcnew Excel::SharedStringTable( );
	}

	Excel::SharedStringTable^ sstr_table = wbp->SharedStringTablePart->SharedStringTable;
	Excel::SharedStringItem^ sstr_item = gcnew Excel::SharedStringItem( INNER_TEXT( value ) );
	sstr_table->AppendChild( sstr_item );
	sstr_table->Save( );
	string_table->push_back( sstr_item );

	cell->CellValue = gcnew Excel::CellValue( (string_table->size() - 1).ToString( ) );
	sheet->Save( );

	saveDataBackup(cell->CellReference->Value, value);
}

String^ getSheetName(Excel::Sheets^ sheets, const int sheet_num)
{
	String^ name = "";
	int counter = 0;

	for each (Excel::Sheet^ sheet in sheets)
	{
		if (sheet_num == counter)
		{
			name = sheet->Name;
		}

		counter++;
	}

	return name;
}

String^ GetExpansionFile(String^ str)
{
	int ch=str->Length-1;
	while(ch>=0)
		if (str[ch]==L'.')
			break;
		else
			ch--;
	if(ch==-1)
		return L"";
	else
		return str->Substring(ch, str->Length-ch);
}

String^ GetNameFile(String^ str)
{
	int ch=str->Length-1;
	while(ch>=0)
		if (str[ch]==L'.')
			break;
		else
			ch--;
	if(ch==-1)
		return str;
	else
		return str->Substring(0, ch);
}

String^ GetFirstNameText(String^ str)
{
	int ch=0;
	for(; ch<(str->Length); ch++)
		if(str[ch]==L' ')
			break;
	if(ch==str->Length)
		return str;
	else
		return str->Substring(0,ch);
}

String^ GetFirstNameFile(String^ str)
{
	int ch=str->Length-1;
	for(; ch>=0; ch--)
		if(str[ch]==L')')
			ch=ch-4;
		else if(str[ch]==L'-')
			break;
	String^ str2=str->Substring(ch+2,str->Length-ch-2);
	ch=0;
	for(; ch<str2->Length; ch++)
		if(str2[ch]==L'(')
		{
			ch--;
			break;
		}
		else if(str2[ch]==L'.')
			break;
	if(ch==str2->Length)
		return str2;
	else
		return str2->Substring(0,ch);
}

String^ GetNameTeam(String^ str)
{
	int start;
	int count;
	start=str->IndexOf(L"-");
	start=str->IndexOf(L"-",start+1);
	count=str->IndexOf(L"-",start+1);
	start=start+2;
	count=count-start-1;
	return str->Substring(start, count);
}

String^ GetTournamentID(String^ str)
{
	int i=0;
	for(; i<str->Length; i++)
		if(str[i]==L'-')
		{
			i=i+2;
			break;
		}
	int count=0;
	for(; (i+count)<str->Length; count++)
		if(str[i+count]==L'-')
		{
			count--;
			break;
		}
	if(i==str->Length || (i+count)==str->Length)
		return str;
	else
		return str->Substring(i,count);
}

void SetTextBoxCollection(TextBox^ textBox, Excel::Worksheet^ shell, cliext::vector < Excel::SharedStringItem^ >^ string_table)
{
	textBox->AutoCompleteCustomSource->Clear();
	String^ buff;
	for (int i = 1;; i++)
	{
		buff = getValue( shell, i, 1, string_table);
		if (buff == L"")
			break;
		textBox->AutoCompleteCustomSource->Add(buff);
	}
}