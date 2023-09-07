#include <iostream>
using namespace std;

string metals_lanthanide="metals, lanthanide";
string metals_actinoids="metals, actinoids";
string metals_alkali_metals="metals, alkali metals";
string metals_transition_metal="metals, transition metals";
string metals_alkaline_earth="metals, alkaline earth";
string metals_post_transition_metals="metals, post-transition metals";
string metalloids="metalloids";
string nonmetals_other_nonmetal="nonmetals, other nonmetal";
string nonmetals_halogen="nonmetals, halogen";
string nonmetals_noble_gas="nonmetals, noble gas";


class element
{
	public:
		void setName(string name)
		{
			elem_name=name;
		}
		void showName()
		{
			cout<<"Element's name: "<<elem_name<<endl;
		}
		void setAtomicNumber(unsigned short number)
		{
			atomic_number=number;
		}
		void showAtomicNumber()
		{
			cout<<"Atomic number: "<<atomic_number<<endl;
		}
		void setSymbol(string sym)
		{
			symbol=sym;
		}
		void showSymbol()
		{
			cout<<"Symbol: "<<symbol<<endl;
		}
		void setAtomicMass(float am)
		{
			atomic_mass=am;
		}
		void showAtomicMass()
		{
		cout<<"Atomic mass: "<<atomic_mass<<endl;
		}
		void setType(string t)
		{
			type=t;
		}
		void showType()
		{
			cout<<"Type: "<<type<<endl;
		}
		void setPosition(unsigned short x, unsigned short y)
		{
			row=x;
			column=y;
		}
		void showPosition()
		{
			cout<<"Row: "<<row<<", column: "<<column<<endl;
		}



			
private:
	string elem_name;
	unsigned short atomic_number;
	string symbol;
	float atomic_mass;
	string type;
	unsigned short row; unsigned short column;
};

int main()
{
element hydrogen;
hydrogen.setName("hydrogen");
hydrogen.showName();
hydrogen.setSymbol("H");
hydrogen.showSymbol();
hydrogen.setAtomicNumber(1);
hydrogen.showAtomicNumber();
hydrogen.setAtomicMass(1.008);
hydrogen.showAtomicMass();
hydrogen.setType(nonmetals_other_nonmetal);
hydrogen.showType();
hydrogen.setPosition(1,1);
hydrogen.showPosition();
}
