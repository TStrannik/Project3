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
// ver 0.2.0
int main(array<String^>^ args) {

	//MessageBox::Show(L"Welcome to App", L"Application start", MessageBoxButtons::OK, MessageBoxIcon::Information);

	system("color 70");
	std::cout << "\n APPLICATION START\n" << std::endl;
	




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

	chillClass clCl;	clCl.pubA = 2;
	std::cout << " clCl.get_gavka: " << clCl.get_gavka(4) << std::endl;




	// Ne idet
	//childClass CEE;
	





	std::cout << std::endl << std::endl;


	APPLICATION_START();
	

	std::cout << "\n APPLICATION END\n\n";
	system("pause");
	return 0;
}





// КЛАССЫ
// 
// (+) Создать базовый класс
// (+) Создать дочерний класс
// (+) Создать базовый класс в .h + .cpp
// (+) Создать дочерний класс в файле базового
// ( ) Создать дочерний класс в .h + .cpp
// ( ) 
// ( ) 
// ( ) 

// Sorting algorithm
//
// ( ) 

// Vector
//
// ( ) 
// ( ) 

// GIT
// 
// ( ) откат-ветвление
// ( ) мастер-ветка v0.2.0


// Указатели
// 
// ( ) 

// Threads
// 
// ( ) 


// RoadMap
// https://codelab.pro/roadmap-po-izucheniyu-c-v-2024-godu/
// 
// Classes
// https://gist.github.com/NickTikhomirov/051349d9997ce66439a7176792ce19cb
// 
