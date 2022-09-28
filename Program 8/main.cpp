#include<iostream>
#include<conio.h>

using namespace std;

int main (){
    string nama,alamat,nim,fakultas,jurusan,nomorhp;
    
    cout<<"Masukan Data Berikut : "<<endl<<endl;
    cout<<"Nama     : ";
    getline (cin, nama);
    system("cls");
    
    cout<<"Masukan Data Berikut : "<<endl<<endl;
    cout<<"Alamat   : ";
    getline (cin, alamat);
    system("cls");
    
    cout<<"Masukan Data Berikut : "<<endl<<endl;
    cout<<"NIM      : ";
    getline (cin, nim);
    system("cls");
    
    cout<<"Masukan Data Berikut : "<<endl<<endl;
    cout<<"Fakultas : ";
    getline (cin, fakultas);
    system("cls");
    
    cout<<"Masukan Data Berikut : "<<endl<<endl;
    cout<<"Jurusan  : ";
    getline (cin, jurusan);
    system("cls");
    
    cout<<"Masukan Data Berikut : "<<endl<<endl;
    cout<<"No. HP   : ";
    getline (cin, nomorhp);
    
    system("cls");
    
    cout<<"DATA MAHASISWA"<<endl;
    cout<<endl;
    
    cout<<"Nama     : "<<nama<<endl;
    cout<<"Alamat   : "<<alamat<<endl;
    cout<<"NIM      : "<<nim<<endl;
    cout<<"Fakultas : "<<fakultas<<endl;
    cout<<"Jurusan  : "<<jurusan<<endl;
    cout<<"No. HP   : "<<nomorhp<<endl;
    
    getch();
    return 0;
}
