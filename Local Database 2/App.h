#pragma once
#include <stdlib.h>
#include <string.h>
#include "AgregarAlumnos.h"
#include "Carreras.h"
#include "Usuarios.h"
#include "Header.h"

namespace Local_Database_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		
	System::String^ ns = "";
	System::String^ nc = "";
	System::String^ ng = "";
	System::String^ nf = "";
	System::String^ nci = "";
	System::String^ nd = "";
	System::String^ ncp = "";
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Alumno;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Carrera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha_Naci;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ciudad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Direccion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CodigoPostal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;
		   System::String^ nt = "";

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label8;









	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Alumno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Carrera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha_Naci = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ciudad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Direccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CodigoPostal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(131, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Agregar Usuario";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(131, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Agregar Estudiante";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(350, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Agregar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(212, 17);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(132, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Agregar Carrera y Materias";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Alumno,
					this->Carrera, this->Codigo, this->Fecha_Naci, this->Ciudad, this->Direccion, this->CodigoPostal, this->Telefono
			});
			this->dataGridView1->Location = System::Drawing::Point(13, 70);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(750, 277);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(291, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Refrescar";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(350, 41);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Agregar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// Alumno
			// 
			this->Alumno->HeaderText = L"Alumno";
			this->Alumno->Name = L"Alumno";
			this->Alumno->ReadOnly = true;
			// 
			// Carrera
			// 
			this->Carrera->HeaderText = L"Carrera";
			this->Carrera->Name = L"Carrera";
			this->Carrera->ReadOnly = true;
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Fecha Ingreso";
			this->Codigo->Name = L"Codigo";
			this->Codigo->ReadOnly = true;
			// 
			// Fecha_Naci
			// 
			this->Fecha_Naci->HeaderText = L"Fecha Nacimiento";
			this->Fecha_Naci->Name = L"Fecha_Naci";
			this->Fecha_Naci->ReadOnly = true;
			// 
			// Ciudad
			// 
			this->Ciudad->HeaderText = L"Ciudad";
			this->Ciudad->Name = L"Ciudad";
			this->Ciudad->ReadOnly = true;
			// 
			// Direccion
			// 
			this->Direccion->HeaderText = L"Direccion";
			this->Direccion->Name = L"Direccion";
			this->Direccion->ReadOnly = true;
			// 
			// CodigoPostal
			// 
			this->CodigoPostal->HeaderText = L"CodigoPostal";
			this->CodigoPostal->Name = L"CodigoPostal";
			this->CodigoPostal->ReadOnly = true;
			// 
			// Telefono
			// 
			this->Telefono->HeaderText = L"Telefono";
			this->Telefono->Name = L"Telefono";
			this->Telefono->ReadOnly = true;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(775, 359);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"Administrador Local";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2().ShowDialog();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm12().ShowDialog();
}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	std::string n_t;
	std::string c_t;
	std::string g_t;
	std::string f_t;
	std::string ci_t;
	std::string d_t;
	std::string cp_t;
	std::string t_t;

	char n_char[40];
	char c_char[40];
	char g_char[40];
	char f_char[40];
	char ci_char[40];
	char d_char[40];
	char cp_char[40];
	char t_char[40];
	FILE* pf;
	struct alumno registro;
	errno_t FR;
	FR = fopen_s(&pf, "a.dat", "rb");
	if (pf != NULL)
	{
		this->dataGridView1->Rows->Clear();
		fread(&registro, sizeof(struct alumno), 1, pf);
		while (!feof(pf))
		{

			strcpy_s(n_char, registro.nombre);
			strcpy_s(c_char, registro.carrera);
			strcpy_s(ci_char, registro.ciudad);
			strcpy_s(d_char, registro.direccion);
			strcpy_s(t_char, registro.telefono);

			sprintf_s(g_char, "%hi", registro.generacion);
			sprintf_s(f_char, "%hi", registro.fechaNac);
			sprintf_s(cp_char, "%hi", registro.codigoPostal);

			n_t = n_char;
			c_t = c_char;
			ci_t = ci_char;
			d_t = d_char;
			t_t = t_char;

			g_t = g_char;
			f_t = f_char;
			cp_t = cp_char;

			ns = gcnew String(n_t.c_str());
			nc = gcnew String(c_t.c_str());
			ng = gcnew String(g_t.c_str());
			nf = gcnew String(f_t.c_str());
			nci = gcnew String(ci_t.c_str());
			ncp = gcnew String(cp_t.c_str());
			nd = gcnew String(d_t.c_str());
			nt = gcnew String(t_t.c_str());

			this->dataGridView1->Rows->Add(gcnew cli::array < System::String^>(8) {
				ns,
					nc,
					ng,
					nf,
					nci,
					nd,
					ncp,
					nt,
			});
			fread(&registro, sizeof(struct alumno), 1, pf);
		}
		fclose(pf);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm11().ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string n_t;
	std::string c_t;
	std::string g_t;
	std::string f_t;
	std::string ci_t;
	std::string d_t;
	std::string cp_t;
	std::string t_t;

	char n_char[40];
	char c_char[40];
	char g_char[40];
	char f_char[40];
	char ci_char[40];
	char d_char[40];
	char cp_char[40];
	char t_char[40];
	FILE* pf;
	struct alumno registro;
	errno_t FR;
	FR = fopen_s(&pf, "a.dat", "rb");
	if (pf == NULL)
		MessageBox::Show("Error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else
	{
		this->dataGridView1->Rows->Clear();
		fread(&registro, sizeof(struct alumno), 1, pf);
		while (!feof(pf))
		{
			
			strcpy_s(n_char, registro.nombre);
			strcpy_s(c_char, registro.carrera);
			strcpy_s(ci_char, registro.ciudad);
			strcpy_s(d_char, registro.direccion);
			strcpy_s(t_char, registro.telefono);

			sprintf_s(g_char, "%hi", registro.generacion);
			sprintf_s(f_char, "%hi", registro.fechaNac);
			sprintf_s(cp_char, "%hi", registro.codigoPostal);

			n_t = n_char;
			c_t = c_char;
			ci_t = ci_char;
			d_t = d_char;
			t_t = t_char;

			g_t = g_char;
			f_t = f_char;
			cp_t = cp_char;

			ns = gcnew String(n_t.c_str());
			nc = gcnew String(c_t.c_str());
			ng = gcnew String(g_t.c_str());
			nf = gcnew String(f_t.c_str());
			nci = gcnew String(ci_t.c_str());
			ncp = gcnew String(cp_t.c_str());
			nd = gcnew String(d_t.c_str());
			nt = gcnew String(t_t.c_str());

			this->dataGridView1->Rows->Add(gcnew cli::array < System::String^>(8) {
					ns,
					nc,
					ng,
					nf,
					nci,
					nd,
					ncp,
					nt,
			});
			fread(&registro, sizeof(struct alumno), 1, pf);
		}
		fclose(pf);
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
