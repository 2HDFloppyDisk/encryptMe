#include "FormMain.h"
#using <mscorlib.dll>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

[STAThreadAttribute]

int main(array < String^ >^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	EncryptMeMain::FormMain form;
	Application::Run(% form);
	return 0;
}

namespace EncryptMeMain {

	void FormMain::btnEncryptMethodSelect_Click(System::Object^ sender, System::EventArgs^ e) {
		
		WrapperMainMenu->Size = System::Drawing::Size(353, 0); //Collapse Main Menu
		WrapperEncryptor->Size = System::Drawing::Size(353, 289); //Expand Encryptor Controls
	}

	void FormMain::btnExit_Click(System::Object^ sender, System::EventArgs^ e){

		Application::Exit(); //Exit the program
	}

	void FormMain::btnMainMenu_Click(System::Object^ sender, System::EventArgs^ e) {

		WrapperMainMenu->Size = System::Drawing::Size(353, 289); //Expand Main Menu
		WrapperEncryptor->Size = System::Drawing::Size(353, 0); //Collapse Encryptor Controls

		//Reset encryptor, starting with method list
		if (boxEncryptionMethodList->SelectedIndex < 0) {

			labelRequiredMethod->Visible = true; //No method is selected, we should show the *Required label
		}
		else {

			/*
			boxEncryptionMethodList->SelectedIndex = 0; Method A
			boxEncryptionMethodList->SelectedIndex = 1; Method B
			boxEncryptionMethodList->SelectedIndex = 3; Method C
			*/

			boxEncryptionMethodList->SelectedIndex = -1; //Set to no method
			labelRequiredMethod->Visible = true; //Now that we have no method, show *Required label
		}

		if (StringInput->Enabled) {

			//Reset string input box so we start fresh the next time the encryptor is opened
			if (StringInput->Text != "") {
				
				StringInput->Text = ""; //Set string to blank
				StringOutput->Text = ""; //Clear the hidden output box used to store the encrypted string
			}

			StringInput->Enabled = false; //Since we reset the encryptor, we disable the string input box by default
			labelRequiredString->Visible = false; //String input box is not enabled, we should hide the *Required label
		}

		EncrpytMeConsole->Text = ""; //Reset the console window
	}

	void FormMain::boxEncryptionMethodList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		labelRequiredMethod->Visible = false; //A method was selected, now we hide the *Required label
		labelRequiredString->Visible = true; //Since we have a method, now we show the string *Required label
		StringInput->Enabled = true; //Since we have a method, enable string input box
		StringInput->Text = ""; //Set string to blank
		StringOutput->Text = "";
	}

	void FormMain::StringInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		if (StringInput->Text == "") {

			labelRequiredString->Visible = true; //No string detected, now we show the *Required label
			btnEncryptString->Enabled = false; //No string detected, disable button to prevent encryption from starting
			btnCopy->Enabled = false; //No string detected
			btnSave->Enabled = false; //No string detected
			EncrpytMeConsole->AppendText("\r\n Not ready!");
		}
		else {
			
			labelRequiredString->Visible = false; //A string was entered, now we hide the *Required label
			btnEncryptString->Enabled = true; //Enable button since we have a string
		}
	}

	void FormMain::fncEncrypt()
	{
		//
		if (boxEncryptionMethodList->SelectedItem == "Method A") {

			/**/
			//Method A:  Replace the string with all 'X's.
			/**/
			int i;
			int myTextL;
			String^ myText(StringInput->Text);
			String^ myNewText;
			myTextL = myText->Length;

			for (i = 0; i < myTextL; i++) {

				char* str2 = (char*)Marshal::StringToHGlobalAnsi(myText).ToPointer(); //Convert myText to so mething we can use

				str2[i] = 'X';

				myNewText = gcnew String(str2);
				StringOutput->AppendText("" + myNewText[i]);
			}
		}

		if (boxEncryptionMethodList->SelectedItem == "Method B") {

			/**/
			//Method B:  Replace each char with the char one higher on the ASCII table.
			/**/
			int i;
			int myTextL;
			String^ myText(StringInput->Text);
			String^ myNewText;
			myTextL = myText->Length;
			char temp;

			for (i = 0; i < myTextL; i++) {

				char* str2 = (char*)Marshal::StringToHGlobalAnsi(myText).ToPointer(); //Convert myText to so mething we can use

				temp = str2[i];
				//If the message to be encypted is in lower case
				if (temp >= 'a' && temp <= 'z') {
					temp = temp + 1;

					if (temp > 'z') {
						temp = temp - 'z' + 'a' - 1;
					}

					str2[i] = temp;
				}
				//If the message to be encypted is in upper case
				else if (temp >= 'A' && temp <= 'Z') {
					temp = temp + 1;

					if (temp > 'Z') {
						temp = temp - 'Z' + 'A' - 1;
					}

					str2[i] = temp;
				}
				//If the message to be encypted is numeric
				else if (temp >= '0' && temp <= '9') {
					temp = temp + 1;

					if (temp > '9') {
						temp = temp - '9' + '0' - 1;
					}

					str2[i] = temp;
				}

				myNewText = gcnew String(str2);
				//EncrpytMeConsole->AppendText("\r\n [zzzz]: " + myNewText[i]); //DEBUG
				StringOutput->AppendText("" + myNewText[i]);
			}
		}
		
		if (boxEncryptionMethodList->SelectedItem == "Method C") {

			/**/
			//Method C:  Replace each char with the 3 next highest chars on the ASCII table.
			/**/
			int i;
			int myTextL;
			String^ myText(StringInput->Text);
			String^ myNewText;
			myTextL = myText->Length;
			char temp1;
			char temp2;
			char temp3;

			for (i = 0; i < myTextL; i++) {

				char* str2 = (char*)Marshal::StringToHGlobalAnsi(myText).ToPointer(); //Convert myText to so mething we can use

				temp1 = str2[i];
				//If the message to be encypted is in lower case
				if (temp1 >= 'a' && temp1 <= 'z') {
					temp1 = temp1 + 1;
					temp2 = temp1 + 1;
					temp3 = temp2 + 1;

					if (temp1 > 'z') {
						temp1 = temp1 - 'z' + 'a' - 1;
					}
					if (temp2 > 'z') {
						temp2 = temp2 - 'z' + 'a' - 1;
					}
					if (temp3 > 'z') {
						temp3 = temp3 - 'z' + 'a' - 1;
					}

					str2[i] = temp1;
					myNewText = gcnew String(str2);
					StringOutput->AppendText("" + myNewText[i]);

					str2[i] = temp2;
					myNewText = gcnew String(str2);
					StringOutput->AppendText("" + myNewText[i]);

					str2[i] = temp3;
					myNewText = gcnew String(str2);
					StringOutput->AppendText("" + myNewText[i]);
				}
				//If the message to be encypted is in upper case
				else if (temp1 >= 'A' && temp1 <= 'Z') {
					temp1 = temp1 + 1;
					temp2 = temp1 + 1;
					temp3 = temp2 + 1;

					if (temp1 > 'Z') {
						temp1 = temp1 - 'Z' + 'A' - 1;
					}
					if (temp2 > 'Z') {
						temp2 = temp2 - 'Z' + 'A' - 1;
					}
					if (temp3 > 'Z') {
						temp3 = temp3 - 'Z' + 'A' - 1;
					}

					str2[i] = temp1;
					myNewText = gcnew String(str2);
					StringOutput->AppendText("" + myNewText[i]);

					str2[i] = temp2;
					myNewText = gcnew String(str2);
					StringOutput->AppendText("" + myNewText[i]);

					str2[i] = temp3;
					myNewText = gcnew String(str2);
					StringOutput->AppendText("" + myNewText[i]);
				}
				//If the message to be encypted is numeric
				else if (temp1 >= '0' && temp1 <= '9') {
					temp1 = temp1 + 1;
					temp2 = temp1 + 1;
					temp3 = temp2 + 1;

					if (temp1 > '9') {
						temp1 = temp1 - '9' + '0' - 1;
					}
					if (temp2 > '9') {
						temp2 = temp2 - '9' + '0' - 1;
					}
					if (temp3 > '9') {
						temp3 = temp3 - '9' + '0' - 1;
					}

					str2[i] = temp1;
					myNewText = gcnew String(str2);
					StringOutput->AppendText("" + myNewText[i]);

					str2[i] = temp2;
					myNewText = gcnew String(str2);
					StringOutput->AppendText("" + myNewText[i]);

					str2[i] = temp3;
					myNewText = gcnew String(str2);
					StringOutput->AppendText("" + myNewText[i]);
				}
			}
		}
	}

	void FormMain::btnEncryptString_Click(System::Object^ sender, System::EventArgs^ e) {

		btnCopy->Enabled = true; //Enable button since we have a string
		btnSave->Enabled = true; //Enable button since we have a string
		EncrpytMeConsole->AppendText("\r\n Let me encrypt that for you...");
		StringOutput->Text = ""; //Clear the hidden output box used to store the encrypted string

		fncEncrypt(); //Run encryption block //TODO: Handle non-alphanumeric

		EncrpytMeConsole->AppendText("\r\n [ORIGINAL STRING]: " + StringInput->Text); //Display the original string
		EncrpytMeConsole->AppendText("\r\n [ENCRYPTED STRING]: " + StringOutput->Text); //Display the new encrypted string
	}

	void FormMain::btnCopy_Click(System::Object^ sender, System::EventArgs^ e) {

		EncrpytMeConsole->AppendText("\r\n Let me copy that for you...");

		Clipboard::SetText(StringOutput->Text); //Allow user to copy the new encrypted string to clipboard
	}

	void FormMain::btnSave_Click(System::Object^ sender, System::EventArgs^ e) {

		EncrpytMeConsole->AppendText("\r\n Let me save that for you...");
		
		try {

			System::IO::File::WriteAllText("Saved_Encryptions.txt", StringOutput->Text); //stash txt file in local directory with the .exe
			EncrpytMeConsole->AppendText("\r\n Saved to ../Saved_Encryptions.txt");
		}
		catch (Exception^ ex) {

			MessageBox::Show(ex->Message); //Problem detected with Saved_Encryptions.txt
		}
	}
}

