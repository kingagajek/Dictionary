#pragma once

namespace Dictionary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	using namespace System::Data::OleDb;

	/// <summary>
	/// Podsumowanie informacji o MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buttonAdd;

	private: System::Windows::Forms::Button^ buttonBack;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1Clean;
	private: System::Windows::Forms::Button^ button2Clean;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1Clean = (gcnew System::Windows::Forms::Button());
			this->button2Clean = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(12, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(398, 45);
			this->textBox1->TabIndex = 1;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonAdd.Image")));
			this->buttonAdd->Location = System::Drawing::Point(419, 325);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(151, 45);
			this->buttonAdd->TabIndex = 3;
			this->buttonAdd->Text = L"Add";
			this->buttonAdd->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonAdd->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm3::buttonAdd_Click);
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
			this->buttonBack->TabIndex = 4;
			this->buttonBack->Text = L"Back";
			this->buttonBack->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonBack->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonBack->UseVisualStyleBackColor = false;
			this->buttonBack->Click += gcnew System::EventHandler(this, &MyForm3::buttonBack_Click);
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
			this->label1->TabIndex = 5;
			this->label1->Text = L"Enter a word:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(5, 172);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(302, 38);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Enter a definition:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(12, 232);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(398, 45);
			this->textBox2->TabIndex = 7;
			// 
			// button1Clean
			// 
			this->button1Clean->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1Clean.Image")));
			this->button1Clean->Location = System::Drawing::Point(367, 89);
			this->button1Clean->Name = L"button1Clean";
			this->button1Clean->Size = System::Drawing::Size(45, 45);
			this->button1Clean->TabIndex = 8;
			this->button1Clean->UseVisualStyleBackColor = true;
			this->button1Clean->Click += gcnew System::EventHandler(this, &MyForm3::button1Clean_Click);
			// 
			// button2Clean
			// 
			this->button2Clean->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2Clean.Image")));
			this->button2Clean->Location = System::Drawing::Point(367, 232);
			this->button2Clean->Name = L"button2Clean";
			this->button2Clean->Size = System::Drawing::Size(45, 45);
			this->button2Clean->TabIndex = 9;
			this->button2Clean->UseVisualStyleBackColor = true;
			this->button2Clean->Click += gcnew System::EventHandler(this, &MyForm3::button2Clean_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->button2Clean);
			this->Controls->Add(this->button1Clean);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textBox1);
			this->MinimumSize = System::Drawing::Size(600, 600);
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		MyForm3::Close();
	}

	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Add the parameter and set the value
		String^ text1 = this->textBox1->Text;
		String^ text2 = this->textBox2->Text;

		//Create a connection to the database
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Kinia\\OneDrive\\Pulpit\\Dictionary\\Dictionary\\DataDictionary.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
		connection->Open();

		//Creating the OleDBCommand object
		OleDbCommand^ command = gcnew OleDbCommand("SELECT Word, Definition FROM Table1 WHERE Word = @Word OR Definition = @Definition", connection);

		//Add the text from the textbox as a parameter to the query
		command->Parameters->AddWithValue("@Word", text1);
		command->Parameters->AddWithValue("@Definition", text2);
		
		//Executing the command and storing the data
		OleDbDataReader^ reader = command->ExecuteReader();

		if (textBox1->Text->Length > 0 && textBox2->Text->Length > 0)
		{
			if (reader->HasRows)
			{
				MessageBox::Show("The word already exists in the dictionary!");
			}
			else
			{

				//Create a cmd object and specify the SQL query
				OleDbCommand^ cmd = gcnew OleDbCommand("INSERT INTO Table1 (Word, Definition) VALUES (@Word, @Definiton)", connection);
				//Add the text from the textbox as a parameter to the query
				cmd->Parameters->AddWithValue("@Word", text1);
				cmd->Parameters->AddWithValue("@Definition", text2);
				//Execute the query
				cmd->ExecuteNonQuery();
				String^ successDialog = "'" + text1 + "' successfully added to dictionary!";
				MessageBox::Show(successDialog, "Success");
			}
		}
		else
		{
			MessageBox::Show("Empty textbox! Enter a word and definiton.");
		}

		//Close the connection
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
};
}
