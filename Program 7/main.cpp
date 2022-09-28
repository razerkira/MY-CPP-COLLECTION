#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	float absensi, tugas, uts, uas, nilai_akhir;
	string nilai_huruf;
	
	cout<<"Program Menghitung Nilai Akhir Mahasiswa"<<endl;
	cout<<endl;
	
	cout<<"Masukkan Nilai Absensi : ";
	cin>>absensi;
	cout<<"Masukkan Nilai Tugas : ";
	cin>>tugas;
	cout<<"Masukkan Nilai UTS : ";
	cin>>uts;
	cout<<"Masukkan Nilai UAS : ";
	cin>>uas;
	
	nilai_akhir = ((absensi*0.3)+(tugas*0.1)+(uts*0.3)+(uas*0.3));
	
	if (nilai_akhir>=85){
		nilai_huruf="A";
	} else if(nilai_akhir>=80){
		nilai_huruf="A-";
	} else if(nilai_akhir>=75){
		nilai_huruf="B+";
	} else if(nilai_akhir>=70){
		nilai_huruf="B";
	} else if(nilai_akhir>=65){
		nilai_huruf="B-";
	} else if(nilai_akhir>=60){
		nilai_huruf="C+";
	}else if(nilai_akhir>=56){
		nilai_huruf="C";
	} else if(nilai_akhir>=50){
		nilai_huruf="D";
	} else {
		nilai_huruf="E";
	} 
	
	cout<<endl;
	cout<<"Nilai Akhir : "<<nilai_akhir<<endl;
	cout<<"Nilai Huruf : "<<nilai_huruf<<endl;
	
	getch();
	return 0;
}
