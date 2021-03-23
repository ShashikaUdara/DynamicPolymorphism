#ifndef DERIVEDCLASS2_H
#define DERIVEDCLASS2_H

#include <iostream>
#include "BaseClass.h"

using namespace std;

class DerivedClass2 : public BaseClass
{
public:
	DerivedClass2() {}
	~DerivedClass2() {}
	void virtualFunctionSuper(int a, int b);
};

#endif