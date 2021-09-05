//WAP to calculate Simple interest.
#include<iostream>
using namespace std;
int main()
{
	int si,p,t,r;
	cout<<"\n enter price,rate,time";
	cin>>p>>r>>t;
	si=(p*r*t)/100;
	cout<<"simple interest ="<<si;
	return 0;
}

