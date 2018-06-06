// DK_Player.cpp : main project file.

#include "stdafx.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#define Excel Microsoft::Office::Interop::Excel
#define mis Type::Missing

#include "function.h"

#include "Main_Form.h"

using namespace DK_Player;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	System::Windows::Forms::Application::Run(gcnew Main_Form());
	return 0;
}
