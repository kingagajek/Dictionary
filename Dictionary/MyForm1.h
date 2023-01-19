#pragma once
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"

namespace Dictionary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Button^ buttonSearch;
		System::Windows::Forms::Button^ buttonAdd;
		System::Windows::Forms::Button^ buttonDelete;
		System::Windows::Forms::Button^ buttonEdit;
		System::Windows::Forms::Button^ buttonExit;
		System::ComponentModel::Container^ components;
		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonEdit = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 37.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(174, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 75);
			this->label1->TabIndex = 0;
			this->label1->Text = L"MENU";
			// 
			// buttonSearch
			// 
			this->buttonSearch->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonSearch->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSearch->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSearch.Image")));
			this->buttonSearch->Location = System::Drawing::Point(187, 123);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(205, 56);
			this->buttonSearch->TabIndex = 1;
			this->buttonSearch->Text = L"Search";
			this->buttonSearch->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonSearch->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &MyForm1::buttonSearch_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonAdd.Image")));
			this->buttonAdd->Location = System::Drawing::Point(187, 203);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(205, 56);
			this->buttonAdd->TabIndex = 2;
			this->buttonAdd->Text = L"Add";
			this->buttonAdd->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonAdd->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm1::buttonAdd_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDelete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonDelete.Image")));
			this->buttonDelete->Location = System::Drawing::Point(187, 284);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(205, 56);
			this->buttonDelete->TabIndex = 3;
			this->buttonDelete->Text = L"Delete";
			this->buttonDelete->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonDelete->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyForm1::buttonDelete_Click);
			// 
			// buttonEdit
			// 
			this->buttonEdit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonEdit->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEdit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonEdit.Image")));
			this->buttonEdit->Location = System::Drawing::Point(187, 362);
			this->buttonEdit->Name = L"buttonEdit";
			this->buttonEdit->Size = System::Drawing::Size(205, 56);
			this->buttonEdit->TabIndex = 4;
			this->buttonEdit->Text = L"Edit";
			this->buttonEdit->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonEdit->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonEdit->UseVisualStyleBackColor = true;
			this->buttonEdit->Click += gcnew System::EventHandler(this, &MyForm1::buttonEdit_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonExit.BackgroundImage")));
			this->buttonExit->FlatAppearance->BorderSize = 0;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonExit.Image")));
			this->buttonExit->Location = System::Drawing::Point(187, 441);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(205, 56);
			this->buttonExit->TabIndex = 5;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonExit->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm1::buttonExit_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(582, 553);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonEdit);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(600, 600);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dictionary";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MyForm2^ myform2 = gcnew MyForm2;
		//MyForm1::Hide();
		myform2->ShowDialog();
	}
	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MyForm3^ myform3 = gcnew MyForm3;
		myform3->ShowDialog();
	}
	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MyForm4^ myform4 = gcnew MyForm4;
		myform4->ShowDialog();
	}
	private: System::Void buttonEdit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MyForm5^ myform5 = gcnew MyForm5;
		myform5->ShowDialog();
	}
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MyForm1::Close();
	}
};
}
