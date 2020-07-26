#include"./head/stackHeader.h"



void stackClass::printStack()
{
	int i;
	if(top<0)
	{

		cout << "Nothing to Print, Stack is empty"<<endl;
		exit(0);
	}
	else
	{
		cout <<"Stack: ";
		for(i=top;i>=0;i--)
		{
			cout << stack[i] << " - ";
		}
	}
}
