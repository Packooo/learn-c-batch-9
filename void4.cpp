#include <iostream>
using namespace std;

//membuat fungsi yang memiliki parameter nilai
void fungsiluas(int p, int l){
	int luas = p*l;
	cout <<"Hasil luasnya adalah " <<luas;
}

int main(){
	//memanggil fungsi dengan memberi nilai parameter
	fungsiluas(4,5);
}