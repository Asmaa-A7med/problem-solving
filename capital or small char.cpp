#include <iostream>
#include <cmath>
using namespace std;
int main(){
	char c;
	cin>>c;

if (c>=48 && c<=57){
	cout<<"IS DIGIT"<<endl;
}else if (c >=97 && c<=122){
	cout<<"ALPHA"<<endl;
	cout<<"IS SMALL"<<endl;
}
else if(c>=65 &&c<=90){
	cout<<"ALPHA"<<endl;
	cout<<"IS CAPITAL"<<endl;
}
}
