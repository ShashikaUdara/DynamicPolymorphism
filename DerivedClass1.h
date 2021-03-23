#ifndef DERIVEDCLASS1_H
#define DERIVEDCLASS1_H

#include <iostream>

using namespace std;

class DerivedClass1 : public BaseClass
{
public:
	DerivedClass1() {}
	~DerivedClass1() {}
	void virtualFunctionSuper();
	void simpleFunctionSuper();
};

#endif