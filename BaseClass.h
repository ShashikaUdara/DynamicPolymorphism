#ifndef BASECLASS_H
#define BASECLASS_H

#include <iostream>

using namespace std;

class BaseClass
{
public:
	BaseClass() {}
	~BaseClass() {}

	// Run time polymorphism can be applied for both virtual and non vertual methods
	// This is the vertual function to be overridden
	virtual void virtualFunctionSuper(int a, int b) = 0;

	// This is the normal (non vertual) super class function
	void simpleFunctionSuper();

protected:
	int num;
	string strSuper;
};

#endif