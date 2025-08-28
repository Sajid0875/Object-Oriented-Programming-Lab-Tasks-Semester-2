#include <iostream>
using namespace std;

#include <iostream>
using namespace std;


bool palindrome(char array[],int size){
	
		bool flag =true;
		
		for(int i=0,j=size-1;i<size/2;i++,j--){
	if (array[i]!=array[j])
	return false;
	else flag=true;
}
 return flag;
}
int count (char array[],int size,char chr){

int counter =0;
for (int i=0;i<size;i++){
	
	if (array[i]==chr)
	counter++;

}	
	return counter ;
}

int main(int argc, char** argv) {

	
	int size ;
	char chr;

	cout<<"Input the size of array "<<endl;
	cin>>size;

	char array[size];

	
cin>>array;

bool check=palindrome (array,size);
if (check)
cout<<"It is palindrome "<<endl;
else
cout<<"not palindrome"<<endl;

cout<<"Enter the character which you want to count the frequency"<<endl;
cin>>chr;

cout<<"Count is "<<count(array,size,chr);

	return 0;
}
