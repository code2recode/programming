#include<iostream>
#include<stdint.h>
#include<stdlib.h>
using namespace std;


class stackClass
{
	public:
		stackClass()
		{
			top=-1;
		}	

		void pushStack();
		void popStack();
		void printStack();
	private:
		int top;
		int stack[20];

};


