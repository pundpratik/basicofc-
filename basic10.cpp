/*WAP to find out perimeter of the Square and Rectangle.
Perimeter of square=sum of all four sides
Perimeter of Rectangle=2*(l+b)
*/
#include<iostream>
using namespace std;
int main()
{
	int square,side,rect,l,b;
	cout<<"\n enter the side of the square";
	cin>>side;
	cout<<"\n enter length and width of the rectangle";
	cin>>l>>b;
	square=4*(side);
	rect=2*(l+b);
	cout<<"\nrectangle perimeter ="<<rect;
	cout<<"\nsquare perimeter="<<square;
	return 0;
}
