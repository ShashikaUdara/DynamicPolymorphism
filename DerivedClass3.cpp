#include "DerivedClass3.h"

// non virtual function will be overrided here
void DerivedClass3 :: simpleFunctionSuper(int a, int b)
{
	cout<<"This is the derived classes non vertual function"<<endl;
	
	// I'll implement multiplacation as the overrided method
	cout<<"The multiplication of two intergers are: "<< a * b <<endl;
}