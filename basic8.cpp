//WAP to accept five subject marks and find out total and average of the marks.
#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3,m4,m5;
	float avg;
	cout<<"n enter your 5 subject marks";
	cin>>m1>>m2>>m3>>m4>>m5;
	avg=(m1+m2+m3+m4+m5)/5;
	cout<<"average ="<<avg;
	return 0;
}
