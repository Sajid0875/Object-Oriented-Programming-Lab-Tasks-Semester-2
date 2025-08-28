#include <iostream>
using namespace std ;

class University {
	public :
		string uniname;
		University(string name ):uniname(name){ //initializer list
		}
	
};

class Department : public University {
	
	public :
	
	string DepartmentName;
	Department(string DName,string Name):DepartmentName(DName),University(Name){
	
	}
};

class Staff{
	public :
		string StaffId;
		Staff(string id ): StaffId(id){
		}
};

class Professor : public Staff ,public Department {
	public: 
	string SubjectTaught;

Professor(string University_Name, string Department_Name, string Staff_Id, string Subject)
    :  Department(Department_Name,University_Name), Staff(Staff_Id), SubjectTaught(Subject) {}

	
	void Display_info(){
		cout<<"University Name :"<<uniname<<endl;
		cout<<"Department Name : "<<DepartmentName<<endl;
		cout<<"Staff id : "<<StaffId<<endl;
		cout<<"Subject Taught is :"<<SubjectTaught<<endl;
	}
};




int main(int argc, char** argv) {
 Professor d1("Fast","physics ","23k-987","Applied physics ");
 d1.Display_info();
 
 
 
 
	return 0;
}
