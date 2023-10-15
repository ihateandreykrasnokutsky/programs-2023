#include <iostream>//using **argv instead of *argv[], so that * is []
using namespace std;

void type_array (int (*a2)[5], int size2)
{
	for (int i=0;i<size2;i++)
		for (int j=0;j<5;j++)
			cout<<a2[i][j]<<' ';
	cout<<endl;
}

int main(int argc, char **argv)
{
	cout<<"The number of arguments is: "<<argc-1<<endl<<"Your arguments are: ";
	for (int i=1; i<argc; ++i)
		cout<<argv[i]<<' ';
	cout<<endl;

	int size1=3;//can't be compiled
	type_array(size1);
}//I don't understand how to pass arguments to a function with array in arguments
