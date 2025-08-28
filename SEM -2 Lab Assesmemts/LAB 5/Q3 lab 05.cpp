#include <iostream>
using namespace std ;


class Time {
	
	public :
	
	int Seconds;
	int Minutes ;
	int Hours ;
	
	Time (){
		
     Seconds=0;
     Minutes =0;
     Hours =0;
	}
	
   Time (int H, int M , int S){
		Seconds =S;
		Minutes=M ;
		Hours=H;
		
	}
	
	void Display() const{
		cout<<"Time is  "<< Hours <<":"<<Minutes<<":"<<Seconds <<endl;
	}
	
	void AddTime(const Time &t1, const Time &t2) {
        Seconds = t1.Seconds + t2.Seconds;
        Minutes = t1.Minutes + t2.Minutes;
        Hours = t1.Hours + t2.Hours;

       
        if (Seconds >= 60) {
            Seconds -= 60;
            Minutes++;
        }
        if (Minutes >= 60) {
            Minutes -= 60;
            Hours++;
        }
    }
	
	
	
};



int main(int argc, char** argv) {
	
	
	 const Time t1(2, 45, 50);  // 2 hours, 45 minutes, 50 seconds
    const Time t2(1, 30, 20);  // 1 hour, 30 minutes, 20 seconds

   
    Time t3;

   
    t3.AddTime(t1, t2);

    
    cout << "Time 1 ";
    t1.Display();

    cout << "Time 2 ";
    t2.Display();

    cout << "Sum of Time 1 and Time 2 ";
    t3.Display();

	
	
	
	
	
	
	return 0;
}
