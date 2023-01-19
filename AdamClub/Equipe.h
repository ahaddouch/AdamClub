#pragma once
using namespace System::Data;
using namespace System;
using namespace std;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;
using namespace System::Data;
ref class Equipe
{
private:
	int id, identraineur, idsport;
	String^ nom;

	

public:

	Equipe(int id, int identraineur, int idsport, String^ nom) {
		this->id = id;
		this->identraineur = identraineur;
		this->idsport = idsport;
		this->nom = nom;
	}
	Equipe(int id) {
		this->id = id;
	}


	
	String^ connString = "Data Source=ADAM;Initial Catalog=club;Integrated Security=True";
	void uploadEquipe() {
		try {

			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO equipe  VALUES (@id, @identraineur, @idsport, @nom);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@id", id);
			command.Parameters->AddWithValue("@identraineur", identraineur);
			command.Parameters->AddWithValue("@idsport", idsport);
			command.Parameters->AddWithValue("@nom", nom);

			command.ExecuteNonQuery();


			MessageBox::Show("Equipe ajouter avec succes",
				"Inscription reussie", MessageBoxButtons::OK);
			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de l'enregistrement d'un nouvel Equipe",
				"Échec de l'enregistrement", MessageBoxButtons::OK);
		}
	}
	
	void UpdateEquipe() {



		try {

			SqlConnection^ connection = gcnew SqlConnection(connString);

			connection->Open();

			SqlCommand^ command = connection->CreateCommand();

			command->CommandText = "UPDATE equipe SET identraineur = @identraineur , idsport=@idsport , nom = @nom  WHERE Id = @id";

			command->Parameters->AddWithValue("@id", id);
			command->Parameters->AddWithValue("@identraineur", identraineur);
			command->Parameters->AddWithValue("@idsport", idsport);
			command->Parameters->AddWithValue("@nom", nom);
			

			command->ExecuteNonQuery();

			connection->Close();

			MessageBox::Show(" demodifier  Equipe avec secces",
				"Échec de modifier", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {

			MessageBox::Show("Échec de modifier  l'Equipe",
				"Échec de modifier", MessageBoxButtons::OK);
		}
	}
	void rmvEquipe() {
		SqlConnection^ connection = gcnew SqlConnection(connString);

		try {
			connection->Open();

			SqlCommand^ command = connection->CreateCommand();

			command->CommandText = "DELETE FROM equipe WHERE Id = @id";
			command->Parameters->AddWithValue("@id", id);

			command->ExecuteNonQuery();

			connection->Close();
			MessageBox::Show(" Suprimer  Equipe avec secces",
				"succes", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de supresion  l'equipe",
				"Échec de supresion", MessageBoxButtons::OK);
		}

	}
};

