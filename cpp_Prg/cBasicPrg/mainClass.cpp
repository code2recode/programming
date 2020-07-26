#include<iostream>


using namespace std;



class stackMainClass
{
private:
	int x, y;
	char *cp;



public:	
	stackMainClass()
	{

		x=10;
		y=12;
	}
	void pushStack();
	void popStack();
	void printStack();



};


int main()
{
	stackMainClass obj;


	cout << obj.x<<endl;


return 0;
}
