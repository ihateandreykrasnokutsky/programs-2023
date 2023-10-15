//this is timer for Linux or may be Windows. The program is optimized, so that it uses PC memory only in the beginning and then every 10 seconds. It was made to reduce heavy load on memory and reduce amount of useless read/write/delete commands. As I understand, it's better not to use PC memory in such inefficient way, because it can die too soon.
//So the program mostly uses variable bool b. bool b changes its value according to CPU commands, made very often to check, if there is need to change the value of b. Alas, I couldn't find a way to reduce the load on CPU (that is created by high frequency of the checks. But those checks don't look like very heavy calculations.

//YOU NEED VLC PLAYER TO USE THIS PROGRAM!
//YOUR MUSIC TRACK FOLDER IS SHOWN AFTER "system"

#include <iostream>
using namespace std;
int main()
{
	int time_start;
	int time_needed;
	bool b=false;
	int d=10; //how often a new time_passed is written

	cout<<"Timer v. 0.0001.\nEnter time in seconds: ";
	cin>>time_needed;
	time_start=time(NULL);

	int days=time_needed/86400;
	int hours=(time_needed-days*86400)/3600;
	int minutes=(time_needed-days*86400-hours*3600)/60;
	int seconds=(time_needed-days*86400-hours*3600-minutes*60);
	cout<<"Your time is: "<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds."<<endl;

	cout<<"Timer is running. Time passed appears every "<<d<<" seconds."<<endl;
	while (time(NULL)-time_start<=time_needed)
	{
		if ((time(NULL)-time_start)%d==0 and b==false) //bool b is made to limit the number of operations per second; if operation is made, b is switched to opposite value; the opetation can't be executed many times in a row, if b is switched
		{
			cout<<time(NULL)-time_start<<' '<<flush;//i don't remember how, but flush works
			b=true;
		}
		if ((time(NULL)-time_start)%d!=0 and b==true) b=false;
	}
	cout<<endl<<"Your timer is over."<<endl;
	system ("cvlc --play-and-exit ~/Music/'youtube library (attribution required)'/'Dark Mystery - Audionautix.mp3'");
}
