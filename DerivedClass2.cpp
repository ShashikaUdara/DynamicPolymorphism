#include "DerivedClass2.h"

// non virtual function will be overrided here
void DerivedClass2 :: virtualFunctionSuper(int a, int b)
{	
	cout<<"DerivedClass2 :: virtualFunctionSuper a-b: "<< a - b <<endl;
}