#include <iostream>
using namespace std ;

struct Adress {
	string city ;
	string country ;
};

struct Contact_info {
	string name ;
	string phone_no;
	Adress Adr ;
};

int main(int argc, char** argv) {
	
	Contact_info Student[3];
	for (int i=0;i<3;i++){
		cout<<"Enter the  name of student No "<<i+1<<endl;
		cin.ignore();
		
	getline(cin,Student[i].name);
	
	cout<<"Enter the phone number of a student No "<<i+1<<endl;
	getline(cin,Student[i].phone_no);
	
	cout<<"Enter the City of a student No "<<i+1<<endl;
	cin>>Student[i].Adr.city;
	
	cout<<"Enter the country of a student No "<<i+1<<endl;
	cin>>Student[i].Adr.country;
	}	
	
	
	for (int i=0;i<3;i++){
		cout<<Student[i].name <<endl;
		cout<<Student[i].phone_no <<endl;
		cout<<Student[i].Adr.city <<endl;
			cout<<Student[i].Adr.country <<endl;
	}
	
	
	return 0;
}
