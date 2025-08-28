#include <iostream>
using namespace std ;

class toolbooth{
	public:
	
	int unsigned Totalcars;
	double Totalcollection ;
	
	toolbooth (){
		Totalcars=0;
		Totalcollection=0;
	}
	
	void payingcar(){
		Totalcars++;
		Totalcollection = Totalcollection + 0.50;
	}
	
	void nopaycar(){
		Totalcars++;
	}
	
	void display() const {
		cout<<"Total cars "<<Totalcars<<endl;
		cout<<"Total Collection "<<Totalcollection<<endl;
	}
};


int main(int argc, char** argv) {
		toolbooth obj1;
			cout<<"Enter p for paying car"<<endl<<"Enter N for non paying car "<<endl;
	cout<<"Enter e for total balance "<<endl;
	char option;


	
	while (true){
			cin>>option;
		if (option =='p') {
			
	obj1.payingcar();
	
		}
		else if (option=='n'){
				obj1.nopaycar();
			
		}
		
		
		else if (option == 'e'){
			break;
		}
	}
	
	obj1.display();

	
	

	
	
	
	
	return 0;
}
