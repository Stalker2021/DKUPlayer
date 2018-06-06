#pragma once

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

void SetTextBoxCollection(TextBox^ textBox, Excel::Worksheet^ shell)
{
	textBox->AutoCompleteCustomSource->Clear();
	String^ buff;
	for (int i = 1;; i++)
	{
		buff = Convert::ToString(((Excel::Range^)shell->Cells[i, 1])->Value2);
		if (buff == L"")
			break;
		textBox->AutoCompleteCustomSource->Add(buff);
	}
}