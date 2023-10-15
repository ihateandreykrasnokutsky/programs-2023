#include <iostream>//creates many-dimensional array and prints it
using namespace std;
int main()
{
	constexpr int arsi=5;
	int a[arsi][arsi][arsi];
	cout<<sizeof(a)/sizeof(a[0][0][0])<<endl;
	for (int i=0; i<arsi; i++)
		for (int j=0; j<arsi; j++)
			for (int k=0; k<arsi; k++)
			{
				cout<<a[i][j][k];
				if (k<arsi-1) cout<<' ';
				if (k==arsi-1) cout<<endl;
			}
	cout<<endl;				
				

















}
