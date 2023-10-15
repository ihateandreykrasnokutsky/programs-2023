#include <iostream>//using a complicated statement inside the loop
using namespace std;
int main()
{
	string arr[]{"laptop", "andrey", "documents", "loop", "cpp"};
	srand(time(0));
	string *parr=arr;
	int x;
	for (int i=0; i<5; i++)
	{
		x=rand()%5;
		*parr++ += "@@" + arr[x];//adds @@ and another string to the initial strings
		cout<<arr[i]<<endl;//for some reason, I can't write here *parr instead of arr[i], the output of bin file gets very messy
	}
}
