#include <iostream>
using namespace std;

int main(){
	int b,c;
	cout<<"masukkan faktorial bilangan";
	cin>>b;
	c=b;

	cout<<b<<"!=";
	
	for(int i=1;i<=b;i++){
		cout<<i;
		if(i==b){
			cout<<"=";
		} else{
			cout<<"*";
		}	
	}
	for (int i=1;b>i;){
		b=b-1;
		c=c*b;
	}
	cout<<c;
	return 0;
}
