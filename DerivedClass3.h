#ifndef DERIVEDCLASS3_H
#define DERIVEDCLASS3_H

#include <iostream>
#include "BaseClass.h"

using namespace std;

class DerivedClass3 : public BaseClass
{
public:
	DerivedClass3() {}
	~DerivedClass3() {}
	void simpleFunctionSuper(int a, int b);
};

#endif