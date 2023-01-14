#include <iostream>
using namespace std;

//deklarasi variable global
int luas;

//membuat fungsi yang memiliki parameter nilai
int fungsiluas(int p, int l){
	luas = p*l;
	return luas;
}

int main(){
	//deklarasi variable lokal
	int panjang, lebar;
	
	cout <<"Inputkan nilai panjang = ";
	cin >>panjang;
	cout <<"Inputkan nilai lebar = ";
	cin >>lebar;
	
	//memanggil fungsi dengan memberi nilai parameter
	fungsiluas(panjang, lebar);
	cout <<"Hasil Luasnya adalah " <<luas;
}