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
	std::cout << std::endl <<" Start of Application\n" << std::endl;
	




	BaseClass BaCl;
	std::cout << " BaCl.sayMyName: " << BaCl.sayMyName("BaCl") << std::endl;
	std::cout << " BaCl.trippling: " << BaCl.tripling(1.24)    << std::endl;
	std::cout << std::endl;

	ChildClass ChCl;
	std::cout << " ChCl.sayMyName: " << ChCl.sayMyName("ChCl") << std::endl;
	std::cout << " ChCl.trippling: " << ChCl.tripling(1.01)    << std::endl;
	std::cout << std::endl;


	addedClass adCl;
	std::cout << " adCl.trippling: " << adCl.tripling(1.01) << std::endl;
	std::cout << std::endl;


	// Ne idet
	//childClass CEE;


	std::cout << std::endl << std::endl;


	APPLICATION_START();
	

	std::cout << " Application is closed" << std::endl;
	system("pause");
	return 0;
}

// КЛАССЫ
// 
// (+) Создать базовый класс
// (+) Создать дочерний класс
// (+) Создать базовый класс в .h + .cpp
// ( ) Создать дочерний класс в .h + .cpp
// 
// ( ) Подключить внешние классы файлами .h + .cpp



// GIT
// 
// ( ) мастер-ветка v0.2.0