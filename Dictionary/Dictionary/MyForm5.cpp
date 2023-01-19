#include "MyForm5.h"

System::Void Dictionary::MyForm5::buttonBack_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm5::Close();
}
System::Void Dictionary::MyForm5::buttonEdit_Click(System::Object^ sender, System::EventArgs^ e)
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
System::Void Dictionary::MyForm5::buttonSearch_Click(System::Object^ sender, System::EventArgs^ e)
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

		// If the word exists, write the definition in the text box
		textBox2->Text = reader["Word"]->ToString();
		textBox3->Text = reader["Definition"]->ToString();
	}
	else
	{
		// If the word doesn't exist, display a message
		MessageBox::Show("No matching words!");
	}

	//Closing the connection
	connection->Close();
}

System::Void Dictionary::MyForm5::button1Clean_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Clear();
}
System::Void Dictionary::MyForm5::button2Clean_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox2->Clear();
}
System::Void Dictionary::MyForm5::button3Clean_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox3->Clear();
}