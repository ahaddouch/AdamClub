#pragma once
#include "Equipe.h"
#include "Entraineur.h"

namespace AdamClub {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddEquipe
	/// </summary>
	public ref class AddEquipe : public System::Windows::Forms::Form
	{
	public:
		AddEquipe(void)
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
		~AddEquipe()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::TextBox^ txt_id;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbe;
	private: System::Windows::Forms::ComboBox^ cbs;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_nom;



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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbe = (gcnew System::Windows::Forms::ComboBox());
			this->cbs = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button2->Location = System::Drawing::Point(959, 439);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 51);
			this->button2->TabIndex = 50;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddEquipe::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(772, 439);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 51);
			this->button1->TabIndex = 51;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddEquipe::button1_Click);
			// 
			// txt_id
			// 
			this->txt_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_id->Location = System::Drawing::Point(556, 62);
			this->txt_id->Margin = System::Windows::Forms::Padding(2);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(250, 38);
			this->txt_id->TabIndex = 49;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(280, 272);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 31);
			this->label3->TabIndex = 44;
			this->label3->Text = L"Sport";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(280, 211);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(282, 31);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Entraineur Desponible";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(280, 64);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 31);
			this->label1->TabIndex = 46;
			this->label1->Text = L"ID";
			// 
			// cbe
			// 
			this->cbe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->cbe->FormattingEnabled = true;
			this->cbe->Location = System::Drawing::Point(556, 205);
			this->cbe->Margin = System::Windows::Forms::Padding(2);
			this->cbe->Name = L"cbe";
			this->cbe->Size = System::Drawing::Size(250, 39);
			this->cbe->TabIndex = 55;
			// 
			// cbs
			// 
			this->cbs->AccessibleDescription = L" ";
			this->cbs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->cbs->FormattingEnabled = true;
			this->cbs->Location = System::Drawing::Point(556, 267);
			this->cbs->Margin = System::Windows::Forms::Padding(2);
			this->cbs->Name = L"cbs";
			this->cbs->Size = System::Drawing::Size(250, 39);
			this->cbs->TabIndex = 55;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(280, 142);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(179, 31);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Nom d\'equipe";
			// 
			// txt_nom
			// 
			this->txt_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_nom->Location = System::Drawing::Point(556, 137);
			this->txt_nom->Margin = System::Windows::Forms::Padding(2);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(250, 38);
			this->txt_nom->TabIndex = 49;
			this->txt_nom->TextChanged += gcnew System::EventHandler(this, &AddEquipe::textBox1_TextChanged);
			// 
			// AddEquipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(1300, 647);
			this->Controls->Add(this->cbs);
			this->Controls->Add(this->cbe);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AddEquipe";
			this->Text = L"AddEquipe";
			this->Load += gcnew System::EventHandler(this, &AddEquipe::AddEquipe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		String^ connString = "Data Source=ADAM;Initial Catalog=club;Integrated Security=True";
		void GetEntraineur() {
			
		}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
private: System::Void AddEquipe_Load(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ connection = gcnew SqlConnection(connString);

	try {

		connection->Open();


		SqlCommand^ command = connection->CreateCommand();

		command->CommandText = "SELECT nom FROM entraineur where id not in(select identraineur from equipe);";

		SqlDataReader^ reader = command->ExecuteReader();

		cbe->Items->Clear();

		while (reader->Read()) {
			cbe->Items->Add(reader->GetString(0));
		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Échec de connection entraineur",
			"erroooor", MessageBoxButtons::OK);
	}
	try {

		connection->Open();


		SqlCommand^ command = connection->CreateCommand();

		command->CommandText = "SELECT nom FROM sport";

		SqlDataReader^ reader = command->ExecuteReader();

		cbs->Items->Clear();
		

		while (reader->Read()) {
			cbs->Items->Add(reader->GetString(0));
		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Échec de connection sport",
			"erroooor", MessageBoxButtons::OK);
	}

	

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	SqlConnection^ connection = gcnew SqlConnection(connString);
	int id = Convert::ToInt32(txt_id->Text);
	String^ nom = txt_nom->Text;
	String^ etr=cbe->Text;
	String^ spo=cbs->Text;
	int entraineur;
	int sport;


	try {
		connection->Open();

		SqlCommand^ command = connection->CreateCommand();
		
		command->CommandText = "SELECT  Id  FROM entraineur WHERE nom = @nom";
		command->Parameters->AddWithValue("@nom", etr);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			entraineur= reader->GetInt32(0);

		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("moxkil f cenection",
			"error", MessageBoxButtons::OK);
	}
	////////////////////
	try {
		connection->Open();

		SqlCommand^ command = connection->CreateCommand();
		
		command->CommandText = "SELECT  Id  FROM sport WHERE nom = @nom";
		command->Parameters->AddWithValue("@nom",spo);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			sport = reader->GetInt32(0);

		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("moxkil f cenection",
			"error", MessageBoxButtons::OK);
	}
	/////////////////////////////////
	Equipe eq(id, entraineur, sport, nom);
	eq.uploadEquipe();
	txt_id->Clear();
	txt_nom->Clear();
	cbe->SelectedValue = -1;
	cbs->SelectedValue = -1;

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
