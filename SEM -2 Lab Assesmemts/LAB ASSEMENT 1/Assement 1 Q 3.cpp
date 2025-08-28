#include <iostream>
using namespace std;
int main() {
	int num;
	cout<<"enter a number "<<endl;
	
	
	cin>>num;
	int sum=0;
	int fact=1;
	int n;
	int count=1;
		int no=num;
	
	
	
	for(int i=num;i>=1;i--)
	{
			 if(i%2!=0) 
		{
		
          			sum=sum+i*i/count;
	   
	    count++;
	   
	   }

		else if(i%2==0 )
		{   fact=1;
            n=i;  
			while(n>0)
			{
				fact=fact*n;
				n--;
				
			}
		
			if(i==1){
			sum=sum+fact/count;	
		
		     count++;
		
			 }
	      
		    else {
		   
				sum=sum+fact/count;	
	     count++;
		}
         
     }
  
   }
      cout << "sum of series is = " << sum << endl;

      return 0;
  }
