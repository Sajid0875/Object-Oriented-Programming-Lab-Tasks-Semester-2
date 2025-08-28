#include <iostream>
using namespace std ;

class Animal {
	protected :
	string name;
	int age ;
	public :
	
	Animal(string name ,int age ): name(name),age(age){
		
	}
virtual	void makesound()=0;
	
virtual	void eat()=0;
   virtual ~Animal (){	
  };
};

class Mammals : virtual public Animal{
		public :
	Mammals(string name ,int age ):Animal (name ,age){
	}
	
};





class Birds :virtual public Animal{
		public :
	Birds (string name ,int age ): Animal(name ,age){
	}
};

class Reptile : virtual public Animal{
		public :
	Reptile (string name ,int age ): Animal (name ,age ){
	}
	
};


class Lion : public Mammals{
		public :
	Lion (string name ,int age ): Animal(name ,age), Mammals(name ,age){
	}
	
	void makesound () override {
		cout<< name <<"	the lion Roars"<<endl;
		
	}
	void eat() override{
		cout<<name <<"	eats meat"<<endl;
	}
};




class Eagle :public Birds {
		public :
	
	Eagle (string name ,int age ): Animal (name ,age),Birds(name ,age){
	}
		void makesound () override {
		cout<< name <<"	the Eagle shhh"<<endl;
			
		
	}
	void eat() override{
	
		cout<<name <<"	Eats insects "<<endl;
		cout<<" Age of "<<name <<"	is "<<age<<endl;
	}
	
	
};






class Snake:public Reptile{
		public :
	
	Snake (string name ,int age ): Animal (name ,age),Reptile (name ,age){
		
	}
	
		void makesound () override {
		cout<< name <<"	the Snake Snuff"<<endl;
			cout<<"	Age of "<<name <<"	is "<<age<<endl;
		
	}
	void eat() override{
		cout<<name <<"	eats Small Birds "<<endl;
	
	}
	
	
};

int main(int argc, char** argv) {
	
	Animal *pointer[3] ;
	pointer[0]=new Lion ("Cheetah",21);
	pointer[1]= new Eagle ("Smokey ",7);
	pointer[2]= new Snake (" Mooon",8);
	
	for (int i=0;i<3;i++){
		pointer[i]->makesound();
		pointer [i]->eat();
	}
	
	
	for (int i=0;i<3;i++){
		delete pointer[i];
		
		
	}
	
	
	
	
	
	
	return 0;
}
