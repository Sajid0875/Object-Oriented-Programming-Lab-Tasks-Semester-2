#include <iostream>
using namespace std;


class Doctor;
class Room {
	private:
		int num;
	public:
	    Room(int num){
	    	this->num=num;
		}
		friend void printDoctorDetails(Doctor &d);	
};
class Doctor{
	private:
		int d_id;
		string name;
	    string specialization;
	    Room room;
	public:	
		Doctor (string name, int d_id ,string specialization,int num):room(num){
			this->name=name;
			this->d_id =d_id;
			this->specialization=specialization;
		}
		string getName() const {
            return name;
        }
		friend void printDoctorDetails(Doctor &d);
};
class Patient {
	private:
		int p_id;
		string name;
		string disease;
		Doctor *doctor;
	public:	
		Patient (string name, int p_id, string disease, Doctor *d):doctor(d){
			this->name=name;
			this->p_id =p_id;
			this->disease=disease;
		}
		
    string getName(){
        return name;
    }

    Doctor* getDoctor(){
        return doctor;
    }
		
};

class Hospital {
	private:
		Doctor *doctor[10];
		Patient *patient[10];
		int d_count=0;
		int  p_count=0;
	public:
		void addDoctor(Doctor* doc) {
            doctor[d_count++] = doc;
        }

        void addPatient(Patient* pat) {
            patient[p_count++] = pat;
        }
        void printHospitalInfo(){
        	cout<<"Hospital Information: "<<endl;
        	for (int i=0; i<p_count; ++i) {
            cout << "Patient: " << patient[i]->getName()<<" | Doctor: " << patient[i]->getDoctor()->getName() << endl;
            }
		}
		
};
void printDoctorDetails(Doctor &doctor) {
    cout<< "\t Doctor Info:"<< endl;
    cout<< "Doctor ID: "<<doctor.d_id<<endl;
    cout<< "Name: "<<doctor.name<<endl;
    cout<< "Specialization: "<<doctor.specialization<<endl;
    cout<<"Room Number: "<<doctor.room.num<<endl;
    
}
int main() {
	Doctor d1("Sajid", 01, "Mental issues", 108);
    Doctor d2("Ahmad", 02, "Neuro", 102);
	Patient p1("Ali", 1234, "Kidney Failure", &d1);
    Patient p2("IShfaq", 5678, "Heart Failure", &d2);
    
	Hospital h;
	h.addDoctor(&d1);
    h.addDoctor(&d2);
    h.addPatient(&p1);
    h.addPatient(&p2);
    h.printHospitalInfo();
    printDoctorDetails(d1);
    printDoctorDetails(d2);
   
	return 0;
}
