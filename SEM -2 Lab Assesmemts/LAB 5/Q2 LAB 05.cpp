#include<iostream>
using namespace std ;

class Serial {
	private :
		static int count;
		int SerialNumber ;
		public :
		
		Serial(){
			count++;
			// i assigned the count to serial number so that it will get the unique value each time when constructor calls 
			SerialNumber=count;
			
			
		}
		void Unique(){
			cout<<"This is object No  "<<SerialNumber<<endl;
		}
		static void TotalObject(){
			cout<<"Count of Total Object is = "<<count<<endl;
		}
	
};

int Serial :: count =0;

int main(){
	
	Serial obj1 ,obj2, obj3 ;
	obj1.Unique();
	obj2.Unique() ;
	obj3.Unique() ;
	Serial ::TotalObject();
	

	
	
	
	
	return 0;
}
