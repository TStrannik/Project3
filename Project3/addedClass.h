#include <iostream>

#pragma once
ref class addedClass
{
public:
	addedClass()  { std::cout << "addedClass()" << std::endl;  }
	~addedClass() { std::cout << "~addedClass()" << std::endl; }

	float tripling(float n) { return n * 3; }
private:
	int inA;
	int inB;
};

