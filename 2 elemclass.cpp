#include <iostream>
using namespace std;

string metals_lanthanide="metals, lanthanide";
string metals_actinoids="metals, actinoids";
string metals_alkali_metal="metals, alkali metal";
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
		void setName(string name) {elem_name=name;}
		void showName() {cout<<"Element's name: "<<elem_name<<endl;}
		void setAtomicNumber(unsigned short number) {atomic_number=number;}
		void showAtomicNumber(){cout<<"Atomic number: "<<atomic_number<<endl;}
		void setSymbol(string sym){symbol=sym;}
		void showSymbol(){cout<<"Symbol: "<<symbol<<endl;}
		void setAtomicMass(float am){atomic_mass=am;}
		void showAtomicMass(){cout<<"Atomic mass: "<<atomic_mass<<endl;}
		void setType(string t){type=t;}
		void showType(){cout<<"Type: "<<type<<endl;}
		void setPosition(unsigned short x, unsigned short y){row=x;column=y;}
		void showPosition(){cout<<"Column: "<<row<<", row: "<<column<<endl;}



			
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
element H;
H.setName("hydrogen");
H.showName();
H.setSymbol("H");
H.showSymbol();
H.setAtomicNumber(1);
H.showAtomicNumber();
H.setAtomicMass(1.008);
H.showAtomicMass();
H.setType(nonmetals_other_nonmetal);
H.showType();
H.setPosition(1,1);
H.showPosition();

cout<<endl;

element He;
He.setName("helium");
He.showName();
He.setSymbol("He");
He.showSymbol();
He.setAtomicNumber(2);
He.showAtomicNumber();
He.setAtomicMass(4.0026);
He.showAtomicMass();
He.setType(nonmetals_noble_gas);
He.showType();
He.setPosition(18,1);
He.showPosition();

cout<<endl;

element Li;
Li.setName("lithium");
Li.showName();
Li.setSymbol("Li");
Li.showSymbol();
Li.setAtomicNumber(3);
Li.showAtomicNumber();
Li.setAtomicMass(6.94);
Li.showAtomicMass();
Li.setType(metals_alkali_metal);
Li.showType();
Li.setPosition(1,2);
Li.showPosition();

cout<<endl;

element Be;
Be.setName("beryllium");
Be.showName();
Be.setSymbol("Be");
Be.showSymbol();
Be.setAtomicNumber(4);
Be.showAtomicNumber();
Be.setAtomicMass(9.0322);
Be.showAtomicMass();
Be.setType(metals_alkaline_earth);
Be.showType();
Be.setPosition(2,2);
Be.showPosition();

cout<<endl;

element B;
B.setName("boron");
B.showName();
B.setSymbol("B");
B.showSymbol();
B.setAtomicNumber(5);
B.showAtomicNumber();
B.setAtomicMass(10.81);
B.showAtomicMass();
B.setType(metalloids);
B.showType();
B.setPosition(13,2);
B.showPosition();

cout<<endl;

element C;
C.setName("carbon");
C.showName();
C.setSymbol("C");
C.showSymbol();
C.setAtomicNumber(6);
C.showAtomicNumber();
C.setAtomicMass(12.011);
C.showAtomicMass();
C.setType(nonmetals_other_nonmetal);
C.showType();
C.setPosition(14,2);
C.showPosition();

cout<<endl;

element N;
N.setName("nitrogen");
N.showName();
N.setSymbol("N");
N.showSymbol();
N.setAtomicNumber(7);
N.showAtomicNumber();
N.setAtomicMass(14.007);
N.showAtomicMass();
N.setType(nonmetals_other_nonmetal);
N.showType();
N.setPosition(15,2);
N.showPosition();

cout<<endl;

element O;
O.setName("oxygen");
O.showName();
O.setSymbol("O");
O.showSymbol();
O.setAtomicNumber(8);
O.showAtomicNumber();
O.setAtomicMass(15.999);
O.showAtomicMass();
O.setType(nonmetals_other_nonmetal);
O.showType();
O.setPosition(16,2);
O.showPosition();

cout<<endl;

}
