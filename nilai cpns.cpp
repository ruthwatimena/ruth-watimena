#include <iostream>
using namespace std;

int main () {
	int nilai_TIU;
	int nilai_TWK;
	int nilai_TKP;
	int nilai_total ;
	cout<<"masukkan nilai TIU : ";
	cin>> nilai_TIU;
	
	cout<<"masukkan nilai TWK : ";
	cin>>nilai_TWK;
	
	cout<<"masukkan nilai TKP : ";
	cin>>nilai_TKP;
	
	cout<<"nilai total= "<<nilai_TIU+nilai_TWK+nilai_TKP;
	
	if(nilai_TIU >=80, nilai_TWK >=100, nilai_TKP >=140, 
	nilai_total >=320 ){
		cout<<"\n"<<"anda di nyatakan lulus cpns" ;
	}else {
		cout<<"\n"<<"anda dinyatakan tidak lulus cpns \n";
	}
	return 0;
}
