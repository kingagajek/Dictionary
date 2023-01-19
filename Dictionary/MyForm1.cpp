#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Dictionary::MyForm1 form;
    Application::Run(% form);

}

System::Void Dictionary::MyForm1::buttonSearch_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	MyForm2^ myform2 = gcnew MyForm2;
	myform2->ShowDialog();
}
System::Void Dictionary::MyForm1::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm3^ myform3 = gcnew MyForm3;
	myform3->ShowDialog();
}
System::Void Dictionary::MyForm1::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm4^ myform4 = gcnew MyForm4;
	myform4->ShowDialog();
}
System::Void Dictionary::MyForm1::buttonEdit_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm5^ myform5 = gcnew MyForm5;
	myform5->ShowDialog();
}
System::Void Dictionary::MyForm1::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm1::Close();
}