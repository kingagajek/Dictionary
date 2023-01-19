#pragma once

namespace Dictionary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Data::OleDb;

	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm4()
		{
			if (components)
			{
				delete components;
				delete label1;
				delete textBox1;
				delete buttonDelete;
				delete buttonBack;
				delete button1Clean;
			}
		}
	private:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::Button^ buttonDelete;
		System::Windows::Forms::Button^ buttonBack;
		System::Windows::Forms::Button^ button1Clean;
		System::ComponentModel::Container^ components;

		System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button1Clean_Click(System::Object^ sender, System::EventArgs^ e);

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->button1Clean = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(383, 38);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter a word to delete:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(12, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(398, 45);
			this->textBox1->TabIndex = 3;
			// 
			// buttonDelete
			// 
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonDelete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonDelete.Image")));
			this->buttonDelete->Location = System::Drawing::Point(429, 89);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(151, 45);
			this->buttonDelete->TabIndex = 4;
			this->buttonDelete->Text = L"Delete";
			this->buttonDelete->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonDelete->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyForm4::buttonDelete_Click);
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
			this->buttonBack->TabIndex = 5;
			this->buttonBack->Text = L"Back";
			this->buttonBack->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonBack->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonBack->UseVisualStyleBackColor = false;
			this->buttonBack->Click += gcnew System::EventHandler(this, &MyForm4::buttonBack_Click);
			// 
			// button1Clean
			// 
			this->button1Clean->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1Clean.Image")));
			this->button1Clean->Location = System::Drawing::Point(367, 89);
			this->button1Clean->Name = L"button1Clean";
			this->button1Clean->Size = System::Drawing::Size(45, 45);
			this->button1Clean->TabIndex = 16;
			this->button1Clean->UseVisualStyleBackColor = true;
			this->button1Clean->Click += gcnew System::EventHandler(this, &MyForm4::button1Clean_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->button1Clean);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(600, 600);
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Delete";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
