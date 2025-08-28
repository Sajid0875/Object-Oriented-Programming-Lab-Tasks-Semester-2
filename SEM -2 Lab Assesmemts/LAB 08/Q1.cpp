#include <iostream>
using namespace std;

class Time {

	public :
		int hours;
		int minutes;
		int seconds;
		
		Time ():hours(0),minutes(0),seconds(0){}
		Time (int hour,int minute,int second ):hours(hour),minutes(minute),seconds(second){
		}
		
		void Display(){
			cout<<hours <<":"<<minutes<<":"<<seconds<<endl;
		}
		
		Time operator+ (Time &s1){
			return Time (hours+s1.hours,minutes +s1.minutes,seconds +s1.seconds);
			
		}
			
};
int main() {
	
	Time obj1(12 ,34,21);
	obj1.Display();
	Time obj2(14,45,44);
	obj2.Display();
	Time obj3 =obj1+obj2;
	obj3.Display();
    return 0;
}

