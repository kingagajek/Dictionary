#pragma once

#include <Windows.h>
//#include <System.Windows.Forms.h>

namespace Dictionary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonSearch;
	private: System::Windows::Forms::Button^ buttonBack;
	private: System::Windows::Forms::Label^ label2;


	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(12, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(398, 45);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter a word:";
			// 
			// buttonSearch
			// 
			this->buttonSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonSearch->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSearch.Image")));
			this->buttonSearch->Location = System::Drawing::Point(429, 89);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(151, 45);
			this->buttonSearch->TabIndex = 2;
			this->buttonSearch->Text = L"Search";
			this->buttonSearch->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonSearch->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &MyForm2::buttonSearch_Click);
			// 
			// buttonBack
			// 
			this->buttonBack->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonBack->BackColor = System::Drawing::SystemColors::Control;
			this->buttonBack->FlatAppearance->BorderSize = 0;
			this->buttonBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonBack.Image")));
			this->buttonBack->Location = System::Drawing::Point(450, 509);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(130, 46);
			this->buttonBack->TabIndex = 3;
			this->buttonBack->Text = L"Back";
			this->buttonBack->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonBack->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonBack->UseVisualStyleBackColor = false;
			this->buttonBack->Click += gcnew System::EventHandler(this, &MyForm2::buttonBack_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->MinimumSize = System::Drawing::Size(600, 600);
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Search";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2::Close();
	}
	private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		// Get the text from the TextBox.
		System::String^ text = textBox1->Text;

		// Search for the word in the file.
		System::String^ result = SearchForWord(text);

		// Display the result in the label.
		label2->Text = result; */

		String^ word;
		// Get the word entered in the TextBox
		word = textBox1->Text;

		// Read the dictionary file line by line
		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("DataDictionary.txt");
		String^ line;

		// Search for the word in the dictionary
		while ((line = sr->ReadLine()) != nullptr)
		{
			// If the word is found, display a message
			if (line->Contains(word))
			{
				MessageBox::Show("Word found in dictionary");
				break;
			}
		}

		// If the word is not found, display a message
		if (line == nullptr)
			MessageBox::Show("Word not found in dictionary");

		// Close the StreamReader
		delete sr;

	}

	    System::String^ SearchForWord(System::String^ text)
    {
        // Open the file and search for the word.
        // (Implementation omitted for brevity)
//Open the file using a StreamReader
			/*
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("DataDictionary.txt");

			//Read the file contents into a string
			String^ fileContents = sr->ReadToEnd();

			//Search for the word
			int index = fileContents->IndexOf("word");

			//Check if the word was found
			if (index >= 0)
			{
				return "Word was found";
			}
			else
			{
				return "Word was not found";
			} */
			return "koniec";
			
    }
};
}