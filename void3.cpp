#include <iostream>
using namespace std;

//membuat fungsi hello()
void hello(string nama){
	cout <<"Hello Selamat Datang "<<nama <<"!\n";
}

int main(){
	//memanggil fungsi hello() dengan memberi nilai parameter
	hello("Andi");
	hello("Ani");
	hello("Ana");
	hello("Ali");
	hello("Adi");
}