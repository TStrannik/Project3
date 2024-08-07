#include <iostream>

#pragma once
ref struct addedClass
{
public:
	addedClass()  { std::cout << "addedClass()"  << std::endl;  }
	~addedClass() { std::cout << "~addedClass()" << std::endl; }

	float tripling(float n);

private:
	int inA;
	int inB;
};
