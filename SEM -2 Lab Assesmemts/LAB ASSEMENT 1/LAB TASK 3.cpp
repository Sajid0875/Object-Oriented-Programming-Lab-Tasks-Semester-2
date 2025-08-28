#include <iostream>
using namespace std;
int main(){
int num;
cout<<"enter the number = ";cin>>num;
int q=num+1;
int j=num*q;
int i=1;
int f=1;
int g=1;
int k=1;
while(i<=j){
if(f<=g){
cout<<" *";
}
else{
cout<<k;
}
if(i%q==0){
cout<<endl;
k++;
g++;
f=0;
}
i++;
f++;
}
return 0;
}
