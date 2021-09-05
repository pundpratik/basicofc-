//WAP to convert Fahrenheit temp in degree Celsius.
#include<iostream>
using namespace std;
int main()
{
	float temp,cel;
	cout<<"enter the temprature in fahrenheit ";
	cin>>temp;
	cel=(temp-32)*0.55;
	cout<<"celcius="<<cel;
	return 0;
}
