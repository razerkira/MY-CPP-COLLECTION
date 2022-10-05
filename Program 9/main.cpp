#include<iostream>
#include<cstdlib>
#include<conio.h>

using namespace std;

void myFunction(string nama,string tanggal_lahir,string fakultas,string jurusan,string NIM,int angka_tanggal,string bulan,int angka_tahun,float nilai_akhir,string nilai_huruf){
    cout<<"DATA MAHASISWA : "<<endl;
	cout<<"Nama : "<<nama<<endl;
	cout<<"Tanggal Lahir : "<<tanggal_lahir<<" / "<<"Anda lahir di tanggal "<<angka_tanggal<<" bulan "<<bulan<<" tahun "<<angka_tahun<<endl;
    cout<<"Fakultas : "<<fakultas<<endl;
    cout<<"Jurusan : "<<jurusan<<endl;
    cout<<"NIM : "<<NIM<<endl<<endl;
    cout<<"LAPORAN NILAI : "<<endl;
    cout<<"Nilai Akhir : "<<nilai_akhir<<endl;
    cout<<"Nilai Huruf : "<<nilai_huruf<<endl;
}

int main(){
    string nama,tanggal_lahir,fakultas,jurusan,NIM,tanggal,bulan,tahun;
    string nama_bulan[12]={"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
    float absensi,tugas,uts,uas,nilai_akhir;
    string nilai_huruf;
    
    cout<<"Nama : ";
    getline(cin,nama);
    
    cout<<"Tanggal Lahir (YYYY-MM-DD) : ";
    getline(cin,tanggal_lahir);
    
    tahun=tanggal_lahir.substr(0,4);
    bulan=tanggal_lahir.substr(5,2);
    tanggal=tanggal_lahir.substr(8,2);
    
    int angka_tanggal=atoi(tanggal.c_str());
    int angka_tahun=atoi(tahun.c_str());
    
    if(bulan=="01"){
    	bulan=nama_bulan[0];
	} else if(bulan=="02"){
		bulan=nama_bulan[1];
	} else if(bulan=="03"){
		bulan=nama_bulan[2];
	}else if(bulan=="04"){
		bulan=nama_bulan[3];
	}else if(bulan=="05"){
		bulan=nama_bulan[4];
	}else if(bulan=="06"){
		bulan=nama_bulan[5];
	}else if(bulan=="07"){
		bulan=nama_bulan[6];
	}else if(bulan=="08"){
		bulan=nama_bulan[7];
	}else if(bulan=="09"){
		bulan=nama_bulan[8];
	}else if(bulan=="10"){
		bulan=nama_bulan[9];
	}else if(bulan=="11"){
		bulan=nama_bulan[10];
	}else if(bulan=="12"){
		bulan=nama_bulan[11];
	}
    
    cout<<"Fakultas : ";
    getline(cin,fakultas);
    
    cout<<"Jurusan : ";
    getline(cin,jurusan);
    
    cout<<"NIM : ";
    getline(cin,NIM);
    
    system("cls");
    
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
	
	system("cls");
    
    myFunction(nama,tanggal_lahir,fakultas,jurusan,NIM,angka_tanggal,bulan,angka_tahun,nilai_akhir,nilai_huruf);

    getch();
    return 0;
}
