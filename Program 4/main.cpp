#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	double nilai_bilangan,hasil_penjumlahan_bilangan=0,rata_rata,angka_dari_data;
	
	for(angka_dari_data=1;angka_dari_data<=10;angka_dari_data++){
		cout<<"Masukkan nilai bilangan ke-"<<angka_dari_data<<" = ";
		cin>>nilai_bilangan;
		hasil_penjumlahan_bilangan=hasil_penjumlahan_bilangan+nilai_bilangan;
	}
	
	rata_rata=hasil_penjumlahan_bilangan/(angka_dari_data-1);
	cout<<"Rata-rata dari 10 bilangan yang dimasukkan  = "<<rata_rata<<endl;
	
	getch();
	return 0;
}
