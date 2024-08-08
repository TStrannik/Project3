#pragma once
#include "addedClass.h"

ref struct childClass :
    public addedClass

{
private:

     //addedClass::childClass() { std::cout << "childClass()" << std::endl;  }
    //~childClass() { std::cout << "~childClass()" << std::endl; }

    

public:
    int inCA;
};

