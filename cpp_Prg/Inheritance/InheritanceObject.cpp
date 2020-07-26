#include<iostream>
#include<stdint.h>

using namespace std;



class Inheritance
{
	private:
		char age[2];
		uint8_t MobNo[10];
	public:
		Inheritance ()		
		{
			cin >>age;
			cin >>MobNo;
		}

		void getDetail()
		{
			cout << "AGe = " <<age <<endl;
			cout << "MobNo = " <<MobNo <<endl; 
		}

	protected:


};
class DerivedClass: public Inheritance
{

	public:
			DerivedClass()
			{	cout << "Enter The Age:" ;
				cin >> age;
				cout << "Enter The Mobile No:" ;
				cin >> MobNo;
			}

	private:
		



};

int main()
{
	Inheritance obj1;


//	obj1.getDetail();


	DerivedClass obj2;




}
