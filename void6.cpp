#include <iostream>
using namespace std;

//deklarasi fungsi
void fungsiluas(int p, int l);

int main(){
	int panjang, lebar;
	//memanggil fungsi dengan memberi nilai parameter
	cout <<"Inputkan nilai panjang = ";
	cin >>panjang;
	cout <<"Inputkan nilai lebar = ";
	cin >>lebar;
	fungsiluas(panjang, lebar);
}

//definisi fungsi
void fungsiluas(int p, int l){
	int luas = p*l;
	cout <<"Hasil Luasnya adalah " <<luas;
}