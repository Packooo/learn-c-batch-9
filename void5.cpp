#include <iostream>
using namespace std;

//membuat fungsi yang memiliki parameter nilai
void fungsiluas(int p, int l){
	int luas = p*l;
	cout <<"Hasil Luasnya adalah " <<luas;
}

int main(){
	int panjang, lebar;
	cout <<"Inputkan nilai panjang = ";
	cin >> panjang;
	cout <<"Inputkan nilai lebar = ";
	cin >>lebar;
	
	//memanggil fungsi dengan memberi nilai parameter
	fungsiluas(panjang, lebar);
}