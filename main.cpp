#include <iostream>
#include "BaseClass.h"
#include "DerivedClass1.h"
#include "DerivedClass2.h"
#include "DerivedClass3.h"

using namespace std;

int main()
{
	// This is a simple demonstration one of polymorphism technic wecalled Dynamic Polumorphysm (Run time polymorphsm)
	// Run time polymorphsm happence when you override your code.
	// overriding means changing derived method from original method.

	BaseClass *base = NULL;

	DerivedClass1 d1;
	DerivedClass2 d2;
	DerivedClass3 d3;

	// executes the base classes non virtual non overrided class
	base->simpleFunctionSuper(20, 30);

	// Run time polymorphism goes here
	base = &d1;
	base->virtualFunctionSuper(50, 5);

	base = &d2;
	base->virtualFunctionSuper(50, 30);

	base = &d3;
	base->simpleFunctionSuper(20, 3);

}