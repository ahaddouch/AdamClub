#pragma once
using namespace System::Data;
using namespace System;
using namespace std;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;
using namespace System::Data;
ref class Equipement
{
private:
	int id;
	String^ nom;
	DateTime^ da;
public:
	Equipement(int id, String^ nom,DateTime^ da) {
		this->id = id;
		this->nom = nom;
		this->da = da;
		
	}
	Equipement(int id) {
		this->id = id;
	}
	String^ connString = "Data Source=ADAM;Initial Catalog=club;Integrated Security=True";
	void uploadEquipement() {
		try {

			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO equipement  VALUES (@id, @nom, @da);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@id", id);
			command.Parameters->AddWithValue("@nom", nom);
			
			command.Parameters->AddWithValue("@da", da);

			command.ExecuteNonQuery();


			MessageBox::Show("Equipement ajouter avec succes",
				"Inscription reussie", MessageBoxButtons::OK);
			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de l'enregistrement d'un nouvel Equipement",
				"Échec de l'enregistrement", MessageBoxButtons::OK);
		}
	}
	
	void UpdateEquipement() {



		try {

			SqlConnection^ connection = gcnew SqlConnection(connString);

			connection->Open();

			SqlCommand^ command = connection->CreateCommand();

			command->CommandText = "UPDATE equipement SET nom = @nom , da=@da WHERE Id = @id";

			command->Parameters->AddWithValue("@id", id);
			command->Parameters->AddWithValue("@nom", nom);
			
			command->Parameters->AddWithValue("@da", da);

			command->ExecuteNonQuery();

			connection->Close();

			MessageBox::Show(" demodifier  Equipement avec secces",
				"Échec de modifier", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {

			MessageBox::Show("Échec de modifier Equipement",
				"Échec de modifier", MessageBoxButtons::OK);
		}
	}
	void rmvEquipement() {
		SqlConnection^ connection = gcnew SqlConnection(connString);

		try {
			connection->Open();

			SqlCommand^ command = connection->CreateCommand();

			command->CommandText = "DELETE FROM equipement WHERE Id = @id";
			command->Parameters->AddWithValue("@id", id);

			command->ExecuteNonQuery();

			connection->Close();
			MessageBox::Show(" Suprimer Equipement avec secces",
				"succes", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de supresion Equipement",
				"Échec de supresion", MessageBoxButtons::OK);
		}

	}
};

