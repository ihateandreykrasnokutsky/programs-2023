#include <iostream>//delegating constructors here
using namespace std;

class restaurant
{
	private:
		string name; string type; string street; string city;
	public:
		restaurant(string n, string t, string s, string c) : name(n), type(t), street(s), city(c){}
		restaurant(string all) : restaurant(all,all,all,all){}//if it works?
		void showRestaurantInfo()
		{
			cout<<"Restaurant info: "<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Type: "<<type<<endl;
			cout<<"Street: "<<street<<endl;
			cout<<"City: "<<city<<endl;
		}
};

int main()
{
	restaurant osaka("osaka", "chinese", "moskovskaya", "azov");
	osaka.showRestaurantInfo();
	restaurant dodopizza(osaka);//copy constructor
	cout<<endl;
	dodopizza.showRestaurantInfo();
}
