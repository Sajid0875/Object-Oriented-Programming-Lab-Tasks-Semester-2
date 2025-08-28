#include <iostream>
using namespace std;

class Professor{
	private:
		string name;
		int ID;
	public:
		Professor(string name1,int n1):name(name1),ID(n1){
		}
		string getname(){
			return name;
		}
		int getid(){
			return ID;
		}
};

class Student;

class Course{
	private:
		string title;
		int code;
		Professor *p1;
		Student *s1;
		friend class Student;
	public:
		Course(string var1,int var2,Professor *prof,Student *stu):title(var1),code(var2),p1(prof),s1(stu){
		}
};

class Student{
	private:
		string name;
		int roll_num;
	public:
		Student(string n1,int n2):name(n1),roll_num(n2){
		}
		void viewCourseDetails(Course &c){
			cout<<"Course Title "<<c.title<<endl;
			cout<<"Course Code "<<c.code<<endl;
			cout<<"Professor Name "<<c.p1->getname()<<endl;
			cout<<"Professor ID "<<c.p1->getid()<<endl;
			cout<<"Student Name  "<<name<<endl;
			cout<<"Student Roll Number  "<<roll_num;
		}
};

int main(){
	Professor p1("Samin Ahmed",1731);
	Student s1("Sajid Islam",745);
	Course c1("Object oriented Programming",1008,&p1,&s1);
	
	s1.viewCourseDetails(c1);
	
	return 0;
}
