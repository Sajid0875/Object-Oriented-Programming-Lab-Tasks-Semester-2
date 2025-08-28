#include <iostream>
using namespace std; 

struct Address {  
public:
    string city;  
    string state;
    int pincode;
};

struct Student {
	public:
    string Name;     
    int RollNumber;  
    int marks[5];    
    Address adress;  
    
    void (Student & e1 ){
       
	}
    
};

int main() {
   
    Student student1;
  

    
    student1 = { "Sajid", 745, {30, 40, 50, 60, 70}, {"Mardan", "Khyber Pakhtunkhwa", 2216} };

   
    cout << "Name  " << student1.Name << endl;
    cout << "Roll Number   " << student1.RollNumber << endl;
    cout << "Marks ";
    for (int i = 0; i < 5; i++) {
        cout << student1.marks[i] << " ";
    }
    cout << "\nAddress  " << student1.adress.city << ", " << student1.adress.state << ", " << student1.adress.pincode << endl;
    
    
     cout << "Name  " << student1.Name << endl;
Student student2=student1;
student2.Name="ahmed";

cout<<"Details of Student 2\n";

    cout << "Name  " << student2.Name << endl;
    cout << "Roll Number   " << student2.RollNumber << endl;
    cout << "Marks ";
    for (int i = 0; i < 5; i++) {
        cout << student2.marks[i] << " ";
    }
    
      cout << "\nAddress  " << student1.adress.city << ", " << student1.adress.state << ", " << student1.adress.pincode << endl;
       cout << "Name  " << student1.Name << endl;
    return 0;
}

