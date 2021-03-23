#include "DerivedClass1.h"

// non virtual function will be overrided here
void DerivedClass1 :: virtualFunctionSuper(int a, int b)
{	
	cout<<"DerivedClass1 :: virtualFunctionSuper a/b: "<< a / b <<endl;
}