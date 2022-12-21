#pragma once
#include "Header.h"
#include <msclr\marshal_cppstd.h>
#include <string.h>
#include <stdlib.h>

namespace Local_Database_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		System::String^ nc = "";

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: 
			System::Windows::Forms::TextBox^ textBox1;
			System::Windows::Forms::ComboBox^ combobox1;
			System::Windows::Forms::TextBox^ textBox3;
			System::Windows::Forms::TextBox^ textBox4;
			System::Windows::Forms::TextBox^ textBox5;
			System::Windows::Forms::TextBox^ textBox6;
			System::Windows::Forms::TextBox^ textBox7;
			System::Windows::Forms::TextBox^ textBox8;

			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Label^ label2;
			System::Windows::Forms::Label^ label3;
			System::Windows::Forms::Label^ label4;
			System::Windows::Forms::Label^ label5;
			System::Windows::Forms::Label^ label6;
			System::Windows::Forms::Label^ label7;
			System::Windows::Forms::Label^ label8;
			System::Object^ array_new;
			System::Windows::Forms::Button^ button1;
			
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
			
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->combobox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());

			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());

			this->button1 = (gcnew System::Windows::Forms::Button());

			this->SuspendLayout();

			this->textBox1->Name = L"textBox1";
			this->combobox1->Name = L"combobox1";
			this->textBox3->Name = L"textBox3";
			this->textBox4->Name = L"textBox4";
			this->textBox5->Name = L"textBox5";
			this->textBox6->Name = L"textBox6";
			this->textBox7->Name = L"textBox7";
			this->textBox8->Name = L"textBox7";

			this->label1->Name = L"label1";
			this->label2->Name = L"label2";
			this->label3->Name = L"label3";
			this->label4->Name = L"label4";
			this->label5->Name = L"label5";
			this->label6->Name = L"label6";
			this->label7->Name = L"label7";
			this->label8->Name = L"label8";

			this->button1->Name = L"button1";			
			this->button1->Text = L"Agregar";

			this->label1->Text = L"Nombre";
			this->label2->Text = L"Carrera";
			this->label3->Text = L"Año Ingreso";
			this->label4->Text = L"Año Nacimiento";
			this->label5->Text = L"Ciudad";
			this->label6->Text = L"Domicilio";
			this->label7->Text = L"Codigo Postal";
			this->label8->Text = L"Telefono";

			this->textBox1->TabIndex = 0;
			this->combobox1->TabIndex = 1;
			this->textBox3->TabIndex = 2;
			this->textBox4->TabIndex = 3;
			this->textBox5->TabIndex = 4;
			this->textBox6->TabIndex = 5;
			this->textBox7->TabIndex = 6;
			this->button1->TabIndex = 7;

			this->button1->Location = System::Drawing::Point(90, 260);
			this->button1->Size = System::Drawing::Size(110, 24);
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);

			this->textBox1->Location = System::Drawing::Point(160, 10);
			this->textBox1->Size = System::Drawing::Size(110, 13);
			this->combobox1->Location = System::Drawing::Point(160, 40);
			this->combobox1->Size = System::Drawing::Size(110, 13);
			this->textBox3->Location = System::Drawing::Point(160, 70);
			this->textBox3->Size = System::Drawing::Size(110, 13);
			this->textBox4->Location = System::Drawing::Point(160, 100);
			this->textBox4->Size = System::Drawing::Size(110, 13);
			this->textBox5->Location = System::Drawing::Point(160, 130);
			this->textBox5->Size = System::Drawing::Size(110, 13);
			this->textBox6->Location = System::Drawing::Point(160, 160);
			this->textBox6->Size = System::Drawing::Size(110, 13);
			this->textBox7->Location = System::Drawing::Point(160, 190);
			this->textBox7->Size = System::Drawing::Size(110, 13);
			this->textBox8->Location = System::Drawing::Point(160, 220);
			this->textBox8->Size = System::Drawing::Size(110, 13);

			this->label1->Location = System::Drawing::Point(10, 10);
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label2->Location = System::Drawing::Point(10, 40);
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label3->Location = System::Drawing::Point(10, 70);
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label4->Location = System::Drawing::Point(10, 100);
			this->label4->Size = System::Drawing::Size(87, 13);
			this->label5->Location = System::Drawing::Point(10, 130);
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label6->Location = System::Drawing::Point(10, 160);
			this->label6->Size = System::Drawing::Size(87, 13);
			this->label7->Location = System::Drawing::Point(10, 190);
			this->label7->Size = System::Drawing::Size(87, 13);
			this->label8->Location = System::Drawing::Point(10, 220);
			this->label8->Size = System::Drawing::Size(87, 13);

			

			// 
			// MyForm2
			//
			
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->combobox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);

			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);


			this->Controls->Add(this->button1);

			this->Name = L"MyForm2";
			this->Size = System::Drawing::Size(300, 330);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string n_t = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
		std::string c_t = msclr::interop::marshal_as<std::string>(this->combobox1->Text);
		std::string g_t = msclr::interop::marshal_as<std::string>(this->textBox3->Text);
		std::string f_t = msclr::interop::marshal_as<std::string>(this->textBox4->Text);
		std::string ci_t = msclr::interop::marshal_as<std::string>(this->textBox5->Text);
		std::string d_t = msclr::interop::marshal_as<std::string>(this->textBox6->Text);
		std::string cp_t = msclr::interop::marshal_as<std::string>(this->textBox7->Text);
		std::string t_t = msclr::interop::marshal_as<std::string>(this->textBox8->Text);
		
		if ((n_t.length()>39 || c_t.length()>39 || ci_t.length()>39 || d_t.length()>39|| t_t.length()>39) || 
			(n_t.length()<2 || c_t.length()<2 || ci_t.length()<2 || d_t.length()<2 || t_t.length()<2))
		{
			MessageBox::Show("Nombre o Contraseña muy largo", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			char* n_char = const_cast<char*>(n_t.c_str());
			char* c_char = const_cast<char*>(c_t.c_str());
			char* ci_char = const_cast<char*>(ci_t.c_str());
			char* d_char = const_cast<char*>(d_t.c_str());
			char* t_char = const_cast<char*>(t_t.c_str());

			unsigned short int g_i = atoi(const_cast<char*>(g_t.c_str()));
			unsigned short int f_i = atoi(const_cast<char*>(f_t.c_str()));
			unsigned short int cp_i = atoi(const_cast<char*>(cp_t.c_str()));

			alumno a;

			strcpy_s(a.nombre, n_char);
			strcpy_s(a.carrera, c_char);
			strcpy_s(a.ciudad, ci_char);
			strcpy_s(a.direccion, d_char);
			strcpy_s(a.telefono, t_char);

			a.generacion = g_i;
			a.fechaNac = f_i;
			a.codigoPostal = cp_i;
			a.alta = 1;
			if (registrarAlumno(a) == EXIT_SUCCESS)
			{
				MessageBox::Show("Alumno Agregado con Exito", "Alumno Agregado", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Close();
			}
			else
			{
				MessageBox::Show("Error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Close();
			}			
			Close();
		}		
		}

	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		FILE* pf2;
		char c_char[40];
		std::string c_t;
		errno_t FR;
		FR = fopen_s(&pf2, "c.dat", "rb");
		if (pf2 != NULL)
		{
			fread(&c_char, sizeof(char[40]), 1, pf2);
			while (!feof(pf2))
			{
				c_t = c_char;
				nc = gcnew String(c_t.c_str());
				this->combobox1->Items->Add(nc);
				fread(&c_char, sizeof(char[40]), 1, pf2);
			}
			fclose(pf2);
		
		}
			
	}
};
}