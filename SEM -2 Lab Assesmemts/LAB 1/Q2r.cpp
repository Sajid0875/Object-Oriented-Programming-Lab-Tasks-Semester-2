#include <iostream>
using namespace std;

void reverse(int *array,int size){
	int n;
	for (int i=0;i<size;i++){
		cout<<*(array+i)<<"\t";
		}
	cout<<endl;
	
	for(int j=size-1,i=0;i<=size/2,j>=size/2;i++,j--){
		n=*(array+i);
		*(array+i)=	*(array+j);
	*(array+j)=n;
		
	}
	

		for (int i=0;i<size;i++){
		cout<<*(array+i)<<"\t";
	}
		
}
int main(int argc, char** argv) {
	
	int array[5]={1,2,3,4,5};
	int size=sizeof(array)/sizeof (array[0]);

	reverse(array,size);
	return 0;
}
