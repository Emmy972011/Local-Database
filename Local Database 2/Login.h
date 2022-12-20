#pragma once
#include "Header.h"
#include <msclr\marshal_cppstd.h>

namespace Local_Database_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}
		System::String^ user_t = "";
		System::String^ password_t = "";
	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ user_textbox;
	private: System::Windows::Forms::TextBox^ password_textbox;


	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->user_textbox = (gcnew System::Windows::Forms::TextBox());
			this->password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(95, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User:";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(95, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password:";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(60, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(29, 24);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(60, 93);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(29, 24);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// user_textbox
			// 
			this->user_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_textbox->Location = System::Drawing::Point(176, 19);
			this->user_textbox->Name = L"user_textbox";
			this->user_textbox->Size = System::Drawing::Size(100, 24);
			this->user_textbox->TabIndex = 4;
			this->user_textbox->TextChanged += gcnew System::EventHandler(this, &Form1::user_textbox_TextChanged);
			// 
			// password_textbox
			// 
			this->password_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_textbox->Location = System::Drawing::Point(176, 93);
			this->password_textbox->Name = L"password_textbox";
			this->password_textbox->PasswordChar = '*';
			this->password_textbox->Size = System::Drawing::Size(100, 24);
			this->password_textbox->TabIndex = 5;
			this->password_textbox->TextChanged += gcnew System::EventHandler(this, &Form1::password_textbox_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(137, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(371, 178);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->password_textbox);
			this->Controls->Add(this->user_textbox);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string u_t = msclr::interop::marshal_as<std::string>(this->user_textbox->Text);
		std::string p_t = msclr::interop::marshal_as<std::string>(this->password_textbox->Text);
		char* u_char = const_cast<char*>(u_t.c_str());
		char* p_char = const_cast<char*>(p_t.c_str());
		struct usuario u;
		strcpy_s(u.usuario, u_char);
		strcpy_s(u.password, p_char);
		if (this->user_textbox->Text == "" && this->password_textbox->Text == "")
		{
		MessageBox::Show("Acceso Concedido", "Bienvenido", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Close();
		}
		else if (this->user_textbox->Text == "admin" && this->password_textbox->Text == "admin")
		{
			MessageBox::Show("Acceso Concedido", "Bienvenido", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Close();
		}
		else if (encontrarUsuario(u) == EXIT_SUCCESS)
		{
			MessageBox::Show("Acceso Concedido", "Bienvenido", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Close();
		}
		
		else
			MessageBox::Show("Usuario o Contraseña Incorrecto", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	private: System::Void user_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void password_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	struct usuario u;
	FILE* pf;
	errno_t FR;
	FR = fopen_s(&pf, "u.dat", "rb");
	struct usuario usuarios;
	if (pf == NULL)
	{
		this->user_textbox->Text = "admin";
		this->password_textbox->Text = "admin";
	}
	
}
};
}
