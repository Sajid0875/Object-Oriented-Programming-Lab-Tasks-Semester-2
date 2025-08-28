#include <iostream>
using namespace std ;

class Person {
	public:
	string name ;
	int age ;
	
	Person(string Pname ,int Page):name(Pname),age(Page){
		
	}
};

class Marks {
	public:
	int MathMarks;
	int ScienceMarks;
	Marks(int Mmarks ,int Smarks):MathMarks(Mmarks),ScienceMarks(Smarks){
	}
};

class Student :public Person ,public Marks{
	public:
	Student (string name1,int age1,int MathMarks1,int ScienceMarks1 )
	: Marks(MathMarks1,ScienceMarks1),Person (name1,age1){
}
	
	void display_info(){
		cout<<"Person name is : "<<name <<endl;
		cout<<"Age is : "<<age <<endl;
		cout<<"Math Marks are : "<<MathMarks <<endl;
		cout<<"Science Marks are : "<<ScienceMarks <<endl;
	cout << "Average is : " << (float)(MathMarks + ScienceMarks) / 2 << endl;

		
	}
	
};
int main(int argc, char** argv) {
	Student s1("Sajid ",21,46,79);
	s1.display_info();
	cout<<sizeof(Student);
	return 0;
}
