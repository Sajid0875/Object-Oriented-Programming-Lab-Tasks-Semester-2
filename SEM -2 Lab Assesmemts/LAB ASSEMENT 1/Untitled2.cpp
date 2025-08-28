#include <iostream>
using namespace std;

int main() {
 //   int *ptr=new int[5] ;
 
 int array[2][3]={{1,2,3},{3,5,6}};
 int (*ptr)[2][3]=&array;
 for (int i=0;i<2;i++){
 	for (int j=0;j<3;j++){
 		cout<<(ptr[i][j])<<endl;
		 }
		
	 }
 }


