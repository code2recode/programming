#include"./head/stackHeader.h"



void stackClass::pushStack()
{
	if(top>9)
	{
		cout<<"Stack is full"<<endl;
		exit(0);
	}
	else 
	{
		top++;
		cout <<"Please enter the Data:"<<endl;
		cin>> stack[top];

	}
}
