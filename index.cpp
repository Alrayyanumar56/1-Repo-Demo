#include<iostream>
using namespace std;
int area(int,int);
int main()
{
	int length,width;
	cout<<"Enter the Length & Width of rectangle: "<<endl;
	cin>>length>>width;
	cout<<"Area of Rectangle: "<<area(length,width);
}

int area(int a,int b)
{
	int c=a*b;
	return c;
}
