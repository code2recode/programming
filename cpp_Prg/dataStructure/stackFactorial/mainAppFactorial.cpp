#include"headerFact.h"

int main()
{
	int factNo;
int pow=2;
	factorialClass obj;
	
	cout<<"Ente The no, whose factorial need to be found: ";
	cin >> factNo;
	cout << obj.findFactorial(factNo, pow)<<endl;

return 0;
}
