//Write a program which will accept three integer numbers from user and find out greatest among them using conditional operator.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\n enter 3 values";
	cin>>a>>b>>c;
	a>b?(a>c?cout<<"a is greater":cout<<"c is greater "):(b>c?cout<<"b is greater":cout<<"c is greater");
	return 0;
}
