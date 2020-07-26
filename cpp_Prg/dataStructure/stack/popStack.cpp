#include"./head/stackHeader.h"

void stackClass::popStack()
{
	if(top==-1)
	{
		cout << "Stack is empty, nothing to Pop Out"<<endl;
		exit(0);
	}
	else
	{
		stack[top]=0;
		top--;
	}

return;
}

