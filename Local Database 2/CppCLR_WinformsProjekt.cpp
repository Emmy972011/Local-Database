#include "pch.h"
#include "Login.h"
#include "App.h"
using namespace System::Windows::Forms;
using namespace System;



[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Local_Database_2::Form1());
	Application::Run(gcnew Local_Database_2::MyForm1());
	return 0;
}