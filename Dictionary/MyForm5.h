#pragma once
#include <iostream>

namespace Dictionary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Data::OleDb;


	/// <summary>
	/// Podsumowanie informacji o MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonBack;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buttonEdit;
	private: System::Windows::Forms::Button^ buttonSearch;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1Clean;
	private: System::Windows::Forms::Button^ button2Clean;
	private: System::Windows::Forms::Button^ button3Clean;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonEdit = (gcnew System::Windows::Forms::Button());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1Clean = (gcnew System::Windows::Forms::Button());
			this->button2Clean = (gcnew System::Windows::Forms::Button());
			this->button3Clean = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
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
			this->buttonBack->TabIndex = 6;
			this->buttonBack->Text = L"Back";
			this->buttonBack->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonBack->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonBack->UseVisualStyleBackColor = false;
			this->buttonBack->Click += gcnew System::EventHandler(this, &MyForm5::buttonBack_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(424, 38);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Search for a word to edit:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(12, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(398, 45);
			this->textBox1->TabIndex = 8;
			// 
			// buttonEdit
			// 
			this->buttonEdit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonEdit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonEdit.Image")));
			this->buttonEdit->Location = System::Drawing::Point(259, 437);
			this->buttonEdit->Name = L"buttonEdit";
			this->buttonEdit->Size = System::Drawing::Size(151, 45);
			this->buttonEdit->TabIndex = 9;
			this->buttonEdit->Text = L"Edit";
			this->buttonEdit->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonEdit->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonEdit->UseVisualStyleBackColor = true;
			this->buttonEdit->Click += gcnew System::EventHandler(this, &MyForm5::buttonEdit_Click);
			// 
			// buttonSearch
			// 
			this->buttonSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonSearch->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSearch.Image")));
			this->buttonSearch->Location = System::Drawing::Point(419, 89);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(151, 45);
			this->buttonSearch->TabIndex = 10;
			this->buttonSearch->Text = L"Search";
			this->buttonSearch->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonSearch->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &MyForm5::buttonSearch_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F));
			this->textBox2->Location = System::Drawing::Point(12, 250);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(398, 45);
			this->textBox2->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(5, 198);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 38);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Edit word:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(5, 324);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(250, 38);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Edit definition:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F));
			this->textBox3->Location = System::Drawing::Point(12, 377);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(398, 45);
			this->textBox3->TabIndex = 14;
			// 
			// button1Clean
			// 
			this->button1Clean->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1Clean.Image")));
			this->button1Clean->Location = System::Drawing::Point(370, 89);
			this->button1Clean->Name = L"button1Clean";
			this->button1Clean->Size = System::Drawing::Size(45, 45);
			this->button1Clean->TabIndex = 15;
			this->button1Clean->UseVisualStyleBackColor = true;
			this->button1Clean->Click += gcnew System::EventHandler(this, &MyForm5::button1Clean_Click);
			// 
			// button2Clean
			// 
			this->button2Clean->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2Clean.Image")));
			this->button2Clean->Location = System::Drawing::Point(367, 250);
			this->button2Clean->Name = L"button2Clean";
			this->button2Clean->Size = System::Drawing::Size(45, 45);
			this->button2Clean->TabIndex = 16;
			this->button2Clean->UseVisualStyleBackColor = true;
			this->button2Clean->Click += gcnew System::EventHandler(this, &MyForm5::button2Clean_Click);
			// 
			// button3Clean
			// 
			this->button3Clean->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3Clean.Image")));
			this->button3Clean->Location = System::Drawing::Point(367, 377);
			this->button3Clean->Name = L"button3Clean";
			this->button3Clean->Size = System::Drawing::Size(45, 45);
			this->button3Clean->TabIndex = 17;
			this->button3Clean->UseVisualStyleBackColor = true;
			this->button3Clean->Click += gcnew System::EventHandler(this, &MyForm5::button3Clean_Click);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->button3Clean);
			this->Controls->Add(this->button2Clean);
			this->Controls->Add(this->button1Clean);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->buttonEdit);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonBack);
			this->MinimumSize = System::Drawing::Size(600, 600);
			this->Name = L"MyForm5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Edit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		MyForm5::Close();
	}
	private: System::Void buttonEdit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ textSearch = this->textBox1->Text;
		String^ textWord = this->textBox2->Text;
		String^ textDefinition = this->textBox3->Text;
		
		//Create a connection to the database
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Kinia\\OneDrive\\Pulpit\\Dictionary\\Dictionary\\DataDictionary.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
		connection->Open();

		OleDbCommand^ command = gcnew OleDbCommand("SELECT ID FROM Table1 WHERE Word = @Search OR Definition = @Search", connection);
		
		command->Parameters->AddWithValue("@Search", textSearch);
		// Execute the query and store the result in a DataReader object
		OleDbDataReader^ reader = command->ExecuteReader();

		// Get the ID of the word
		int id;
		while (reader->Read())
		{
			id = reader->GetInt32(0);
		}

		//Creating the OleDBCommand object
		OleDbCommand^ commandUpdate = gcnew OleDbCommand("UPDATE Table1 SET Word = '" + textWord + "', Definition = '" + textDefinition + "' WHERE ID=@ID", connection);
		
		if (textBox3->Text->Length > 0 && textBox2->Text->Length > 0)
		{
			///Adding parameters to the command
			commandUpdate->Parameters->AddWithValue("@ID", id);

			commandUpdate->ExecuteNonQuery();
			MessageBox::Show("Word successfully edited in dictionary");
		}
		else
		{
			MessageBox::Show("Empty textbox! Enter a word and definiton.");
		}
		
		//Closing the connection
		connection->Close();

	}
	private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ textSearch = this->textBox1->Text;

		//Create a connection to the database
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Kinia\\OneDrive\\Pulpit\\Dictionary\\Dictionary\\DataDictionary.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
		connection->Open();

		//Creating the OleDBCommand object
		OleDbCommand^ command = gcnew OleDbCommand("SELECT Word, Definition FROM Table1 WHERE Word = @Word OR Definition = @Definition", connection);

		//Adding parameters to the command
		command->Parameters->AddWithValue("@Word", textSearch);
		command->Parameters->AddWithValue("@Definiton", textSearch);

		//Executing the command and storing the data
		OleDbDataReader^ reader = command->ExecuteReader();

		if (reader->HasRows)
		{
			// Read the record
			reader->Read();

			if (reader["Word"]->ToString() == textSearch)
			{
				// If the word exists, write the definition in the text box
				textBox2->Text = reader["Word"]->ToString();
				textBox3->Text = reader["Definition"]->ToString();
			}
			else
			{
				textBox2->Text = reader["Word"]->ToString();
				textBox3->Text = reader["Definition"]->ToString();
			}
		}
		else
		{
			// If the word doesn't exist, display a message
			MessageBox::Show("No matching words!");
		}

		//Closing the connection
		connection->Close();
	}

	private: System::Void button1Clean_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Clear();
	}
	private: System::Void button2Clean_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox2->Clear();
	}
	private: System::Void button3Clean_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox3->Clear();
	}
};
}
