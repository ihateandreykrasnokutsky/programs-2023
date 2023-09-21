#include <iostream>
using namespace std;
class variab
{
	int a; int b;
public:
	variab(int x, int y):a(x),b(y){}//member list constructor is fucking done
	void showVari()
	{
		cout<<a<<", "<<b<<endl;
	}
};
int main()
{
	variab n(1,2);
	n.showVari();
}
