#include "MyForm.h"
#include <Windows.h>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int APPLICATION_START() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project3::MyForm form;
	Application::Run(% form);
	return 0;
}

int main(array<String^>^ args) {

	//MessageBox::Show(L"Welcome to App", L"Application start", MessageBoxButtons::OK, MessageBoxIcon::Information);
	std::cout << "log: start of Application" << std::endl;

	BaseClass BSE;

	//MessageBox::Show(BSE.sayMyName("Hisenberg"));
	MessageBox::Show(BSE.sayGavka().ToString());


	APPLICATION_START();




	BSE.~BaseClass();

	std::cout << "log: The Application is closed" << std::endl;
	system("pause");
	return 0;
}
