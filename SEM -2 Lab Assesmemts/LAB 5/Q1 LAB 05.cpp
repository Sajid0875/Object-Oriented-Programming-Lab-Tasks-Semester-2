#include <iostream>
using namespace std ;

class english {
	public:
	
	string Sentence ;
	public:
	int size ;
	
	english(){
		Sentence="";
		size=0;
	}
	
	
 void count  (){
	int count =0;
		for (int i=0;Sentence[i]!= '\0';i++){
			
	count ++;
		}
		size=count;
	}
	
	english (const  english & obj){
		Sentence=obj.Sentence;
		size=obj.size;
	}
	
	void input(){
		cout<<"Enters the sentence "<<endl;
		getline(cin,Sentence);
	
	}
};

int main(int argc, char** argv) {
	
	english obj;
	obj.input();
	obj.count();
	english obj2(obj);
	 
	cout<<"Sentence is  = "<<obj.Sentence<<endl;
	cout<<"No of words in Sentence  = "<<obj.size;
	
	cout<<"\n \n \n \n "<<endl;
	cout<<"Sentence is  = "<<obj2.Sentence<<endl;
	cout<<"No of characters in Sentence  = "<<obj2.size;
	
	return 0;
}
