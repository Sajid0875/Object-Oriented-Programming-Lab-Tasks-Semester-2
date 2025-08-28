#include <iostream>
using namespace std;

int main() {
	
	cout<<"Code number 1  "<<endl;
    int rows, columns,sum =0,largest=0 ;

   
    cout << "Enter the number of rows";
    cin >> rows;
    cout << "Enter the number of columns ";
    cin >> columns;

    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[columns];
    }

   
    cout << "Enter " << rows * columns << " elements\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> arr[i][j];
        }
        
    }
     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
           cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
    
    

   int smallest=arr[0][0];
  
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
          sum=sum+arr[i][j];
        }
      
    }
    cout<<"Sum of all elemnts of array is "<<sum<<endl;
    
    
    cout<<"for largest num in array"<<endl;
    
    
    
    for (int i = 0; i < rows; i++) {
    	for (int j=0;j<columns;j++){
    		if (arr[i][j]>=largest )
    		largest=arr[i][j];
    		else if (arr[i][j]<smallest){
    			smallest=arr[i][j];
    			
			} 
    			
			
    		
		}
	
}
    
    	cout<<"Largest = "<<largest<<endl<<"Smallest num in array = "<<smallest <<endl;
    
    
    
// Transpose 
 for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
         cout<<arr[j][i] <<" ";
        }
      cout<<endl;
  }
    

 for (int i = 0; i < rows; i++) {
        
        delete [] arr[i];
        
   delete [] arr ;
  }
 

    return 0;
}















