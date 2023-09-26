#include <iostream>
#include <iomanip>
using namespace std;

class tires
{
	private:
		double front1; double front2; double back1; double back2;
	public:
		tires (double f1, double f2, double b1, double b2) : front1(f1), front2(f2), back1(b1), back2(b2){}
		void showTiresPressure()
		{
			cout<<setw(30)<<"Pressure data:"<<endl;
			cout<<setw(30)<<"Front tire 1: "<<front1<<" psi."<<endl;
			cout<<setw(30)<<"Front tire 2: "<<front2<<" psi."<<endl;
			cout<<setw(30)<<"Back tire 1: "<<back1<<" psi."<<endl;
			cout<<setw(30)<<"Back tire 2: "<<back2<<" psi."<<endl;
		}
};

class lights
{
	private:
		unsigned int head1; unsigned int head2; unsigned int rear1; unsigned int rear2;
	public:
		lights(int h1, int h2, int r1, int r2) : head1(h2), head2(h1), rear1(r2), rear2(r1){}//messed up values
		void showLightsVoltage()
		{	
			cout<<setw(30)<<"Voltage data:"<<endl;
			cout<<setw(30)<<"Head light 1's voltage: "<<head1<<" volt."<<endl;
			cout<<setw(30)<<"Head light 2's voltage: "<<head2<<" volt."<<endl;
			cout<<setw(30)<<"Rear light 1's voltage: "<<rear1<<" volt."<<endl;
			cout<<setw(30)<<"Rear light 2's voltage: "<<rear2<<" volt."<<endl;
		}
};


int main()
{
	tires volvo(10, 11, 20, 22);
	volvo.showTiresPressure();
	cout<<endl;
	lights ford(51, 52, 47, 49);
	ford.showLightsVoltage();
}
