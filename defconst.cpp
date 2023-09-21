#include <iostream>
using namespace std;

class values
{
	public:
		void showVars()
		{
			cout<<"int="<<i<<endl;
	        	cout<<"char="<<c<<endl;
        		cout<<"string="<<s<<endl;
        		cout<<"short="<<sh<<endl;
		}
	private:
		int i; char c; string s; short sh;
};
int main()
{
	values v{};
	v.showVars();
}
