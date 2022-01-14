#pragma once

namespace EncryptMeMain {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormMain
	/// </summary>
	public ref class FormMain : public System::Windows::Forms::Form
	{
	public:
		FormMain(void)
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
		~FormMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnEncryptMethodSelect;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::ComboBox^ boxEncryptionMethodList;
	private: System::Windows::Forms::Label^ labelMainMenu;
	private: System::Windows::Forms::Panel^ panelBackgroundTop;
	private: System::Windows::Forms::Label^ labelAppVersion;
	private: System::Windows::Forms::Label^ labelAppDescription;
	private: System::Windows::Forms::Label^ labelAppName;
	private: System::Windows::Forms::Panel^ panelBackgroundMain;
	private: System::Windows::Forms::PictureBox^ logoCubic;
	private: System::Windows::Forms::GroupBox^ WrapperMainMenu;
	private: System::Windows::Forms::GroupBox^ WrapperEncryptor;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ StringInput;

	private: System::Windows::Forms::Button^ btnMainMenu;

	private: System::Windows::Forms::Button^ btnEncryptString;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ EncrpytMeConsole;
	private: System::Windows::Forms::Label^ labelRequiredString;

	private: System::Windows::Forms::Label^ labelRequiredMethod;
	private: System::Windows::Forms::Button^ btnSave;

	private: System::Windows::Forms::Button^ btnCopy;
	public: System::Windows::Forms::TextBox^ StringOutput;// adjusted to public from private

	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMain::typeid));
			this->btnEncryptMethodSelect = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->boxEncryptionMethodList = (gcnew System::Windows::Forms::ComboBox());
			this->labelMainMenu = (gcnew System::Windows::Forms::Label());
			this->panelBackgroundTop = (gcnew System::Windows::Forms::Panel());
			this->logoCubic = (gcnew System::Windows::Forms::PictureBox());
			this->labelAppVersion = (gcnew System::Windows::Forms::Label());
			this->labelAppDescription = (gcnew System::Windows::Forms::Label());
			this->labelAppName = (gcnew System::Windows::Forms::Label());
			this->panelBackgroundMain = (gcnew System::Windows::Forms::Panel());
			this->WrapperEncryptor = (gcnew System::Windows::Forms::GroupBox());
			this->StringOutput = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnCopy = (gcnew System::Windows::Forms::Button());
			this->labelRequiredString = (gcnew System::Windows::Forms::Label());
			this->labelRequiredMethod = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->EncrpytMeConsole = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StringInput = (gcnew System::Windows::Forms::TextBox());
			this->btnMainMenu = (gcnew System::Windows::Forms::Button());
			this->btnEncryptString = (gcnew System::Windows::Forms::Button());
			this->WrapperMainMenu = (gcnew System::Windows::Forms::GroupBox());
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->panelBackgroundTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoCubic))->BeginInit();
			this->panelBackgroundMain->SuspendLayout();
			this->WrapperEncryptor->SuspendLayout();
			this->panel1->SuspendLayout();
			this->WrapperMainMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnEncryptMethodSelect
			// 
			this->btnEncryptMethodSelect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnEncryptMethodSelect->Location = System::Drawing::Point(66, 107);
			this->btnEncryptMethodSelect->Name = L"btnEncryptMethodSelect";
			this->btnEncryptMethodSelect->Size = System::Drawing::Size(223, 40);
			this->btnEncryptMethodSelect->TabIndex = 0;
			this->btnEncryptMethodSelect->Text = L"Select String Encryption Method";
			this->btnEncryptMethodSelect->UseVisualStyleBackColor = true;
			this->btnEncryptMethodSelect->Click += gcnew System::EventHandler(this, &FormMain::btnEncryptMethodSelect_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(66, 153);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(223, 40);
			this->btnExit->TabIndex = 1;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &FormMain::btnExit_Click);
			// 
			// boxEncryptionMethodList
			// 
			this->boxEncryptionMethodList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->boxEncryptionMethodList->FormattingEnabled = true;
			this->boxEncryptionMethodList->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Method A", L"Method B", L"Method C" });
			this->boxEncryptionMethodList->Location = System::Drawing::Point(9, 37);
			this->boxEncryptionMethodList->MaxDropDownItems = 3;
			this->boxEncryptionMethodList->Name = L"boxEncryptionMethodList";
			this->boxEncryptionMethodList->Size = System::Drawing::Size(127, 21);
			this->boxEncryptionMethodList->TabIndex = 2;
			this->boxEncryptionMethodList->SelectedIndexChanged += gcnew System::EventHandler(this, &FormMain::boxEncryptionMethodList_SelectedIndexChanged);
			// 
			// labelMainMenu
			// 
			this->labelMainMenu->AutoSize = true;
			this->labelMainMenu->BackColor = System::Drawing::Color::Transparent;
			this->labelMainMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMainMenu->ForeColor = System::Drawing::Color::Black;
			this->labelMainMenu->Location = System::Drawing::Point(87, 21);
			this->labelMainMenu->Name = L"labelMainMenu";
			this->labelMainMenu->Size = System::Drawing::Size(180, 33);
			this->labelMainMenu->TabIndex = 3;
			this->labelMainMenu->Text = L"MAIN MENU";
			// 
			// panelBackgroundTop
			// 
			this->panelBackgroundTop->BackColor = System::Drawing::Color::White;
			this->panelBackgroundTop->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelBackgroundTop->Controls->Add(this->logoCubic);
			this->panelBackgroundTop->Controls->Add(this->labelAppVersion);
			this->panelBackgroundTop->Controls->Add(this->labelAppDescription);
			this->panelBackgroundTop->Controls->Add(this->labelAppName);
			this->panelBackgroundTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelBackgroundTop->Location = System::Drawing::Point(0, 0);
			this->panelBackgroundTop->Name = L"panelBackgroundTop";
			this->panelBackgroundTop->Size = System::Drawing::Size(380, 50);
			this->panelBackgroundTop->TabIndex = 4;
			// 
			// logoCubic
			// 
			this->logoCubic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoCubic.Image")));
			this->logoCubic->Location = System::Drawing::Point(173, 3);
			this->logoCubic->Name = L"logoCubic";
			this->logoCubic->Size = System::Drawing::Size(200, 38);
			this->logoCubic->TabIndex = 2;
			this->logoCubic->TabStop = false;
			// 
			// labelAppVersion
			// 
			this->labelAppVersion->AutoSize = true;
			this->labelAppVersion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAppVersion->Location = System::Drawing::Point(128, 13);
			this->labelAppVersion->Name = L"labelAppVersion";
			this->labelAppVersion->Size = System::Drawing::Size(21, 9);
			this->labelAppVersion->TabIndex = 2;
			this->labelAppVersion->Text = L"v 1.0";
			// 
			// labelAppDescription
			// 
			this->labelAppDescription->AutoSize = true;
			this->labelAppDescription->Location = System::Drawing::Point(10, 28);
			this->labelAppDescription->Name = L"labelAppDescription";
			this->labelAppDescription->Size = System::Drawing::Size(111, 13);
			this->labelAppDescription->TabIndex = 1;
			this->labelAppDescription->Text = L"String Encryption Tool";
			// 
			// labelAppName
			// 
			this->labelAppName->AutoSize = true;
			this->labelAppName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAppName->Location = System::Drawing::Point(10, 7);
			this->labelAppName->Name = L"labelAppName";
			this->labelAppName->Size = System::Drawing::Size(112, 16);
			this->labelAppName->TabIndex = 0;
			this->labelAppName->Text = L"e n c r y p t M e";
			// 
			// panelBackgroundMain
			// 
			this->panelBackgroundMain->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelBackgroundMain->Controls->Add(this->WrapperEncryptor);
			this->panelBackgroundMain->Controls->Add(this->WrapperMainMenu);
			this->panelBackgroundMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelBackgroundMain->Location = System::Drawing::Point(0, 0);
			this->panelBackgroundMain->Name = L"panelBackgroundMain";
			this->panelBackgroundMain->Size = System::Drawing::Size(380, 357);
			this->panelBackgroundMain->TabIndex = 5;
			// 
			// WrapperEncryptor
			// 
			this->WrapperEncryptor->Controls->Add(this->StringOutput);
			this->WrapperEncryptor->Controls->Add(this->btnSave);
			this->WrapperEncryptor->Controls->Add(this->btnCopy);
			this->WrapperEncryptor->Controls->Add(this->labelRequiredString);
			this->WrapperEncryptor->Controls->Add(this->labelRequiredMethod);
			this->WrapperEncryptor->Controls->Add(this->panel1);
			this->WrapperEncryptor->Controls->Add(this->label2);
			this->WrapperEncryptor->Controls->Add(this->label1);
			this->WrapperEncryptor->Controls->Add(this->StringInput);
			this->WrapperEncryptor->Controls->Add(this->btnMainMenu);
			this->WrapperEncryptor->Controls->Add(this->btnEncryptString);
			this->WrapperEncryptor->Controls->Add(this->boxEncryptionMethodList);
			this->WrapperEncryptor->Location = System::Drawing::Point(13, 54);
			this->WrapperEncryptor->Name = L"WrapperEncryptor";
			this->WrapperEncryptor->Size = System::Drawing::Size(353, 0);
			this->WrapperEncryptor->TabIndex = 3;
			this->WrapperEncryptor->TabStop = false;
			// 
			// StringOutput
			// 
			this->StringOutput->Location = System::Drawing::Point(244, 16);
			this->StringOutput->Name = L"StringOutput";
			this->StringOutput->ReadOnly = true;
			this->StringOutput->Size = System::Drawing::Size(100, 20);
			this->StringOutput->TabIndex = 13;
			this->StringOutput->Visible = false;
			// 
			// btnSave
			// 
			this->btnSave->Enabled = false;
			this->btnSave->Location = System::Drawing::Point(181, 170);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(75, 23);
			this->btnSave->TabIndex = 12;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &FormMain::btnSave_Click);
			// 
			// btnCopy
			// 
			this->btnCopy->Enabled = false;
			this->btnCopy->Location = System::Drawing::Point(95, 170);
			this->btnCopy->Name = L"btnCopy";
			this->btnCopy->Size = System::Drawing::Size(75, 23);
			this->btnCopy->TabIndex = 11;
			this->btnCopy->Text = L"Copy";
			this->btnCopy->UseVisualStyleBackColor = true;
			this->btnCopy->Click += gcnew System::EventHandler(this, &FormMain::btnCopy_Click);
			// 
			// labelRequiredString
			// 
			this->labelRequiredString->AutoSize = true;
			this->labelRequiredString->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRequiredString->ForeColor = System::Drawing::Color::Red;
			this->labelRequiredString->Location = System::Drawing::Point(58, 74);
			this->labelRequiredString->Name = L"labelRequiredString";
			this->labelRequiredString->Size = System::Drawing::Size(66, 15);
			this->labelRequiredString->TabIndex = 10;
			this->labelRequiredString->Text = L"* Required";
			this->labelRequiredString->Visible = false;
			// 
			// labelRequiredMethod
			// 
			this->labelRequiredMethod->AutoSize = true;
			this->labelRequiredMethod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRequiredMethod->ForeColor = System::Drawing::Color::Red;
			this->labelRequiredMethod->Location = System::Drawing::Point(144, 16);
			this->labelRequiredMethod->Name = L"labelRequiredMethod";
			this->labelRequiredMethod->Size = System::Drawing::Size(66, 15);
			this->labelRequiredMethod->TabIndex = 9;
			this->labelRequiredMethod->Text = L"* Required";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->EncrpytMeConsole);
			this->panel1->Location = System::Drawing::Point(9, 201);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(335, 82);
			this->panel1->TabIndex = 8;
			// 
			// EncrpytMeConsole
			// 
			this->EncrpytMeConsole->BackColor = System::Drawing::Color::Black;
			this->EncrpytMeConsole->Dock = System::Windows::Forms::DockStyle::Fill;
			this->EncrpytMeConsole->ForeColor = System::Drawing::Color::Lime;
			this->EncrpytMeConsole->Location = System::Drawing::Point(0, 0);
			this->EncrpytMeConsole->MaxLength = 99999999;
			this->EncrpytMeConsole->Multiline = true;
			this->EncrpytMeConsole->Name = L"EncrpytMeConsole";
			this->EncrpytMeConsole->ReadOnly = true;
			this->EncrpytMeConsole->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->EncrpytMeConsole->Size = System::Drawing::Size(331, 78);
			this->EncrpytMeConsole->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 18);
			this->label2->TabIndex = 7;
			this->label2->Text = L"String";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 18);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Encryption Method";
			// 
			// StringInput
			// 
			this->StringInput->Enabled = false;
			this->StringInput->Location = System::Drawing::Point(9, 95);
			this->StringInput->Multiline = true;
			this->StringInput->Name = L"StringInput";
			this->StringInput->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->StringInput->Size = System::Drawing::Size(335, 65);
			this->StringInput->TabIndex = 5;
			this->StringInput->TextChanged += gcnew System::EventHandler(this, &FormMain::StringInput_TextChanged);
			// 
			// btnMainMenu
			// 
			this->btnMainMenu->Location = System::Drawing::Point(267, 170);
			this->btnMainMenu->Name = L"btnMainMenu";
			this->btnMainMenu->Size = System::Drawing::Size(75, 23);
			this->btnMainMenu->TabIndex = 4;
			this->btnMainMenu->Text = L"Return";
			this->btnMainMenu->UseVisualStyleBackColor = true;
			this->btnMainMenu->Click += gcnew System::EventHandler(this, &FormMain::btnMainMenu_Click);
			// 
			// btnEncryptString
			// 
			this->btnEncryptString->Enabled = false;
			this->btnEncryptString->Location = System::Drawing::Point(9, 170);
			this->btnEncryptString->Name = L"btnEncryptString";
			this->btnEncryptString->Size = System::Drawing::Size(75, 23);
			this->btnEncryptString->TabIndex = 3;
			this->btnEncryptString->Text = L"Encrypt";
			this->btnEncryptString->UseVisualStyleBackColor = true;
			this->btnEncryptString->Click += gcnew System::EventHandler(this, &FormMain::btnEncryptString_Click);
			// 
			// WrapperMainMenu
			// 
			this->WrapperMainMenu->BackColor = System::Drawing::Color::Transparent;
			this->WrapperMainMenu->Controls->Add(this->labelMainMenu);
			this->WrapperMainMenu->Controls->Add(this->btnEncryptMethodSelect);
			this->WrapperMainMenu->Controls->Add(this->btnExit);
			this->WrapperMainMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WrapperMainMenu->Location = System::Drawing::Point(13, 54);
			this->WrapperMainMenu->Name = L"WrapperMainMenu";
			this->WrapperMainMenu->Size = System::Drawing::Size(353, 289);
			this->WrapperMainMenu->TabIndex = 2;
			this->WrapperMainMenu->TabStop = false;
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(380, 357);
			this->Controls->Add(this->panelBackgroundTop);
			this->Controls->Add(this->panelBackgroundMain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(400, 400);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(400, 400);
			this->Name = L"FormMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"encryptMe";
			this->panelBackgroundTop->ResumeLayout(false);
			this->panelBackgroundTop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoCubic))->EndInit();
			this->panelBackgroundMain->ResumeLayout(false);
			this->WrapperEncryptor->ResumeLayout(false);
			this->WrapperEncryptor->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->WrapperMainMenu->ResumeLayout(false);
			this->WrapperMainMenu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnEncryptMethodSelect_Click(System::Object^ sender, System::EventArgs^ e); //Method in FormMain.cpp
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e); //Method in FormMain.cpp
	private: System::Void btnMainMenu_Click(System::Object^ sender, System::EventArgs^ e); //Method in FormMain.cpp
	private: System::Void StringInput_TextChanged(System::Object^ sender, System::EventArgs^ e); //Method in FormMain.cpp
	private: System::Void boxEncryptionMethodList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e); //Method in FormMain.cpp
	private: System::Void btnEncryptString_Click(System::Object^ sender, System::EventArgs^ e); //Method in FormMain.cpp
	private: System::Void btnCopy_Click(System::Object^ sender, System::EventArgs^ e); //Method in FormMain.cpp
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e); //Method in FormMain.cpp
	private: System::Void fncEncrypt(); //Method in FormMain.cpp
};
}