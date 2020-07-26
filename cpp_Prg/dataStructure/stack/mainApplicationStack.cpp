

int main()
{
	int choice;
	char more='y';

		stackClass ob;

	while(1)
	{
	
		cout<<endl;	

		cout << "For Popping Element:	Press 0"<<endl;
		cout << "For Pushing Element:	Press 1"<<endl;
		cout << "For Printing Element:	Press 2"<<endl;
		cout << "Input 0/1/2: ";
		cin >> choice;

		switch(choice)
		{
			case 0:	ob.popStack();
				break;
			
			case 1:	ob.pushStack();
				break;	

			case 2:	ob.printStack();
				break;
			default:
				cout <<"Wrong Choice, Please Try Again"<<endl;
				break;
				
		}		
			cout <<"Do you wanna Add more data to stack: y/n";
			cin>>more;
			choice=0;
			if(more=='n'| more =='N')
			break;
			else
				continue;
		
	}

return 0;
}
