//showing that x++ increments x, but returns x
#include <iostream>
using namespace std;
int main()
{
	int x, t;
	x=10;
	t=x++;
	cout<<"t=x++"<<endl;
	cout<<"t="<<t<<", x="<<x<<endl;
}	
