#include <iostream>

using namespace std;

int main(){
	int x,y;
	cout<<"Inputkan Nilai X : ";
	cin>>x;
	cout<<"Inputkan Nilai Y : ";
	cin>>y;
	if(x % 2 == 0){
		cout<<"X genap dan ";
	} else {
		cout<<"X ganjil dan ";
	}
	if(y % 2 == 0){
		cout<<"Y genap";
	}else {
		cout<<"Y ganjil";
	}
}
