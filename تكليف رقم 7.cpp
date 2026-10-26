#include<iostream>
using namespace std;
int main()
{
	int day;
	cout<<"Enter day number";
	cin>>day;
	if(day==6|| day==7)
	{
		cout<<"Weekend";
		
	}
	else if(day> 7)
	{
		cout<<"Wrong";
	}
	else
	{
		cout<<"Work day";
	}

	
	
	
}
