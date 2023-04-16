#include "Login.h"
#include "UserMenu.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	BOSAIX::Login form;
	Application::Run(% form);
}
