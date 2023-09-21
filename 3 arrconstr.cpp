#include <iostream>//constructor for an array
using namespace std;
class vari
{
	public:
		void showInfo()
		{
			cout<<x<<", "<<y<<endl;
		}
	private:
		int x; int y;
};
int main()
{
	vari arr[10];
	arr[1].showInfo();
}
