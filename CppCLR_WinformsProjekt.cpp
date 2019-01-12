#include "stdafx.h"
#include "Form1.h"
#include <conio.h>
#include <stdlib.h>
#include <mysql.h>
#include <stdio.h>
//#include <mysql_connection.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace CppCLR_WinformsProjekt;

[STAThread]
// int main(array<String^>^ args) { // Kann Fehler nach 'using namespace std;' verursachen
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLR_WinformsProjekt::Form1()); // "CppCLR_WinformsProjekt" noch anpassen
	return 0;
}