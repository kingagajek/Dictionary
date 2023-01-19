#include "MyForm4.h"

System::Void Dictionary::MyForm4::buttonBack_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm4::Close();
}

System::Void Dictionary::MyForm4::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ text = this->textBox1->Text;

	//Create a connection to the database
	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Kinia\\OneDrive\\Pulpit\\Dictionary\\Dictionary\\DataDictionary.accdb";
	OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
	connection->Open();


	//Creating the OleDBCommand object
	OleDbCommand^ cmd = gcnew OleDbCommand("SELECT Word, Definition FROM Table1 WHERE Word = @Word OR Definition = @Definition", connection);

	//Add the text from the textbox as a parameter to the query
	cmd->Parameters->AddWithValue("@Word", text);
	cmd->Parameters->AddWithValue("@Definition", text);

	//Executing the command and storing the data
	OleDbDataReader^ reader = cmd->ExecuteReader();

	if (textBox1->Text->Length > 0)
	{
		if (reader->HasRows)
		{
			//Creating the OleDBCommand object
			OleDbCommand^ command = gcnew OleDbCommand("DELETE Word, Definition FROM Table1 WHERE Word = @Word OR Definition = @Definition", connection);

			//Adding parameters to the command
			command->Parameters->AddWithValue("@Word", text);
			command->Parameters->AddWithValue("@Definiton", text);
			command->ExecuteNonQuery();
			//Notify the user that the word is deleted
			MessageBox::Show("Word successfully deleted from dictionary!");
		}
		else
		{
			MessageBox::Show("There is no such word in the dictionary!");
		}
	}
	else
	{
		MessageBox::Show("Empty textbox! Enter a word and definiton.");
	}

	connection->Close();


}
System::Void Dictionary::MyForm4::button1Clean_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Clear();
}

