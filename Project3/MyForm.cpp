#include "MyForm.h"
#include <Windows.h>
#include <iostream>

#include "addedClass.h"
#include "childClass.h"

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
	std::cout << "Start of Application" << std::endl;





	BaseClass BCE;
	std::cout << "BSE.sayMyName return: " << BCE.sayMyName("Hisenberg") << std::endl;
	std::cout << "BSE.trippling return: " << BCE.tripling(1.24)			<< std::endl;



	addedClass ACE;
	std::cout << "BSE.trippling return: " << ACE.tripling(1.01)			<< std::endl;


	// Ne idet
	childClass CEE;


	


	////////////////////
	////////////////////
	APPLICATION_START();
	////////////////////
	////////////////////

	std::cout << "Application is closed" << std::endl;
	system("pause");
	return 0;
}
