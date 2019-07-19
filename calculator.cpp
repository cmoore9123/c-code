#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double num1, num2;
	char operation, redo;

	cout<<"This is a calculator"<<endl;
	cout<<"************"<<endl;
	cout<<endl<<endl<<endl;

	do
	{
		cout<<"Enter the operation";

		cin>>operation;

		cout<<endl<<endl;

		cout<<"Enter two number to perform operation on(";
		cout<<operation<<"):"<<endl<<"1st num:";

		cin>>num1;

		cout<<"2nd num:";
		cin>>num2;
		cout<<endl;

		switch (operation)
		{
			case'+':
				cout<<"addition ("<<num1<<","<<num2<<"):";
				cout<<num1+num2<<endl;
				break;
			case'-':
				cout<<"subtraction ("<<num1<<","<<num2<<"):";
				cout<<num1-num2<<endl;
				break;
			case'*':
				cout<<"multiplication ("<<num1<<","<<num2<<"):";
				cout<<num1*num2<<endl;
				break;
			case'/':
				cout<<"division ("<<num1<<","<<num2<<"):";
				if (num2 == 0)
				{
					cout<<"not valid"<<endl;
				}
				cout<<(num1/num2)<<endl;
				break;
			default:
				cout<<"unkown command"<<endl;
		}

		cout<<"enter y tp continue:";
		cin>>redo;
		cout<<endl<<endl;
	}

	while(redo=='y');

	return 0;
}