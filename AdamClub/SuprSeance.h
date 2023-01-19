#pragma once
#include "Seance.h"

namespace AdamClub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SuprSeance
	/// </summary>
	public ref class SuprSeance : public System::Windows::Forms::Form
	{
	public:
		SuprSeance(void)
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
		~SuprSeance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ lb;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->lb = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lb
			// 
			this->lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lb->FormattingEnabled = true;
			this->lb->ItemHeight = 31;
			this->lb->Location = System::Drawing::Point(627, 128);
			this->lb->Name = L"lb";
			this->lb->Size = System::Drawing::Size(250, 159);
			this->lb->TabIndex = 60;
			this->lb->SelectedIndexChanged += gcnew System::EventHandler(this, &SuprSeance::lb_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button2->Location = System::Drawing::Point(1059, 509);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 51);
			this->button2->TabIndex = 58;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SuprSeance::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(872, 509);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 51);
			this->button1->TabIndex = 59;
			this->button1->Text = L"Supprimer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SuprSeance::button1_Click);
			// 
			// txt_nom
			// 
			this->txt_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_nom->Location = System::Drawing::Point(627, 305);
			this->txt_nom->Margin = System::Windows::Forms::Padding(2);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(250, 38);
			this->txt_nom->TabIndex = 57;
			this->txt_nom->TextChanged += gcnew System::EventHandler(this, &SuprSeance::txt_nom_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(337, 308);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 31);
			this->label2->TabIndex = 55;
			this->label2->Text = L"Nom";
			this->label2->Click += gcnew System::EventHandler(this, &SuprSeance::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(337, 128);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 31);
			this->label1->TabIndex = 56;
			this->label1->Text = L"ID";
			this->label1->Click += gcnew System::EventHandler(this, &SuprSeance::label1_Click);
			// 
			// SuprSeance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(1284, 608);
			this->Controls->Add(this->lb);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SuprSeance";
			this->Text = L"SuprSeance";
			this->Load += gcnew System::EventHandler(this, &SuprSeance::SuprSeance_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
	String^ connString = "Data Source=ADAM;Initial Catalog=club;Integrated Security=True";
	void afterdelete() {
		SqlConnection^ connection = gcnew SqlConnection(connString);

		try {
			lb->Items->Clear();
			txt_nom->Clear();
			connection->Open();

			SqlCommand^ command = connection->CreateCommand();

			command->CommandText = "SELECT id FROM seance";

			SqlDataReader^ reader = command->ExecuteReader();

			lb->Items->Clear();

			while (reader->Read()) {
				lb->Items->Add(reader->GetInt32(0));
			}

			reader->Close();


			connection->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de connection",
				"erroooor", MessageBoxButtons::OK);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void lb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	txt_nom->Clear();



	SqlConnection^ connection = gcnew SqlConnection(connString);

	try {
		connection->Open();

		SqlCommand^ command = connection->CreateCommand();
		int id = Convert::ToInt64(lb->Text);
		command->CommandText = "SELECT  nom  FROM seance WHERE Id = @id";
		command->Parameters->AddWithValue("@id", id);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			txt_nom->Text = reader->GetString(0);

		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("moxkil f cenection",
			"error", MessageBoxButtons::OK);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt64(lb->Text);
	Seance En(id);
	En.rmvSeance();

	afterdelete();
}

private: System::Void txt_nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void SuprSeance_Load(System::Object^ sender, System::EventArgs^ e) {
	afterdelete();
}
};
}
