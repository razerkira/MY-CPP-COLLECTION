#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	double nilai_bilangan,hasil_penjumlahan_bilangan=0,angka_dari_data;
	
	for(angka_dari_data=1;angka_dari_data<=10;angka_dari_data++){
		cout<<"Masukkan nilai bilangan ke-"<<angka_dari_data<<" = ";
		cin>>nilai_bilangan;
		hasil_penjumlahan_bilangan=hasil_penjumlahan_bilangan+nilai_bilangan;
	}
	
	cout<<"Hasil penjumlahan dari 10 bilangan yang telah dimasukkan = "<<hasil_penjumlahan_bilangan<<endl;
	
	getch();
	return 0;
}
