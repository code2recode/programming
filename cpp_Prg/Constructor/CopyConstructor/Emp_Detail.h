#include<iostream>
#include<stdint.h>
#include<stdio.h>
using namespace std;


class EmployeeDetail
{

	private:
		uint16_t emp_Age;		
		uint8_t emp_mobNo[10];
		char  *emp_Name;
	public:
		EmployeeDetail()
		{	
			cout<<"Enter Employee Detail."<<endl<<endl;
			cout << "Name: ";
			emp_Name=new char[15];               //Dynamic Allocaton of emp Name
			cin.getline(emp_Name, 13);
			cout << "Age:";
			cin >> emp_Age;
			cout << "Mobile No:";
			cin >> emp_mobNo;

		}

		~EmployeeDetail()
		{
			delete emp_Name;
		}
		
			EmployeeDetail getEmpDetail()
			{
				EmployeeDetail obj;
				cout <<"Employee Details Are"<<endl;
				cout << "Name - "<<emp_Name<<endl;
				cout << "Age -  "<<emp_Age <<endl;
				cout << "MobileNO- " <<emp_mobNo <<endl;
				return obj;

			}

	protected:
};
