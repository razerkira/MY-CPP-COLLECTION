#include<iostream>
#include<cstring>
#include<cstdlib>
#include<conio.h>

using namespace std;

int main(){
	string hari_lahir,tanggal_lahir,bulan_lahir,tahun_lahir;
	string nama_bulan[12] = {"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};

	cout<<"Masukkan tanggal lahir anda (YYYY-MM-DD) : ";
	getline(cin,hari_lahir);
	tahun_lahir=hari_lahir.substr(0,4);
	bulan_lahir=hari_lahir.substr(5,2);
	tanggal_lahir=hari_lahir.substr(8,2);
	
	int angka_tanggal_lahir=atoi(tanggal_lahir.c_str());
	int angka_tahun_lahir=atoi(tahun_lahir.c_str());
	
	if(bulan_lahir=="01"&&angka_tanggal_lahir>0&&angka_tanggal_lahir<32&&angka_tahun_lahir>0){
			cout<<"Anda lahir di tanggal "<<angka_tanggal_lahir<<" bulan "<<nama_bulan[0]<<" tahun "<<tahun_lahir<<endl;
	} else if(bulan_lahir=="02"&&angka_tanggal_lahir>0&&angka_tanggal_lahir<32&&angka_tahun_lahir>0){
			cout<<"Anda lahir di tanggal "<<angka_tanggal_lahir<<" bulan "<<nama_bulan[1]<<" tahun "<<tahun_lahir<<endl;
	} else if(bulan_lahir=="03"&&angka_tanggal_lahir>0&&angka_tanggal_lahir<32&&angka_tahun_lahir>0){
			cout<<"Anda lahir di tanggal "<<angka_tanggal_lahir<<" bulan "<<nama_bulan[2]<<" tahun "<<tahun_lahir<<endl;
	} else if(bulan_lahir=="04"&&angka_tanggal_lahir>0&&angka_tanggal_lahir<32&&angka_tahun_lahir>0){
			cout<<"Anda lahir di tanggal "<<angka_tanggal_lahir<<" bulan "<<nama_bulan[3]<<" tahun "<<tahun_lahir<<endl;
	} else if(bulan_lahir=="05"&&angka_tanggal_lahir>0&&angka_tanggal_lahir<32&&angka_tahun_lahir>0){
			cout<<"Anda lahir di tanggal "<<angka_tanggal_lahir<<" bulan "<<nama_bulan[4]<<" tahun "<<tahun_lahir<<endl;
	} else if(bulan_lahir=="06"&&angka_tanggal_lahir>0&&angka_tanggal_lahir<32&&angka_tahun_lahir>0){
			cout<<"Anda lahir di tanggal "<<angka_tanggal_lahir<<" bulan "<<nama_bulan[5]<<" tahun "<<tahun_lahir<<endl;
	} else if(bulan_lahir=="07"&&angka_tanggal_lahir>0&&angka_tanggal_lahir<32&&angka_tahun_lahir>0){
			cout<<"Anda lahir di tanggal "<<angka_tanggal_lahir<<" bulan "<<nama_bulan[6]<<" tahun "<<tahun_lahir<<endl;
	} else if(bulan_lahir=="08"&&angka_tanggal_lahir>0&&angka_tanggal_lahir<32&&angka_tahun_lahir>0){
			cout<<"Anda lahir di tanggal "<<angka_tanggal_lahir<<" bulan "<<nama_bulan[7]<<" tahun "<<tahun_lahir<<endl;
	} else if(bulan_lahir=="09"&&angka_tanggal_lahir>0&&angka_tanggal_lahir<32&&angka_tahun_lahir>0){
			cout<<"Anda lahir di tanggal "<<angka_tanggal_lahir<<" bulan "<<nama_bulan[8]<<" tahun "<<tahun_lahir<<endl;
	} else if(bulan_lahir=="10"&&angka_tanggal_lahir>0&&angka_tanggal_lahir<32&&angka_tahun_lahir>0){
			cout<<"Anda lahir di tanggal "<<angka_tanggal_lahir<<" bulan "<<nama_bulan[9]<<" tahun "<<tahun_lahir<<endl;
	} else if(bulan_lahir=="11"&&angka_tanggal_lahir>0&&angka_tanggal_lahir<32&&angka_tahun_lahir>0){
			cout<<"Anda lahir di tanggal "<<angka_tanggal_lahir<<" bulan "<<nama_bulan[10]<<" tahun "<<tahun_lahir<<endl;
	} else if(bulan_lahir=="12"&&angka_tanggal_lahir>0&&angka_tanggal_lahir<32&&angka_tahun_lahir>0){
			cout<<"Anda lahir di tanggal "<<angka_tanggal_lahir<<" bulan "<<nama_bulan[11]<<" tahun "<<tahun_lahir<<endl;
	} else{
		cout<<"Tolong masukkan data tanggal lahir anda dengan benar"<<endl;
	}
	
	getch();
	return 0;
}
