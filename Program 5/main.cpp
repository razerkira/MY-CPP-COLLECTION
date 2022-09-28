#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int nilai_bilangan,hasil_penjumlahan_bilangan=0;
	
	for(nilai_bilangan=10;nilai_bilangan<=90;nilai_bilangan=nilai_bilangan+10){
		cout<<nilai_bilangan<<"+";
		hasil_penjumlahan_bilangan=hasil_penjumlahan_bilangan+nilai_bilangan;
	}
	while(nilai_bilangan=100){
		cout<<nilai_bilangan;
		hasil_penjumlahan_bilangan=hasil_penjumlahan_bilangan+nilai_bilangan;
		break;
	}
	
	cout<<endl<<"Hasil penjumlahan semua bilangan = "<<hasil_penjumlahan_bilangan<<endl;
	getch();
	return 0;
}
