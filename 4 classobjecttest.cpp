#include <iostream>
#include <cmath>
using namespace std;

class hypothenuse
{
	public:
	float a;
	float b;
	float retC()
	{
		return sqrt((a*a)+(b*b));
	}
};

int main()
{
	cout<<"Enter 1st cathetus: ";
	float cathetus1;
	cin>>cathetus1;
	cout<<"Enter 2nd cathetus: ";
	float cathetus2;
	cin>>cathetus2;
	hypothenuse c{cathetus1,cathetus2};
	cout<<c.retC()<<endl;
}
