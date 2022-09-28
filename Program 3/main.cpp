#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	double nilai_bilangan,hasil_perkalian_bilangan=1,angka_dari_data;
	
	for(angka_dari_data=1;angka_dari_data<=5;angka_dari_data++){
		cout<<"Masukkan nilai bilangan ke-"<<angka_dari_data<<" = ";
		cin>>nilai_bilangan;
		hasil_perkalian_bilangan=hasil_perkalian_bilangan*nilai_bilangan;
	}
	
	cout<<"Hasil perkalian dari 5 bilangan yang telah dimasukkan = "<<hasil_perkalian_bilangan<<endl;
	getch();
	return 0;
}
