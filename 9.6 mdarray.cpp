//multidimensional array
#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	int mda[4][5];
	for (int i=0;i<4;i++)
		for (int j=0;j<5;j++)
		{
			mda[i][j]=rand()%11;
			cout<<'['<<i<<"]["<<j<<']'<<mda[i][j];
			if (i==3 and j==4) cout<<'.'<<endl;
			else if (i<3 or j<4) cout<<", ";
		}
}
