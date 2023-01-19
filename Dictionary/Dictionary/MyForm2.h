#pragma once

namespace Dictionary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;


	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm2()
		{
			if (components)
			{
				delete components;
				delete textBox1;
				delete label1;
				delete buttonSearch;
				delete buttonBack;
				delete textBox2;
				delete button1Clear;
			}
		}
	private:
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Button^ buttonSearch;
		System::Windows::Forms::Button^ buttonBack;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::Button^ button1Clear;
		System::ComponentModel::Container^ components;

		System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button1Clear_Click(System::Object^ sender, System::EventArgs^ e);


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1Clear = (gcnew System::Windows::Forms::Button());
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
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(12, 188);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(398, 45);
			this->textBox2->TabIndex = 5;
			// 
			// button1Clear
			// 
			this->button1Clear->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1Clear.Image")));
			this->button1Clear->Location = System::Drawing::Point(367, 89);
			this->button1Clear->Name = L"button1Clear";
			this->button1Clear->Size = System::Drawing::Size(45, 45);
			this->button1Clear->TabIndex = 6;
			this->button1Clear->UseVisualStyleBackColor = true;
			this->button1Clear->Click += gcnew System::EventHandler(this, &MyForm2::button1Clear_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->button1Clear);
			this->Controls->Add(this->textBox2);
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
};
}