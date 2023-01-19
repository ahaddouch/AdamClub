#pragma once

namespace AdamClub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdherentToEquipe
	/// </summary>
	public ref class AdherentToEquipe : public System::Windows::Forms::Form
	{
	public:
		AdherentToEquipe(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdherentToEquipe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ lba;
	protected:

	private: System::Windows::Forms::ListBox^ lbe;
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ lbae;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lba = (gcnew System::Windows::Forms::ListBox());
			this->lbe = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbae = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lba
			// 
			this->lba->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->lba->FormattingEnabled = true;
			this->lba->ItemHeight = 31;
			this->lba->Location = System::Drawing::Point(208, 107);
			this->lba->Name = L"lba";
			this->lba->Size = System::Drawing::Size(268, 314);
			this->lba->TabIndex = 0;
			this->lba->SelectedIndexChanged += gcnew System::EventHandler(this, &AdherentToEquipe::lba_SelectedIndexChanged);
			// 
			// lbe
			// 
			this->lbe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->lbe->FormattingEnabled = true;
			this->lbe->ItemHeight = 31;
			this->lbe->Location = System::Drawing::Point(564, 107);
			this->lbe->Name = L"lbe";
			this->lbe->Size = System::Drawing::Size(268, 314);
			this->lbe->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button2->Location = System::Drawing::Point(1025, 505);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 51);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdherentToEquipe::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(683, 505);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 51);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdherentToEquipe::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(622, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 78);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Equipe \r\nDisponible";
			this->label1->Click += gcnew System::EventHandler(this, &AdherentToEquipe::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(275, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 39);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Atherent";
			// 
			// lbae
			// 
			this->lbae->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->lbae->FormattingEnabled = true;
			this->lbae->ItemHeight = 31;
			this->lbae->Location = System::Drawing::Point(924, 107);
			this->lbae->Name = L"lbae";
			this->lbae->Size = System::Drawing::Size(268, 314);
			this->lbae->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(976, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 78);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Equipe de\r\n l\'atherent";
			this->label3->Click += gcnew System::EventHandler(this, &AdherentToEquipe::label1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button3->Location = System::Drawing::Point(854, 505);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(167, 51);
			this->button3->TabIndex = 41;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdherentToEquipe::button3_Click);
			// 
			// AdherentToEquipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(1284, 608);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbae);
			this->Controls->Add(this->lbe);
			this->Controls->Add(this->lba);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdherentToEquipe";
			this->Text = L"AdherentToEquipe";
			this->Load += gcnew System::EventHandler(this, &AdherentToEquipe::AdherentToEquipe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
public:
		   String^ connString = "Data Source=ADAM;Initial Catalog=club;Integrated Security=True";
		   void syc() {
			   SqlConnection^ connection = gcnew SqlConnection(connString);
			   int ather;
			   try {
				   connection->Open();

				   SqlCommand^ command = connection->CreateCommand();

				   command->CommandText = "SELECT  Id  FROM adherent WHERE nom = @nom";
				   command->Parameters->AddWithValue("@nom", lba->Text);

				   SqlDataReader^ reader = command->ExecuteReader();

				   if (reader->Read()) {
					   ather = reader->GetInt32(0);

				   }

				   reader->Close();

				   connection->Close();
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("moxkil f cenection",
					   "error", MessageBoxButtons::OK);
			   }
			   try {
				   SqlConnection^ connection = gcnew SqlConnection(connString);
				   connection->Open();


				   SqlCommand^ command = connection->CreateCommand();

				   command->CommandText = "SELECT nom FROM equipe where id in(select idequipe from atherentequipe where idatherent=@id)";
				   command->Parameters->AddWithValue("@id", ather);

				   SqlDataReader^ reader = command->ExecuteReader();

				   lbae->Items->Clear();

				   while (reader->Read()) {
					   lbae->Items->Add(reader->GetString(0));
				   }

				   reader->Close();

				   connection->Close();
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Échec de connection",
					   "erroooor", MessageBoxButtons::OK);
			   }
			   try {

				   connection->Open();


				   SqlCommand^ command = connection->CreateCommand();

				   command->CommandText = "SELECT nom FROM equipe where id not in(select idequipe from atherentequipe where idatherent=@id)";
				   command->Parameters->AddWithValue("@id", ather);

				   SqlDataReader^ reader = command->ExecuteReader();

				   lbe->Items->Clear();

				   while (reader->Read()) {
					   lbe->Items->Add(reader->GetString(0));
				   }

				   reader->Close();

				   connection->Close();
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Échec de connection",
					   "erroooor", MessageBoxButtons::OK);
			   }
		   }

private: System::Void AdherentToEquipe_Load(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ connection = gcnew SqlConnection(connString);

	try {

		connection->Open();


		SqlCommand^ command = connection->CreateCommand();

		command->CommandText = "SELECT nom FROM adherent";

		SqlDataReader^ reader = command->ExecuteReader();

		lba->Items->Clear();

		while (reader->Read()) {
			lba->Items->Add(reader->GetString(0));
		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Échec de connection",
			"erroooor", MessageBoxButtons::OK);
	}
	//////////////////////////////////////////
	try {

		connection->Open();


		SqlCommand^ command = connection->CreateCommand();

		command->CommandText = "SELECT nom FROM equipe";

		SqlDataReader^ reader = command->ExecuteReader();

		lbe->Items->Clear();

		while (reader->Read()) {
			lbe->Items->Add(reader->GetString(0));
		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Échec de connection",
			"erroooor", MessageBoxButtons::OK);
	}
	////////////////////////////////////////////

	
}
	   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ connection = gcnew SqlConnection(connString);
	int adh, eqp;
	try {
		connection->Open();

		SqlCommand^ command = connection->CreateCommand();

		command->CommandText = "SELECT  Id  FROM equipe WHERE nom = @nom";
		command->Parameters->AddWithValue("@nom", lbe->Text);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			eqp = reader->GetInt32(0);

		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("moxkil f cenection",
			"error", MessageBoxButtons::OK);
	}
	/////////////////////////////////////
	try {
		connection->Open();

		SqlCommand^ command = connection->CreateCommand();

		command->CommandText = "SELECT  Id  FROM adherent WHERE nom = @nom";
		command->Parameters->AddWithValue("@nom", lba->Text);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			adh = reader->GetInt32(0);

		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("moxkil f cenection",
			"error", MessageBoxButtons::OK);
	}

	////////////////////////////////
	
	try {

		SqlConnection sqlConn(connString);
		sqlConn.Open();


		String^ sqlQuery = "INSERT INTO atherentequipe  VALUES (@idequipe, @idatherent);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@idequipe", eqp);
		command.Parameters->AddWithValue("@idatherent", adh);

		

		command.ExecuteNonQuery();


		MessageBox::Show("Equipe ajouter avec succes",
			"Inscription reussie", MessageBoxButtons::OK);
		sqlConn.Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Échec de l'enregistrement ",
			"Échec de l'enregistrement", MessageBoxButtons::OK);
	}
	syc();
}
private: System::Void lba_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	syc();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ connection = gcnew SqlConnection(connString);
	int adh, eqp;
	try {
		connection->Open();

		SqlCommand^ command = connection->CreateCommand();

		command->CommandText = "SELECT  Id  FROM equipe WHERE nom = @nom";
		command->Parameters->AddWithValue("@nom", lbae->Text);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			eqp = reader->GetInt32(0);

		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("moxkil f cenection",
			"error", MessageBoxButtons::OK);
	}
	/////////////////////////////////////
	try {
		connection->Open();

		SqlCommand^ command = connection->CreateCommand();

		command->CommandText = "SELECT  Id  FROM adherent WHERE nom = @nom";
		command->Parameters->AddWithValue("@nom", lba->Text);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			adh = reader->GetInt32(0);

		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("moxkil f cenection",
			"error", MessageBoxButtons::OK);
	}
	
	

	try {
		connection->Open();

		SqlCommand^ command = connection->CreateCommand();

		command->CommandText = "DELETE FROM atherentequipe WHERE Idatherent = @ida and idequipe=@ide";
		command->Parameters->AddWithValue("@ide", eqp);
		command->Parameters->AddWithValue("@ida", adh);

		command->ExecuteNonQuery();

		connection->Close();
		MessageBox::Show(" Suprimer Equipe avec secces",
			"succes", MessageBoxButtons::OK);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Échec de supresion Equipe",
			"Échec de supresion", MessageBoxButtons::OK);
	}
	syc();
}
};
}
