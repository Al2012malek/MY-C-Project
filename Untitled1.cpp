#include<iostream>
using namespace std ;
	int main()
{
	int a , b;
	char op ;
	cout<<"Enter tow numbers";
	cin>>a>>b;
	cout<<"Enter operation";
	cin>>op;
	switch(op)
	{
		case '+':
		cout<<a+b;
		break;
			case '-':
		cout<<a-b;
		break;
			case '*':
		cout<<a*b;
		break;
			case '/':
		cout<<a/b;
		break;
		default:
			cout<<"Invalid operation ";
		
	}
}
