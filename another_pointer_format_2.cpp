#include <iostream>
#include <iomanip>
using namespace std;

int r()
{
	srand(time(NULL));
	return rand()%100;
}

int main()
{
	srand(time(NULL));
	int *a[2];
	a[1][2]=233;
	cout<<a[1][2]<<endl;
	cout<<setw(10)<<setfill('*')<<'*'<<endl;
	int (*b)[2];
	for (int i=0; i<10; ++i)
		for (int j=0; j<2; j++)
		{
			int b[i][j]={r()};
			cout<<b[i][j]<<' ';//segmentation fault
		}
	cout<<endl;
}

