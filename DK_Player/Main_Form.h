#pragma once

#include <cliext/vector>

namespace DK_Player {
	/// <summary>
	/// Summary for Main_Form
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Main_Form : public System::Windows::Forms::Form
	{
	public:
		Main_Form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main_Form()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::RadioButton^  radio_DK;
	private: System::Windows::Forms::RadioButton^  radio_UA;
	private: System::Windows::Forms::ComboBox^  comboBox_YearStart;
	private: System::Windows::Forms::Label^  label_Year;
	private: System::Windows::Forms::ComboBox^  comboBox_YearEnd;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckedListBox^  checkedList_Tournament;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox_Player;
	private: System::Windows::Forms::TextBox^  editPlayer;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button_Play;
	private: System::Windows::Forms::Button^  button_Add;
	private: System::Windows::Forms::Button^  button_Option;
	private: System::Windows::Forms::PictureBox^  pictureBox_Logo;
	private: System::Windows::Forms::Panel^  panel_Option;
	private: System::Windows::Forms::Button^  button_Cancel;
	private: System::Windows::Forms::Button^  button_OK;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button_KMP;
	private: System::Windows::Forms::Button^  button_vUA;
	private: System::Windows::Forms::Button^  button_vDK;
	private: System::Windows::Forms::TextBox^  edit_KMP;
	private: System::Windows::Forms::TextBox^  edit_vUA;
	private: System::Windows::Forms::TextBox^  edit_vDK;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog;
	private: System::Windows::Forms::Panel^  panel_Add;
	private: System::Windows::Forms::ComboBox^  comboBox_TournamentAdd;
	private: System::Windows::Forms::TextBox^  edit_RivalAdd;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  comboBox_PlayerAdd;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label_YearAdd;
	private: System::Windows::Forms::ComboBox^  comboBox_YearAdd;
	private: System::Windows::Forms::RadioButton^  radio_UAadd;
	private: System::Windows::Forms::RadioButton^  radio_DKadd;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::CheckBox^  check_AutoGoal;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  edit_TournamentShort;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  edit_GoalGuest;
	private: System::Windows::Forms::TextBox^  edit_GoalHome;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Panel^  panel_List;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button_ListPlay;
	private: System::Windows::Forms::Button^  button_ListCancel;
	private: System::Windows::Forms::CheckedListBox^  ListBox;
	private: System::Windows::Forms::Button^  button_ChoiceCancel;
	private: System::Windows::Forms::Button^  button_ChoiceAll;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->radio_DK = (gcnew System::Windows::Forms::RadioButton());
			this->radio_UA = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox_YearStart = (gcnew System::Windows::Forms::ComboBox());
			this->label_Year = (gcnew System::Windows::Forms::Label());
			this->comboBox_YearEnd = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkedList_Tournament = (gcnew System::Windows::Forms::CheckedListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox_Player = (gcnew System::Windows::Forms::ComboBox());
			this->editPlayer = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button_Play = (gcnew System::Windows::Forms::Button());
			this->button_Add = (gcnew System::Windows::Forms::Button());
			this->button_Option = (gcnew System::Windows::Forms::Button());
			this->pictureBox_Logo = (gcnew System::Windows::Forms::PictureBox());
			this->panel_Option = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button_KMP = (gcnew System::Windows::Forms::Button());
			this->button_vUA = (gcnew System::Windows::Forms::Button());
			this->button_vDK = (gcnew System::Windows::Forms::Button());
			this->edit_KMP = (gcnew System::Windows::Forms::TextBox());
			this->edit_vUA = (gcnew System::Windows::Forms::TextBox());
			this->edit_vDK = (gcnew System::Windows::Forms::TextBox());
			this->button_Cancel = (gcnew System::Windows::Forms::Button());
			this->button_OK = (gcnew System::Windows::Forms::Button());
			this->panel_Add = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->edit_GoalGuest = (gcnew System::Windows::Forms::TextBox());
			this->edit_GoalHome = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->edit_TournamentShort = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox_TournamentAdd = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_PlayerAdd = (gcnew System::Windows::Forms::ComboBox());
			this->check_AutoGoal = (gcnew System::Windows::Forms::CheckBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->edit_RivalAdd = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label_YearAdd = (gcnew System::Windows::Forms::Label());
			this->comboBox_YearAdd = (gcnew System::Windows::Forms::ComboBox());
			this->radio_UAadd = (gcnew System::Windows::Forms::RadioButton());
			this->radio_DKadd = (gcnew System::Windows::Forms::RadioButton());
			this->panel_List = (gcnew System::Windows::Forms::Panel());
			this->button_ChoiceCancel = (gcnew System::Windows::Forms::Button());
			this->button_ChoiceAll = (gcnew System::Windows::Forms::Button());
			this->ListBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->button_ListPlay = (gcnew System::Windows::Forms::Button());
			this->button_ListCancel = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Logo))->BeginInit();
			this->panel_Option->SuspendLayout();
			this->panel_Add->SuspendLayout();
			this->panel_List->SuspendLayout();
			this->SuspendLayout();
			// 
			// radio_DK
			// 
			this->radio_DK->AutoSize = true;
			this->radio_DK->Checked = true;
			this->radio_DK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radio_DK->Location = System::Drawing::Point(16, 12);
			this->radio_DK->Name = L"radio_DK";
			this->radio_DK->Size = System::Drawing::Size(106, 20);
			this->radio_DK->TabIndex = 1;
			this->radio_DK->TabStop = true;
			this->radio_DK->Text = L"Динамо Київ";
			this->radio_DK->UseVisualStyleBackColor = true;
			this->radio_DK->CheckedChanged += gcnew System::EventHandler(this, &Main_Form::radio_DK_CheckedChanged);
			// 
			// radio_UA
			// 
			this->radio_UA->AutoSize = true;
			this->radio_UA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radio_UA->Location = System::Drawing::Point(250, 12);
			this->radio_UA->Name = L"radio_UA";
			this->radio_UA->Size = System::Drawing::Size(124, 20);
			this->radio_UA->TabIndex = 2;
			this->radio_UA->Text = L"Збірна України";
			this->radio_UA->UseVisualStyleBackColor = true;
			// 
			// comboBox_YearStart
			// 
			this->comboBox_YearStart->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox_YearStart->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox_YearStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_YearStart->FormattingEnabled = true;
			this->comboBox_YearStart->Location = System::Drawing::Point(70, 49);
			this->comboBox_YearStart->Name = L"comboBox_YearStart";
			this->comboBox_YearStart->Size = System::Drawing::Size(99, 24);
			this->comboBox_YearStart->Sorted = true;
			this->comboBox_YearStart->TabIndex = 3;
			this->comboBox_YearStart->Text = L"Всі";
			this->comboBox_YearStart->TextChanged += gcnew System::EventHandler(this, &Main_Form::comboBox_YearStart_TextChanged);
			this->comboBox_YearStart->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main_Form::comboBox_YearStart_KeyPress);
			// 
			// label_Year
			// 
			this->label_Year->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Year->Location = System::Drawing::Point(13, 52);
			this->label_Year->Name = L"label_Year";
			this->label_Year->Size = System::Drawing::Size(51, 18);
			this->label_Year->TabIndex = 4;
			this->label_Year->Text = L"Сезон";
			this->label_Year->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// comboBox_YearEnd
			// 
			this->comboBox_YearEnd->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox_YearEnd->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox_YearEnd->Enabled = false;
			this->comboBox_YearEnd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_YearEnd->FormattingEnabled = true;
			this->comboBox_YearEnd->Location = System::Drawing::Point(201, 49);
			this->comboBox_YearEnd->Name = L"comboBox_YearEnd";
			this->comboBox_YearEnd->Size = System::Drawing::Size(99, 24);
			this->comboBox_YearEnd->Sorted = true;
			this->comboBox_YearEnd->TabIndex = 5;
			this->comboBox_YearEnd->Text = L"Один сезон";
			this->comboBox_YearEnd->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main_Form::comboBox_YearEnd_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(174, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 31);
			this->label1->TabIndex = 6;
			this->label1->Text = L"-";
			// 
			// checkedList_Tournament
			// 
			this->checkedList_Tournament->CheckOnClick = true;
			this->checkedList_Tournament->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkedList_Tournament->FormattingEnabled = true;
			this->checkedList_Tournament->Location = System::Drawing::Point(13, 174);
			this->checkedList_Tournament->Name = L"checkedList_Tournament";
			this->checkedList_Tournament->Size = System::Drawing::Size(196, 89);
			this->checkedList_Tournament->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Турнір";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(13, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Гравець";
			// 
			// comboBox_Player
			// 
			this->comboBox_Player->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox_Player->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox_Player->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_Player->FormattingEnabled = true;
			this->comboBox_Player->Location = System::Drawing::Point(13, 113);
			this->comboBox_Player->Name = L"comboBox_Player";
			this->comboBox_Player->Size = System::Drawing::Size(196, 24);
			this->comboBox_Player->Sorted = true;
			this->comboBox_Player->TabIndex = 10;
			this->comboBox_Player->Text = L"Всі";
			this->comboBox_Player->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main_Form::comboBox_Player_KeyPress);
			// 
			// editPlayer
			// 
			this->editPlayer->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->editPlayer->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->editPlayer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->editPlayer->Location = System::Drawing::Point(91, 284);
			this->editPlayer->Name = L"editPlayer";
			this->editPlayer->Size = System::Drawing::Size(118, 22);
			this->editPlayer->TabIndex = 11;
			this->editPlayer->Text = L"Всі";
			this->editPlayer->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main_Form::editPlayer_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 287);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Суперник";
			// 
			// button_Play
			// 
			this->button_Play->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Play->Location = System::Drawing::Point(238, 287);
			this->button_Play->Name = L"button_Play";
			this->button_Play->Size = System::Drawing::Size(137, 25);
			this->button_Play->TabIndex = 13;
			this->button_Play->Text = L"Показати голи";
			this->button_Play->UseVisualStyleBackColor = true;
			this->button_Play->Click += gcnew System::EventHandler(this, &Main_Form::button_Play_Click);
			// 
			// button_Add
			// 
			this->button_Add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Add->Location = System::Drawing::Point(238, 256);
			this->button_Add->Name = L"button_Add";
			this->button_Add->Size = System::Drawing::Size(137, 25);
			this->button_Add->TabIndex = 14;
			this->button_Add->Text = L"Додати відео";
			this->button_Add->UseVisualStyleBackColor = true;
			this->button_Add->Click += gcnew System::EventHandler(this, &Main_Form::button_Add_Click);
			// 
			// button_Option
			// 
			this->button_Option->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Option->Location = System::Drawing::Point(238, 225);
			this->button_Option->Name = L"button_Option";
			this->button_Option->Size = System::Drawing::Size(137, 25);
			this->button_Option->TabIndex = 15;
			this->button_Option->Text = L"Налаштування";
			this->button_Option->UseVisualStyleBackColor = true;
			this->button_Option->Click += gcnew System::EventHandler(this, &Main_Form::button_Option_Click);
			// 
			// pictureBox_Logo
			// 
			this->pictureBox_Logo->Location = System::Drawing::Point(238, 79);
			this->pictureBox_Logo->Name = L"pictureBox_Logo";
			this->pictureBox_Logo->Size = System::Drawing::Size(136, 140);
			this->pictureBox_Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_Logo->TabIndex = 16;
			this->pictureBox_Logo->TabStop = false;
			this->pictureBox_Logo->DoubleClick += gcnew System::EventHandler(this, &Main_Form::pictureBox_Logo_DoubleClick);
			// 
			// panel_Option
			// 
			this->panel_Option->Controls->Add(this->label8);
			this->panel_Option->Controls->Add(this->label7);
			this->panel_Option->Controls->Add(this->label6);
			this->panel_Option->Controls->Add(this->label5);
			this->panel_Option->Controls->Add(this->button_KMP);
			this->panel_Option->Controls->Add(this->button_vUA);
			this->panel_Option->Controls->Add(this->button_vDK);
			this->panel_Option->Controls->Add(this->edit_KMP);
			this->panel_Option->Controls->Add(this->edit_vUA);
			this->panel_Option->Controls->Add(this->edit_vDK);
			this->panel_Option->Controls->Add(this->button_Cancel);
			this->panel_Option->Controls->Add(this->button_OK);
			this->panel_Option->Location = System::Drawing::Point(0, 0);
			this->panel_Option->Name = L"panel_Option";
			this->panel_Option->Size = System::Drawing::Size(386, 323);
			this->panel_Option->TabIndex = 17;
			this->panel_Option->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(9, 183);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 16);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Програвач";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(9, 116);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(183, 16);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Відео голів збірної України";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(9, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(163, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Відео голів Динамо Київ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(112, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 25);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Налаштування";
			// 
			// button_KMP
			// 
			this->button_KMP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_KMP->Location = System::Drawing::Point(309, 201);
			this->button_KMP->Name = L"button_KMP";
			this->button_KMP->Size = System::Drawing::Size(65, 24);
			this->button_KMP->TabIndex = 7;
			this->button_KMP->Text = L"Знайти";
			this->button_KMP->UseVisualStyleBackColor = true;
			this->button_KMP->Click += gcnew System::EventHandler(this, &Main_Form::button_KMP_Click);
			// 
			// button_vUA
			// 
			this->button_vUA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_vUA->Location = System::Drawing::Point(309, 134);
			this->button_vUA->Name = L"button_vUA";
			this->button_vUA->Size = System::Drawing::Size(65, 24);
			this->button_vUA->TabIndex = 6;
			this->button_vUA->Text = L"Знайти";
			this->button_vUA->UseVisualStyleBackColor = true;
			this->button_vUA->Click += gcnew System::EventHandler(this, &Main_Form::button_vUA_Click);
			// 
			// button_vDK
			// 
			this->button_vDK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_vDK->Location = System::Drawing::Point(309, 68);
			this->button_vDK->Name = L"button_vDK";
			this->button_vDK->Size = System::Drawing::Size(65, 24);
			this->button_vDK->TabIndex = 5;
			this->button_vDK->Text = L"Знайти";
			this->button_vDK->UseVisualStyleBackColor = true;
			this->button_vDK->Click += gcnew System::EventHandler(this, &Main_Form::button_vDK_Click);
			// 
			// edit_KMP
			// 
			this->edit_KMP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->edit_KMP->Location = System::Drawing::Point(12, 202);
			this->edit_KMP->Name = L"edit_KMP";
			this->edit_KMP->Size = System::Drawing::Size(291, 22);
			this->edit_KMP->TabIndex = 4;
			this->edit_KMP->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main_Form::edit_KMP_KeyPress);
			// 
			// edit_vUA
			// 
			this->edit_vUA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->edit_vUA->Location = System::Drawing::Point(12, 135);
			this->edit_vUA->Name = L"edit_vUA";
			this->edit_vUA->Size = System::Drawing::Size(291, 22);
			this->edit_vUA->TabIndex = 3;
			this->edit_vUA->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main_Form::edit_vUA_KeyPress);
			// 
			// edit_vDK
			// 
			this->edit_vDK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->edit_vDK->Location = System::Drawing::Point(12, 69);
			this->edit_vDK->Name = L"edit_vDK";
			this->edit_vDK->Size = System::Drawing::Size(291, 22);
			this->edit_vDK->TabIndex = 2;
			this->edit_vDK->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main_Form::edit_vDK_KeyPress);
			// 
			// button_Cancel
			// 
			this->button_Cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Cancel->Location = System::Drawing::Point(291, 272);
			this->button_Cancel->Name = L"button_Cancel";
			this->button_Cancel->Size = System::Drawing::Size(83, 25);
			this->button_Cancel->TabIndex = 1;
			this->button_Cancel->Text = L"Назад";
			this->button_Cancel->UseVisualStyleBackColor = true;
			this->button_Cancel->Click += gcnew System::EventHandler(this, &Main_Form::button_Cancel_Click);
			// 
			// button_OK
			// 
			this->button_OK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_OK->Location = System::Drawing::Point(202, 272);
			this->button_OK->Name = L"button_OK";
			this->button_OK->Size = System::Drawing::Size(83, 25);
			this->button_OK->TabIndex = 0;
			this->button_OK->Text = L"Зберегти";
			this->button_OK->UseVisualStyleBackColor = true;
			this->button_OK->Click += gcnew System::EventHandler(this, &Main_Form::button_OK_Click);
			// 
			// panel_Add
			// 
			this->panel_Add->Controls->Add(this->label16);
			this->panel_Add->Controls->Add(this->label15);
			this->panel_Add->Controls->Add(this->edit_GoalGuest);
			this->panel_Add->Controls->Add(this->edit_GoalHome);
			this->panel_Add->Controls->Add(this->label14);
			this->panel_Add->Controls->Add(this->edit_TournamentShort);
			this->panel_Add->Controls->Add(this->label12);
			this->panel_Add->Controls->Add(this->dateTimePicker);
			this->panel_Add->Controls->Add(this->label10);
			this->panel_Add->Controls->Add(this->label11);
			this->panel_Add->Controls->Add(this->comboBox_TournamentAdd);
			this->panel_Add->Controls->Add(this->comboBox_PlayerAdd);
			this->panel_Add->Controls->Add(this->check_AutoGoal);
			this->panel_Add->Controls->Add(this->label13);
			this->panel_Add->Controls->Add(this->edit_RivalAdd);
			this->panel_Add->Controls->Add(this->button1);
			this->panel_Add->Controls->Add(this->label9);
			this->panel_Add->Controls->Add(this->button2);
			this->panel_Add->Controls->Add(this->label_YearAdd);
			this->panel_Add->Controls->Add(this->comboBox_YearAdd);
			this->panel_Add->Controls->Add(this->radio_UAadd);
			this->panel_Add->Controls->Add(this->radio_DKadd);
			this->panel_Add->Location = System::Drawing::Point(0, 0);
			this->panel_Add->Name = L"panel_Add";
			this->panel_Add->Size = System::Drawing::Size(386, 323);
			this->panel_Add->TabIndex = 12;
			this->panel_Add->Visible = false;
			this->panel_Add->VisibleChanged += gcnew System::EventHandler(this, &Main_Form::panel_Add_VisibleChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(120, 237);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(19, 25);
			this->label16->TabIndex = 34;
			this->label16->Text = L"-";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(23, 243);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(62, 16);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Рахунок";
			// 
			// edit_GoalGuest
			// 
			this->edit_GoalGuest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->edit_GoalGuest->Location = System::Drawing::Point(142, 240);
			this->edit_GoalGuest->Name = L"edit_GoalGuest";
			this->edit_GoalGuest->Size = System::Drawing::Size(26, 22);
			this->edit_GoalGuest->TabIndex = 32;
			this->edit_GoalGuest->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main_Form::edit_GoalGuest_KeyPress);
			// 
			// edit_GoalHome
			// 
			this->edit_GoalHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->edit_GoalHome->Location = System::Drawing::Point(91, 240);
			this->edit_GoalHome->Name = L"edit_GoalHome";
			this->edit_GoalHome->Size = System::Drawing::Size(26, 22);
			this->edit_GoalHome->TabIndex = 31;
			this->edit_GoalHome->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main_Form::edit_GoalHome_KeyPress);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(220, 130);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 16);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Скорочено";
			this->label14->Visible = false;
			// 
			// edit_TournamentShort
			// 
			this->edit_TournamentShort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->edit_TournamentShort->Location = System::Drawing::Point(306, 127);
			this->edit_TournamentShort->Name = L"edit_TournamentShort";
			this->edit_TournamentShort->Size = System::Drawing::Size(60, 22);
			this->edit_TournamentShort->TabIndex = 29;
			this->edit_TournamentShort->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(219, 91);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(40, 16);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Дата";
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->CustomFormat = L"dd.MM.yyyy";
			this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker->Location = System::Drawing::Point(265, 88);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(101, 22);
			this->dateTimePicker->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(23, 168);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 16);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Гравець";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(33, 129);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 16);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Турнір";
			// 
			// comboBox_TournamentAdd
			// 
			this->comboBox_TournamentAdd->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox_TournamentAdd->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox_TournamentAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_TournamentAdd->FormattingEnabled = true;
			this->comboBox_TournamentAdd->Location = System::Drawing::Point(91, 126);
			this->comboBox_TournamentAdd->Name = L"comboBox_TournamentAdd";
			this->comboBox_TournamentAdd->Size = System::Drawing::Size(275, 24);
			this->comboBox_TournamentAdd->TabIndex = 24;
			this->comboBox_TournamentAdd->TextChanged += gcnew System::EventHandler(this, &Main_Form::comboBox_TournamentAdd_TextChanged);
			this->comboBox_TournamentAdd->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main_Form::comboBox_TournamentAdd_KeyPress);
			// 
			// comboBox_PlayerAdd
			// 
			this->comboBox_PlayerAdd->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox_PlayerAdd->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox_PlayerAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_PlayerAdd->FormattingEnabled = true;
			this->comboBox_PlayerAdd->Location = System::Drawing::Point(91, 165);
			this->comboBox_PlayerAdd->Name = L"comboBox_PlayerAdd";
			this->comboBox_PlayerAdd->Size = System::Drawing::Size(275, 24);
			this->comboBox_PlayerAdd->Sorted = true;
			this->comboBox_PlayerAdd->TabIndex = 21;
			this->comboBox_PlayerAdd->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main_Form::comboBox_PlayerAdd_KeyPress);
			// 
			// check_AutoGoal
			// 
			this->check_AutoGoal->AutoSize = true;
			this->check_AutoGoal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->check_AutoGoal->Location = System::Drawing::Point(285, 242);
			this->check_AutoGoal->Name = L"check_AutoGoal";
			this->check_AutoGoal->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->check_AutoGoal->Size = System::Drawing::Size(81, 20);
			this->check_AutoGoal->TabIndex = 26;
			this->check_AutoGoal->Text = L"Автогол";
			this->check_AutoGoal->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(116, 9);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(144, 25);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Додати відео";
			// 
			// edit_RivalAdd
			// 
			this->edit_RivalAdd->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->edit_RivalAdd->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->edit_RivalAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->edit_RivalAdd->Location = System::Drawing::Point(91, 203);
			this->edit_RivalAdd->Name = L"edit_RivalAdd";
			this->edit_RivalAdd->Size = System::Drawing::Size(275, 22);
			this->edit_RivalAdd->TabIndex = 22;
			this->edit_RivalAdd->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main_Form::edit_RivalAdd_KeyPress);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(182, 281);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 25);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Додати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main_Form::button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(13, 206);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 16);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Суперник";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(281, 281);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 25);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main_Form::button2_Click);
			// 
			// label_YearAdd
			// 
			this->label_YearAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_YearAdd->Location = System::Drawing::Point(34, 90);
			this->label_YearAdd->Name = L"label_YearAdd";
			this->label_YearAdd->Size = System::Drawing::Size(51, 18);
			this->label_YearAdd->TabIndex = 18;
			this->label_YearAdd->Text = L"Сезон";
			this->label_YearAdd->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// comboBox_YearAdd
			// 
			this->comboBox_YearAdd->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox_YearAdd->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox_YearAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_YearAdd->FormattingEnabled = true;
			this->comboBox_YearAdd->Location = System::Drawing::Point(91, 87);
			this->comboBox_YearAdd->Name = L"comboBox_YearAdd";
			this->comboBox_YearAdd->Size = System::Drawing::Size(99, 24);
			this->comboBox_YearAdd->Sorted = true;
			this->comboBox_YearAdd->TabIndex = 17;
			this->comboBox_YearAdd->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main_Form::comboBox_YearAdd_KeyPress);
			// 
			// radio_UAadd
			// 
			this->radio_UAadd->AutoSize = true;
			this->radio_UAadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radio_UAadd->Location = System::Drawing::Point(250, 44);
			this->radio_UAadd->Name = L"radio_UAadd";
			this->radio_UAadd->Size = System::Drawing::Size(124, 20);
			this->radio_UAadd->TabIndex = 16;
			this->radio_UAadd->Text = L"Збірна України";
			this->radio_UAadd->UseVisualStyleBackColor = true;
			this->radio_UAadd->CheckedChanged += gcnew System::EventHandler(this, &Main_Form::radio_UAadd_CheckedChanged);
			// 
			// radio_DKadd
			// 
			this->radio_DKadd->AutoSize = true;
			this->radio_DKadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radio_DKadd->Location = System::Drawing::Point(9, 44);
			this->radio_DKadd->Name = L"radio_DKadd";
			this->radio_DKadd->Size = System::Drawing::Size(106, 20);
			this->radio_DKadd->TabIndex = 14;
			this->radio_DKadd->Text = L"Динамо Київ";
			this->radio_DKadd->UseVisualStyleBackColor = true;
			this->radio_DKadd->CheckedChanged += gcnew System::EventHandler(this, &Main_Form::radio_DKadd_CheckedChanged);
			// 
			// panel_List
			// 
			this->panel_List->Controls->Add(this->button_ChoiceCancel);
			this->panel_List->Controls->Add(this->button_ChoiceAll);
			this->panel_List->Controls->Add(this->ListBox);
			this->panel_List->Controls->Add(this->button_ListPlay);
			this->panel_List->Controls->Add(this->button_ListCancel);
			this->panel_List->Controls->Add(this->label17);
			this->panel_List->Location = System::Drawing::Point(0, 0);
			this->panel_List->Name = L"panel_List";
			this->panel_List->Size = System::Drawing::Size(386, 323);
			this->panel_List->TabIndex = 35;
			this->panel_List->Visible = false;
			// 
			// button_ChoiceCancel
			// 
			this->button_ChoiceCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_ChoiceCancel->Location = System::Drawing::Point(85, 291);
			this->button_ChoiceCancel->Name = L"button_ChoiceCancel";
			this->button_ChoiceCancel->Size = System::Drawing::Size(76, 21);
			this->button_ChoiceCancel->TabIndex = 5;
			this->button_ChoiceCancel->Text = L"Зняти вибір";
			this->button_ChoiceCancel->UseVisualStyleBackColor = true;
			this->button_ChoiceCancel->Click += gcnew System::EventHandler(this, &Main_Form::button_ChoiceCancel_Click);
			// 
			// button_ChoiceAll
			// 
			this->button_ChoiceAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_ChoiceAll->Location = System::Drawing::Point(3, 291);
			this->button_ChoiceAll->Name = L"button_ChoiceAll";
			this->button_ChoiceAll->Size = System::Drawing::Size(76, 21);
			this->button_ChoiceAll->TabIndex = 4;
			this->button_ChoiceAll->Text = L"Обрати все";
			this->button_ChoiceAll->UseVisualStyleBackColor = true;
			this->button_ChoiceAll->Click += gcnew System::EventHandler(this, &Main_Form::button_ChoiceAll_Click);
			// 
			// ListBox
			// 
			this->ListBox->CheckOnClick = true;
			this->ListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ListBox->FormattingEnabled = true;
			this->ListBox->Location = System::Drawing::Point(0, 37);
			this->ListBox->Name = L"ListBox";
			this->ListBox->Size = System::Drawing::Size(386, 242);
			this->ListBox->TabIndex = 3;
			this->ListBox->VisibleChanged += gcnew System::EventHandler(this, &Main_Form::ListBox_VisibleChanged);
			// 
			// button_ListPlay
			// 
			this->button_ListPlay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ListPlay->Location = System::Drawing::Point(188, 289);
			this->button_ListPlay->Name = L"button_ListPlay";
			this->button_ListPlay->Size = System::Drawing::Size(90, 25);
			this->button_ListPlay->TabIndex = 2;
			this->button_ListPlay->Text = L"Запустити";
			this->button_ListPlay->UseVisualStyleBackColor = true;
			this->button_ListPlay->Click += gcnew System::EventHandler(this, &Main_Form::button_ListPlay_Click);
			// 
			// button_ListCancel
			// 
			this->button_ListCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_ListCancel->Location = System::Drawing::Point(284, 289);
			this->button_ListCancel->Name = L"button_ListCancel";
			this->button_ListCancel->Size = System::Drawing::Size(90, 25);
			this->button_ListCancel->TabIndex = 1;
			this->button_ListCancel->Text = L"Відмінити";
			this->button_ListCancel->UseVisualStyleBackColor = true;
			this->button_ListCancel->Click += gcnew System::EventHandler(this, &Main_Form::button_ListCancel_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(86, 7);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(207, 25);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Результати пошуку";
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog";
			// 
			// Main_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(386, 323);
			this->Controls->Add(this->panel_List);
			this->Controls->Add(this->panel_Add);
			this->Controls->Add(this->panel_Option);
			this->Controls->Add(this->radio_UA);
			this->Controls->Add(this->comboBox_YearEnd);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox_Logo);
			this->Controls->Add(this->button_Option);
			this->Controls->Add(this->button_Add);
			this->Controls->Add(this->button_Play);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->editPlayer);
			this->Controls->Add(this->comboBox_Player);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkedList_Tournament);
			this->Controls->Add(this->label_Year);
			this->Controls->Add(this->comboBox_YearStart);
			this->Controls->Add(this->radio_DK);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Main_Form";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DKU Player";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Main_Form::Main_Form_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Main_Form::Main_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Logo))->EndInit();
			this->panel_Option->ResumeLayout(false);
			this->panel_Option->PerformLayout();
			this->panel_Add->ResumeLayout(false);
			this->panel_Add->PerformLayout();
			this->panel_List->ResumeLayout(false);
			this->panel_List->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		String^ adress_vDK;
		String^ adress_vUA;
		String^ adress_KMP;
		cliext::vector < Excel::SharedStringItem^ > string_table;
		Excel::SpreadsheetDocument^ exFile;
		Excel::WorkbookPart^ WBPart;
		Excel::Worksheet^ Shell_DK = nullptr;
		Excel::Worksheet^ Shell_UA = nullptr;
		Excel::Worksheet^ Shell_DK_Opponents = nullptr;
		Excel::Worksheet^ Shell_UA_Opponents = nullptr;
		Excel::Worksheet^ Shell_Tournament = nullptr;
		System::Collections::Generic::List<String^>^ list_name;
		System::Collections::Generic::List<String^>^ list_goal;

	private: System::Void Main_Form_Load(System::Object^  sender, System::EventArgs^  e) {
				 IO::StreamReader^ config=gcnew IO::StreamReader(Application::StartupPath+L"\\conf.bin");
				 adress_vDK=gcnew String(config->ReadLine());
				 adress_vUA=gcnew String(config->ReadLine());
				 adress_KMP=gcnew String(config->ReadLine());
				 config->Close();

				 exFile = Excel::SpreadsheetDocument::Open(Application::StartupPath + L"\\data_base.xlsx", true);

				 WBPart = exFile->WorkbookPart;

				 string_table.reserve(400);
				 initStringTable(WBPart, %string_table);

				 Excel::Workbook^ WB = WBPart->Workbook;
				 Excel::Sheets^ sheets = exFile->WorkbookPart->Workbook->Sheets;

				 int counter = 0;
				 for each (Excel::WorksheetPart^ sheetPart in WBPart->WorksheetParts)
				 {
					 if (nullptr == Shell_DK && getSheetName(sheets, counter) == L"DK_Team")
						 Shell_DK = sheetPart->Worksheet;
					 else if (nullptr == Shell_UA && getSheetName(sheets, counter) == L"UA_Team")
						 Shell_UA = sheetPart->Worksheet;
					 else if (nullptr == Shell_DK_Opponents && getSheetName(sheets, counter) == L"DK_Opponents")
						 Shell_DK_Opponents = sheetPart->Worksheet;
					 else if (nullptr == Shell_UA_Opponents && getSheetName(sheets, counter) == L"UA_Opponents")
						 Shell_UA_Opponents = sheetPart->Worksheet;
					 else if (nullptr == Shell_Tournament && getSheetName(sheets, counter) == L"Tournament")
						 Shell_Tournament = sheetPart->Worksheet;
					 else
						 MessageBox::Show("Invalid Shell. Name: " + getSheetName(sheets, counter));

					 counter++;
				 }

				 String^ str;
				 for(int i=1;;i++)
				 {
					 str=getValue( Shell_Tournament, i, 3, %string_table);
					 if(str==L"")
						 break;
					 if(str!=L"DK")
						 continue;
					 str= getValue( Shell_Tournament, i, 1, %string_table);
					 checkedList_Tournament->Items->Add(str);
					 checkedList_Tournament->SetItemChecked(checkedList_Tournament->CheckedItems->Count,true);
				 }

				 for(int i=2010; i<=DateTime::Now.Year; i++)
				 {
					comboBox_YearStart->Items->Add(i.ToString()+L" / "+(i+1).ToString());
					comboBox_YearEnd->Items->Add(i.ToString()+L" / "+(i+1).ToString());
				 }

				 String^ str2;
				 for(int i=1;;i++)
				 {
					 str=getValue( Shell_DK, i, 1, %string_table);
					 if(str==L"")
						 break;
					 str2= getValue( Shell_DK, i, 2, %string_table);
					 comboBox_Player->Items->Add(str+L" "+str2);
				 }

				 SetTextBoxCollection(editPlayer, Shell_DK_Opponents, %string_table);

				 pictureBox_Logo->ImageLocation=Application::StartupPath+L"\\DK.GIF";
			 }

	private: System::Void Main_Form_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				exFile->Close();
			 }

	private: System::Void comboBox_YearStart_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (comboBox_YearStart->Text==L"" || comboBox_YearStart->Text==L"Всі")
				 {
					 comboBox_YearEnd->Enabled=false;
					 comboBox_YearEnd->SelectedIndex=-1;
					 if(radio_DK->Checked)
						 comboBox_YearEnd->Text=L"Один сезон";
					 else
						 comboBox_YearEnd->Text=L"Один рік";
				 }
				 else
					 comboBox_YearEnd->Enabled=true;
			 }

	private: System::Void radio_DK_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 comboBox_YearStart->Text=L"Всі";
				 comboBox_Player->Text=L"Всі";
				 editPlayer->Text=L"Всі";
				 checkedList_Tournament->Items->Clear();
				 comboBox_YearStart->Items->Clear();
				 comboBox_YearEnd->Items->Clear();
				 comboBox_Player->Items->Clear();

				 Excel::Worksheet^ shell;
				 String^ team;
				 if(radio_UA->Checked)
				 {
					 label_Year->Text=L"Рік";
					 comboBox_YearEnd->Text=L"Один рік";
					 shell=Shell_UA;
					 team=L"UA";
					 for(int i=2012; i<=DateTime::Now.Year; i++)
					 {
						comboBox_YearStart->Items->Add(i.ToString());
						comboBox_YearEnd->Items->Add(i.ToString());
					 }
					 SetTextBoxCollection(editPlayer, Shell_UA_Opponents, %string_table);
					 pictureBox_Logo->ImageLocation=Application::StartupPath+L"\\UA.PNG";
				 }
				 else
				 {
					 label_Year->Text=L"Сезон";
					 comboBox_YearEnd->Text=L"Один сезон";
					 shell=Shell_DK;
					 team=L"DK";
					 for(int i=2010; i<=DateTime::Now.Year; i++)
					 {
						comboBox_YearStart->Items->Add(i.ToString()+L" / "+(i+1).ToString());
						comboBox_YearEnd->Items->Add(i.ToString()+L" / "+(i+1).ToString());
					 }
					 SetTextBoxCollection(editPlayer, Shell_DK_Opponents, %string_table);
					 pictureBox_Logo->ImageLocation=Application::StartupPath+L"\\DK.GIF";
				 }

				 String^ str;
				 for(int i=1;;i++)
				 {
					 str= getValue( Shell_Tournament, i, 3, %string_table);
					 if(str==L"")
						 break;
					 if(str!=team)
						 continue;
					 str= getValue( Shell_Tournament, i, 1, %string_table);
					 checkedList_Tournament->Items->Add(str);
					 checkedList_Tournament->SetItemChecked(checkedList_Tournament->CheckedItems->Count,true);
				 }

				 String^ str2;
				 for(int i=1;;i++)
				 {
					 str= getValue( shell, i, 1, %string_table);
					 if(str==L"")
						 break;
					 str2= getValue( shell, i, 2, %string_table);
					 comboBox_Player->Items->Add(str+L" "+str2);
				 }
			 }

	private: System::Void button_Play_Click(System::Object^  sender, System::EventArgs^  e) {
				 if( (comboBox_YearStart->SelectedIndex > comboBox_YearEnd->SelectedIndex) && (comboBox_YearEnd->SelectedIndex >= 0) )
				 {
					 MessageBox::Show(L"Неможливо обробити часовий діапазон.",L"Помилка");
					 return;
				 }

				 bool check=true;
				 for each(String^ str in comboBox_Player->Items)
					 if(str==comboBox_Player->Text)
					 {
						 check=false;
						 break;
					 }
				 if( check && (comboBox_Player->Text != L"") && (comboBox_Player->Text != L"Всі") )
				 {
					 MessageBox::Show(L"Введений гравець відсутній в базі даних.",L"Помилка");
					 return;
				 }
				 
				 if(checkedList_Tournament->CheckedItems->Count == 0)
				 {
					 MessageBox::Show(L"Не обрано жодного турніру.",L"Помилка");
					 return;
				 }
				 list_goal = gcnew System::Collections::Generic::List<String^>();
				 list_name = gcnew System::Collections::Generic::List<String^>();
				 System::Collections::Generic::List<String^>^ list_tournament = gcnew System::Collections::Generic::List<String^>();
				 System::IO::DirectoryInfo^ year_info;
				 System::IO::DirectoryInfo^ file_info;
				 if(checkedList_Tournament->CheckedItems->Count!=checkedList_Tournament->Items->Count)
				 {
					 String^ str;
					 for each(String^ tournament in checkedList_Tournament->CheckedItems)
						 for (int i=1;;i++)
						 {
							 str= getValue( Shell_Tournament, i, 1, %string_table);
							 if(str==tournament)
							 {
								 list_tournament->Add( getValue( Shell_Tournament, i, 2, %string_table));
								 break;
							 }
							 if(str==L"")
								 break;
						 }
				 }
				 if (radio_DK->Checked)
					 year_info = gcnew System::IO::DirectoryInfo(adress_vDK);
				 else
					 year_info = gcnew System::IO::DirectoryInfo(adress_vUA);
				 String^ check_name;
				 for each (System::IO::DirectoryInfo^ year in year_info->GetDirectories())
				 {
					 for(int i=(year->FullName->Length)-1; i>=0; i--)
						 if(year->FullName[i]==L'\\' && i!=year->FullName->Length-1)
						 {
							 if(year->FullName[year->FullName->Length-1]==L'\\')
								 check_name=year->FullName->Substring(i+1,(year->FullName->Length)-i-2);
							 else
								 check_name=year->FullName->Substring(i+1,(year->FullName->Length)-i-1);
							 break;
						 }
					 if( ( radio_DK->Checked && (check_name->Substring(0,5)==L"Сезон") ) || ( radio_UA->Checked && (check_name->Substring(0,3)==L"Рік") ) )
					 {
						 if(comboBox_YearStart->Text!=L"" && comboBox_YearStart->Text!=L"Всі")
						 {
							 if(radio_DK->Checked)
							 {
								 if(comboBox_YearEnd->Text==L"" || comboBox_YearEnd->Text==L"Один сезон")
								 {
									 if(comboBox_YearStart->Text!=(year->Name->Substring(6,4)+L" / "+year->Name->Substring(11,4)))
										 continue;
								 }
								 else
								 {
									 if( Convert::ToInt32(comboBox_YearStart->Text->Substring(0,4)) > Convert::ToInt32(year->Name->Substring(6,4)) || 
										 Convert::ToInt32(comboBox_YearEnd->Text->Substring(0,4)) < Convert::ToInt32(year->Name->Substring(6,4)) )
										 continue;
								 }
							 }
							 else
							 {
								 if(comboBox_YearEnd->Text==L"" || comboBox_YearEnd->Text==L"Один рік")
								 {
									 if(comboBox_YearStart->Text!=(year->Name->Substring(4,4)))
										 continue;
								 }
								 else
								 {
									 if( Convert::ToInt32(comboBox_YearStart->Text) > Convert::ToInt32(year->Name->Substring(4,4)) || 
										 Convert::ToInt32(comboBox_YearEnd->Text) < Convert::ToInt32(year->Name->Substring(4,4)) )
										 continue;
								 }
							 }
						 }
						 if(radio_DK->Checked)
							 file_info = gcnew System::IO::DirectoryInfo(adress_vDK+check_name);
						 else
							 file_info = gcnew System::IO::DirectoryInfo(adress_vUA+check_name);
						 for each (System::IO::FileInfo^ file in file_info->GetFiles())
						 {
							 if( comboBox_Player->Text!=L"Всі" && comboBox_Player->Text!=L"" && GetFirstNameText(comboBox_Player->Text)!=GetFirstNameFile(file->Name) )
								 continue;
							 if(editPlayer->Text!=L"Всі" && editPlayer->Text!=L"" && GetNameTeam(file->Name)->ToLower()->IndexOf(editPlayer->Text->ToLower())==-1)
								 continue;
							 if(list_tournament->Count!=0)
							 {
								 bool check=true;
								 String^ str=GetTournamentID(file->Name);
								 for each(String^ tournament in list_tournament)
									if(tournament==str)
									{
										check=false;
										break;
									}
								 if(check)
									 continue;
							 }
							 list_goal->Add(file->FullName);
							 list_name->Add(GetNameFile(file->Name));
						 }
					 }
				 }
				 
				 if(list_goal->Count==0)
				 {
					 MessageBox::Show(L"За вашим запитом нічого не знайдено.",L"Помилка");
					 return;
				 }

				 panel_List->Visible=true;
			 }

	private: System::Void comboBox_YearStart_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(e->KeyChar==45)
					 e->Handled=true;
			 }
	private: System::Void comboBox_YearEnd_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(e->KeyChar==45)
					 e->Handled=true;
			 }
	private: System::Void comboBox_Player_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(e->KeyChar==45)
					 e->Handled=true;
			 }
	private: System::Void editPlayer_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(e->KeyChar==45)
					 e->Handled=true;
			 }

	private: System::Void pictureBox_Logo_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
				 if(pictureBox_Logo->ImageLocation==Application::StartupPath+L"\\DK.GIF")
				 {
					 System::Diagnostics::Process ^app = gcnew System::Diagnostics::Process();
					 app->Start(L"explorer",adress_vDK);
					 app->Close();
				 }
				 else if(pictureBox_Logo->ImageLocation==Application::StartupPath+L"\\UA.PNG")
				 {
					 System::Diagnostics::Process ^app = gcnew System::Diagnostics::Process();
					 app->Start(L"explorer",adress_vUA);
					 app->Close();
				 }
			 }

	private: System::Void button_Option_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel_Option->Visible=true;
				 edit_vDK->Text=adress_vDK;
				 edit_vUA->Text=adress_vUA;
				 edit_KMP->Text=adress_KMP;
			 }

	private: System::Void button_Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel_Option->Visible=false;
			 }

	private: System::Void button_vDK_Click(System::Object^  sender, System::EventArgs^  e) {
				 folderBrowserDialog->SelectedPath=edit_vDK->Text;
				 folderBrowserDialog->ShowDialog();
				 edit_vDK->Text=folderBrowserDialog->SelectedPath+L"\\";
			 }

	private: System::Void edit_vDK_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 e->Handled=true;
			 }
	private: System::Void edit_vUA_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 e->Handled=true;
			 }
	private: System::Void edit_KMP_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 e->Handled=true;
			 }

	private: System::Void button_vUA_Click(System::Object^  sender, System::EventArgs^  e) {
				 folderBrowserDialog->SelectedPath=edit_vUA->Text;
				 folderBrowserDialog->ShowDialog();
				 edit_vUA->Text=folderBrowserDialog->SelectedPath+L"\\";
			 }

	private: System::Void button_KMP_Click(System::Object^  sender, System::EventArgs^  e) {
				 openFileDialog->Filter=L"Програвач|*.exe";
				 openFileDialog->ShowDialog();
				 edit_KMP->Text=openFileDialog->FileName;
			 }

	private: System::Void button_OK_Click(System::Object^  sender, System::EventArgs^  e) {
				 adress_vDK=edit_vDK->Text;
				 adress_vUA=edit_vUA->Text;
				 adress_KMP=edit_KMP->Text;
				 IO::StreamWriter^ config=gcnew IO::StreamWriter(Application::StartupPath+L"\\conf.bin");
				 config->WriteLine(adress_vDK);
				 config->WriteLine(adress_vUA);
				 config->WriteLine(adress_KMP);
				 config->Close();
				 panel_Option->Visible=false;
			 }

	private: System::Void button_Add_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(radio_DK->Checked)
					 radio_DKadd->Checked=true;
				 else
					 radio_UAadd->Checked=true;
				 panel_Add->Visible=true;
			 }

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel_Add->Visible=false;
			 }

	private: System::Void comboBox_YearAdd_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(e->KeyChar==45)
					 e->Handled=true;
			 }
	private: System::Void comboBox_TournamentAdd_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(e->KeyChar==45)
					 e->Handled=true;
			 }
	private: System::Void comboBox_PlayerAdd_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(e->KeyChar==45)
					 e->Handled=true;
			 }
	private: System::Void edit_RivalAdd_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(e->KeyChar==45)
					 e->Handled=true;
			 }

	private: System::Void radio_DKadd_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 dateTimePicker->Value = DateTime::Now;
				 comboBox_YearAdd->Text=L"";
				 comboBox_YearAdd->Items->Clear();
				 comboBox_TournamentAdd->Text=L"";
				 comboBox_TournamentAdd->Width=275;
				 comboBox_TournamentAdd->Items->Clear();
				 comboBox_PlayerAdd->Text=L"";
				 comboBox_PlayerAdd->Items->Clear();
				 edit_RivalAdd->Text=L"";
				 check_AutoGoal->Checked=false;
				 edit_GoalHome->Text=L"";
				 edit_GoalGuest->Text=L"";
				 edit_TournamentShort->Visible=false;
				 edit_TournamentShort->Text=L"";
				 label14->Visible=false;

				 Excel::Worksheet^ shell;
				 String^ team;
				 if(radio_UAadd->Checked)
				 {
					 label_YearAdd->Text=L"Рік";
					 shell=Shell_UA;
					 team=L"UA";
					 for(int i=2012; i<=DateTime::Now.Year; i++)
						comboBox_YearAdd->Items->Add(i.ToString());
					 SetTextBoxCollection(edit_RivalAdd, Shell_UA_Opponents, %string_table);
				 }
				 else
				 {
					 label_YearAdd->Text=L"Сезон";
					 shell=Shell_DK;
					 team=L"DK";
					 for(int i=2010; i<=DateTime::Now.Year; i++)
						comboBox_YearAdd->Items->Add(i.ToString()+L" / "+(i+1).ToString());
					 SetTextBoxCollection(edit_RivalAdd, Shell_DK_Opponents, %string_table);
				 }

				 String^ str;
				 for(int i=1;;i++)
				 {
					 str= getValue( Shell_Tournament, i, 3, %string_table);
					 if(str==L"")
						 break;
					 if(str!=team)
						 continue;
					 str= getValue( Shell_Tournament, i, 1, %string_table);
					 comboBox_TournamentAdd->Items->Add(str);
				 }

				 String^ str2;
				 for(int i=1;;i++)
				 {
					 str= getValue( shell, i, 1, %string_table);
					 if(str==L"")
						 break;
					 str2= getValue( shell, i, 2, %string_table);
					 comboBox_PlayerAdd->Items->Add(str+L" "+str2);
				 }
			 }
	private: System::Void radio_UAadd_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 Main_Form::radio_DKadd_CheckedChanged(sender,e);
			 }

	private: System::Void comboBox_TournamentAdd_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(edit_TournamentShort->Visible)
				 {
					 label14->Visible=false;
					 edit_TournamentShort->Visible=false;
					 edit_TournamentShort->Text==L"";
					 comboBox_TournamentAdd->Width=275;
				 }
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(comboBox_YearAdd->Text==L"" || comboBox_TournamentAdd->Text==L"" || comboBox_PlayerAdd->Text==L"" || edit_RivalAdd->Text==L"" || edit_GoalHome->Text==L"" ||
																																										 edit_GoalGuest->Text==L"")
				 {
					 MessageBox::Show(L"Не всі поля заповнено.",L"Помилка");
					 return;
				 }
				 if(edit_TournamentShort->Visible==false)
				 {
					 bool check=true;
					 for each(String^ str in comboBox_TournamentAdd->Items)
						 if(str==comboBox_TournamentAdd->Text)
						 {
							 check=false;
							 break;
						 }
					 if(check)
					 {
						 comboBox_TournamentAdd->Width=123;
						 label14->Visible=true;
						 edit_TournamentShort->Visible=true;
						 MessageBox::Show(L"Буде створено новий турнір: \""+comboBox_TournamentAdd->Text+"\".\nПотрібно вказати його абривіатуру в полі \"Скорочено\".",L"Повідомлення");
						 return;
					 }
				 }
				 else if(edit_TournamentShort->Text==L"")
					 {
						 MessageBox::Show(L"Не всі поля заповнено.",L"Помилка");
						 return;
					 }
				 String^ tournament_name;
				 for(int i=1; ; i++)
				 {
					tournament_name= getValue( Shell_Tournament, i, 3, %string_table);
					if(tournament_name==L"")
						break;
					if((radio_DKadd->Checked && tournament_name!=L"DK") || (radio_UAadd->Checked && tournament_name!=L"UA"))
						continue;
					tournament_name= getValue( Shell_Tournament, i, 1, %string_table);
					if(tournament_name==comboBox_TournamentAdd->Text)
					{
						if(edit_TournamentShort->Visible)
						{
							MessageBox::Show(L"Турнір із вказаною назвою вже існує.",L"Помилка");
							return;
						}
						tournament_name= getValue( Shell_Tournament, i, 2, %string_table);
						break;
					}
					tournament_name= getValue( Shell_Tournament, i, 2, %string_table);
					if(edit_TournamentShort->Visible && tournament_name==edit_TournamentShort->Text)
					{
						MessageBox::Show(L"Турнір із вказаною скороченою назвою вже існує.",L"Помилка");
						return;
					}
				 }

				 Excel::Worksheet^ shell;
				 //--------- added 11.08.2017
				 if (edit_RivalAdd->AutoCompleteCustomSource->IndexOf(edit_RivalAdd->Text) < 0)
				 {
					 if (radio_DKadd->Checked)
						 shell = Shell_DK_Opponents;
					 else
						 shell = Shell_UA_Opponents;

					 int iter = 1;
					 String^ check;
					 for (;; iter++)
					 {
						 check = getValue( shell, iter, 1, %string_table);
						 if (check == L"")
							 break;
					 }

					 setValue( shell, iter, 1, edit_RivalAdd->Text, WBPart, %string_table);
					 //exFile->Save();

					 shell = nullptr;
				 }
				 //--------- end of added

				 String^ adress;
				 String^ year_name;
				 if(radio_DKadd->Checked)
				 {
					 adress=adress_vDK;
					 shell=Shell_DK;
					 year_name=L"Сезон "+comboBox_YearAdd->Text->Substring(0,4)+L"-"+comboBox_YearAdd->Text->Substring(7,4);
				 }
				 else
				 {
					 adress=adress_vUA;
					 shell=Shell_UA;
					 year_name=L"Рік "+comboBox_YearAdd->Text;
				 }
				 bool check=true;
				 for each(String^ player in comboBox_PlayerAdd->Items)
					 if(player==comboBox_PlayerAdd->Text)
					 {
						 check=false;
						 break;
					 }
				 if(check)
				 {
					 MessageBox::Show(L"До бази даних буде додано нового гравця: \""+comboBox_PlayerAdd->Text+"\"",L"Повідомдення");
					 int i=1;
					 String^ check;
					 for(;; i++)
					 {
						 check= getValue( shell, i, 1, %string_table);
						 if(check==L"")
							 break;
					 }
					 if(comboBox_PlayerAdd->Text->IndexOf(L" ")<0)
					 {
						 setValue( shell, i, 1, comboBox_PlayerAdd->Text, WBPart, %string_table);
					 }
					 else
					 {
						 setValue(shell,i,1,comboBox_PlayerAdd->Text->Substring(0,comboBox_PlayerAdd->Text->IndexOf(L" ")), WBPart, %string_table);
						 setValue(shell,i,2,comboBox_PlayerAdd->Text->Substring(comboBox_PlayerAdd->Text->IndexOf(L" ")+1,(comboBox_PlayerAdd->Text->Length)-comboBox_PlayerAdd->Text->IndexOf(L" ")-1), WBPart, %string_table);
					 }
					 //exFile->ActiveWorkbook->Save();
				 }
				 check=true;
				 System::IO::DirectoryInfo^ year_info = gcnew System::IO::DirectoryInfo(adress);
				 for each(System::IO::DirectoryInfo^ year in year_info->GetDirectories())
					 if(year->Name==year_name)
					 {
						 check=false;
						 break;
					 }
				 if(check)
					 year_info->CreateSubdirectory(year_name);
				 adress=adress+year_name+L"\\";
				 openFileDialog->Filter=L"Оберіть відео файл|*.*";
				 openFileDialog->FileName=L"";
				 openFileDialog->ShowDialog();
				 if(openFileDialog->FileName==L"")
				 {
					 MessageBox::Show(L"Ви не обрали відео-файл.",L"Помилка");
					 return;
				 }
				 if(edit_TournamentShort->Visible)
				 {
					 tournament_name=edit_TournamentShort->Text;
					 int i=1;
					 String^ check;
					 for(;; i++)
					 {
						 check= getValue( Shell_Tournament, i, 1, %string_table);
						 if(check==L"")
							 break;
					 }
					 setValue(Shell_Tournament,i,1,comboBox_TournamentAdd->Text, WBPart, %string_table);
					 setValue(Shell_Tournament,i,2,tournament_name, WBPart, %string_table);
					 if(radio_DKadd->Checked)
						 setValue(Shell_Tournament,i,3,L"DK", WBPart, %string_table);
					 else
						 setValue(Shell_Tournament,i,3,L"UA", WBPart, %string_table);
					 //exFile->ActiveWorkbook->Save();
				 }
				 adress=adress+dateTimePicker->Value.Year.ToString()+L".";
				 if(dateTimePicker->Value.Month<10)
					 adress=adress+L"0";
				 adress=adress+dateTimePicker->Value.Month.ToString()+L".";
				 if(dateTimePicker->Value.Day<10)
					 adress=adress+L"0";
				 adress=adress+dateTimePicker->Value.Day.ToString()+L" - "+tournament_name+L" - "+edit_RivalAdd->Text+L" - ["+edit_GoalHome->Text+L"-"+edit_GoalGuest->Text+L"] - "+
																																						GetFirstNameText(comboBox_PlayerAdd->Text);
				 if(check_AutoGoal->Checked)
					 adress=adress+L" (аг)";
				 adress=adress+GetExpansionFile(openFileDialog->FileName);
				 System::IO::File::Copy(openFileDialog->FileName,adress);
				 System::IO::File::Delete(openFileDialog->FileName);
				 panel_Add->Visible=false;
			 }

	private: System::Void edit_GoalHome_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(!Char::IsDigit(e->KeyChar) && e->KeyChar!=8)
					 e->Handled=true;
			 }
	private: System::Void edit_GoalGuest_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(!Char::IsDigit(e->KeyChar) && e->KeyChar!=8)
					 e->Handled=true;
			 }

	private: System::Void panel_Add_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
				 Main_Form::radio_DK_CheckedChanged(sender,e);
				 comboBox_YearAdd->Items->Clear();
				 comboBox_TournamentAdd->Width=275;
				 comboBox_TournamentAdd->Items->Clear();
				 comboBox_PlayerAdd->Items->Clear();
				 check_AutoGoal->Checked=false;
				 edit_TournamentShort->Visible=false;
				 edit_TournamentShort->Text=L"";
				 label14->Visible=false;

				 Excel::Worksheet^ shell;
				 String^ team;
				 if(radio_UAadd->Checked)
				 {
					 label_YearAdd->Text=L"Рік";
					 shell=Shell_UA;
					 team=L"UA";
					 for(int i=2012; i<=DateTime::Now.Year; i++)
						 comboBox_YearAdd->Items->Add(i.ToString());
				 }
				 else
				 {
					 label_YearAdd->Text=L"Сезон";
					 shell=Shell_DK;
					 team=L"DK";
					 for(int i=2010; i<=DateTime::Now.Year; i++)
						 comboBox_YearAdd->Items->Add(i.ToString()+L" / "+(i+1).ToString());
				 }

				 String^ str;
				 for(int i=1;;i++)
				 {
					 str= getValue( Shell_Tournament, i, 3, %string_table);
					 if(str==L"")
						 break;
					 if(str!=team)
						 continue;
					 str= getValue( Shell_Tournament, i, 1, %string_table);
					 comboBox_TournamentAdd->Items->Add(str);
				 }

				 String^ str2;
				 for(int i=1;;i++)
				 {
					 str= getValue( shell, i, 1, %string_table);
					 if(str==L"")
						 break;
					 str2= getValue( shell, i, 2, %string_table);
					 comboBox_PlayerAdd->Items->Add(str+L" "+str2);
				 }
			 }

	private: System::Void ListBox_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(panel_List->Visible==false)
					 return;
				 ListBox->Items->Clear();
				 for each (String^ str in list_name)
				 {
					 ListBox->Items->Add(str);
					 ListBox->SetItemChecked(ListBox->Items->Count-1,true);
				 }
			 }

	private: System::Void button_ListPlay_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(ListBox->CheckedItems->Count==0)
				 {
					 MessageBox::Show(L"Жодного відео не обрано.",L"Помилка");
					 return;
				 }
				
				 if(ListBox->CheckedItems->Count!=list_goal->Count)
					 for(int i=ListBox->Items->Count-1; i>=0; i--)
						 if(!ListBox->GetItemChecked(i))
						 {
							 list_name->RemoveAt(i);
							 list_goal->RemoveAt(i);
						 }

				 array<String^>^ lines = gcnew array<String^> ((list_goal->Count)*2 + 1);
				 int num = 0;
				 lines[num++] = L"#EXTM3U";
				 for (int i=0; i<list_goal->Count; i++)
				 {
					 lines[num++] = L"#EXTINF: "+list_name[i];
					 lines[num++] = list_goal[i];
				 }
				 IO::File::WriteAllLines(Application::StartupPath+L"\\play_list.m3u", lines,System::Text::Encoding::Default);

				 System::Diagnostics::Process ^app = gcnew System::Diagnostics::Process();
				 app->Start(L"\""+adress_KMP+L"\"",L"\""+Application::StartupPath+L"\\play_list.m3u"+L"\"");
				 app->Close();
				 panel_List->Visible=false;	 
			 }

	private: System::Void button_ListCancel_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel_List->Visible=false;
			 }

	private: System::Void button_ChoiceAll_Click(System::Object^  sender, System::EventArgs^  e) {
				 for(int i=0; i<(ListBox->Items->Count); i++)
					 ListBox->SetItemChecked(i,true);
			 }

	private: System::Void button_ChoiceCancel_Click(System::Object^  sender, System::EventArgs^  e) {
				 for(int i=0; i<(ListBox->Items->Count); i++)
					 ListBox->SetItemChecked(i,false);
			 }
};
}

