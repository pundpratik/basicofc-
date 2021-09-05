//Accept two numbers and perform swapping with third variable.
#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"\n enter any two number";
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping a=  "<<a;
	cout<<"\tb="<<b;
	return 0;
}
