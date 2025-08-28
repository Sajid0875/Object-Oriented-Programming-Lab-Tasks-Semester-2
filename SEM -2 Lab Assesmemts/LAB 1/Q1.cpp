#include <iostream>
using namespace std;

void swap(int *num1,int *num2){
	int num3=0;
	num3=*num1;
	*num1=*num2;
	*num2=num3;
	
}
int main(int argc, char** argv) {
	
	int num1=5,num2=11;
	swap(&num1,&num2);
	cout<<"Value of num 1 = "<<num1<<endl<<"value of num 2 = "<<num2<<endl;
	return 0;
}
