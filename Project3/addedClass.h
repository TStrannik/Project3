#include <iostream>

#pragma once
ref struct addedClass
{
public:
	 addedClass() { std::cout << " addedClass()"  << std::endl; }
	~addedClass() { std::cout << " ~addedClass()" << std::endl; }

	virtual float tripling(float n);

private:
	int inA_;
	int inB_;

};



ref struct chillClass :
	public addedClass 
{
public:
	 chillClass() { std::cout << " chillClass()"  << std::endl; }
	~chillClass() { std::cout << " ~chillClass()" << std::endl; }

	int pubA;
	int get_gavka(int a) { return a * inAA_; }

private:
	int inAA_ = 4;
	int inAB_;

};

//int chillClass::get_gavka(int a) {
//	return a * 3;
//}