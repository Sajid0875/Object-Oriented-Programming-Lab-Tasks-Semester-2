#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	
int current_population=100000;
	int annual_decrease=13;
	int population_remaining=0;
	int yearly_decrease;
	
	for (int i=0l;i<10;i++){
		
		yearly_decrease=(current_population/100)*13;
		
		current_population=current_population-yearly_decrease;
		cout<<"population at year"<<i<<"was "<<" "<<current_population<<endl;
		
		
	}



	return 0;
}
