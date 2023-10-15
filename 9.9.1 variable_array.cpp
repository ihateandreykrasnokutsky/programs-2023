#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout<<"Enter a number of array's columns: ";
	int cc;
	cin>>cc;
	cout<<"Enter a number of array's rows: ";
	int rr;
	cin>>rr;
	const int c=cc;
	const int r=rr;
	int a[c][r];

	for (int y=0; y<r; y++)
		for (int x=0; x<c; x++)
		{
			cout<<setw(12)<<a[x][y];
			if (x<c-1) cout<<'|';
			else if (x=c-1) cout<<'|'<<endl;
			if (c==1 and r==1) cout<<'|'<<endl;
		}
}

