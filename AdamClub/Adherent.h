#pragma once
#include <iostream>
#include "Personne.h"
//#include <vector>
using namespace System::Data;
using namespace System;
using namespace std;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;
using namespace System::Data;
ref class Adherent:public Personne
{
private:
	
	DateTime^ da;
	int idequipe;

public:
	
	Adherent(int id, String^ nom, String^ tel, DateTime^ dn, DateTime^ da,int  idequipe) {
		this->id = id;
		this->nom = nom;
		this->tel =tel;
		this->dn = dn;
		this->da = da;
		this->idequipe = idequipe;
	}
	Adherent(int id) {
		this->id = id;
	}


	
	String^ connString = "Data Source=ADAM;Initial Catalog=club;Integrated Security=True";
	void upload() {
		try {
			
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO adherent  VALUES (@id, @nom, @tel, @dn, @da,@idequipe);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@id", id);
			command.Parameters->AddWithValue("@nom", nom);
			command.Parameters->AddWithValue("@tel", tel);
			command.Parameters->AddWithValue("@dn", dn);
			command.Parameters->AddWithValue("@da", da);
			command.Parameters->AddWithValue("@idequipe", idequipe);

			command.ExecuteNonQuery();


			MessageBox::Show("Adherent ajouter avec succes",
				"Inscription reussie", MessageBoxButtons::OK);
			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de l'enregistrement d'un nouvel adhérent",
				"Échec de l'enregistrement", MessageBoxButtons::OK);
		}
	}
	
	void Update() {
		
		

		try {
		
			SqlConnection^ connection = gcnew SqlConnection(connString);

			connection->Open();

 			SqlCommand^ command = connection->CreateCommand();

 			command->CommandText = "UPDATE adherent SET nom = @nom , tele=@tel , dn = @dn ,da=@da,idequipe=@idequipe WHERE Id = @id";

 			command->Parameters->AddWithValue("@id", id);
			command->Parameters->AddWithValue("@nom", nom);
			command->Parameters->AddWithValue("@tel", tel);
			command->Parameters->AddWithValue("@dn", dn);
			command->Parameters->AddWithValue("@da", da);
			command->Parameters->AddWithValue("@idequipe", idequipe);
 			command->ExecuteNonQuery();

 			connection->Close();

			MessageBox::Show(" demodifier  adhérent avec secces",
				"Échec de modifier", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {
			
			MessageBox::Show("Échec de modifier  l'adhérent",
				"Échec de modifier", MessageBoxButtons::OK);
		}
	}
	void rmv() {
		SqlConnection^ connection = gcnew SqlConnection(connString);

		try {
 			connection->Open();

 			SqlCommand^ command = connection->CreateCommand();

 			command->CommandText = "DELETE FROM adherent WHERE Id = @id";
			command->Parameters->AddWithValue("@id", id);

 			command->ExecuteNonQuery();

 			connection->Close();
			MessageBox::Show(" Suprimer  adhérent avec secces",
				"succes", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de supresion  l'adhérent",
				"Échec de supresion", MessageBoxButtons::OK);
		}
	
	}

	
};



