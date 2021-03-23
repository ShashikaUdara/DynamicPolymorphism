#ifndef DERIVEDCLASS1_H
#define DERIVEDCLASS1_H

#include <iostream>
#include "BaseClass.h"

using namespace std;

class DerivedClass1 : public BaseClass
{
public:
	DerivedClass1() {}
	~DerivedClass1() {}
	void virtualFunctionSuper(int a, int b);
};

#endif