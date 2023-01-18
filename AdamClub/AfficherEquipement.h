#pragma once
#include "Equipement.h"

namespace AdamClub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AfficherEquipement
	/// </summary>
	public ref class AfficherEquipement : public System::Windows::Forms::Form
	{
	public:
		AfficherEquipement(void)
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
		~AfficherEquipement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_find;
	protected:
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->txt_find = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_find
			// 
			this->txt_find->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_find->Location = System::Drawing::Point(464, 55);
			this->txt_find->Margin = System::Windows::Forms::Padding(2);
			this->txt_find->Name = L"txt_find";
			this->txt_find->Size = System::Drawing::Size(314, 31);
			this->txt_find->TabIndex = 3;
			this->txt_find->Tag = L"jjjjjjjjj";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->dataGridView1->ColumnHeadersHeight = 34;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 215);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1284, 393);
			this->dataGridView1->TabIndex = 2;
			// 
			// AfficherEquipement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(1284, 608);
			this->Controls->Add(this->txt_find);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AfficherEquipement";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &AfficherEquipement::AfficherEquipement_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AfficherEquipement_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=ADAM;Initial Catalog=club;Integrated Security=True";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();

			SqlCommand^ command = connection->CreateCommand();

			command->CommandText = "SELECT * FROM equipement";

			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);

			DataSet^ dataSet = gcnew DataSet();

			dataAdapter->Fill(dataSet, "equipement");

			BindingSource^ bindingSource = gcnew BindingSource();
			bindingSource->DataSource = dataSet->Tables["equipement"];

			dataGridView1->DataSource = bindingSource;

			connection->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de l'enregistrement d'un nouvel Equipement",
				"Échec de l'enregistrement", MessageBoxButtons::OK);
		}
	}
	};
}
