#include<iostream>
#include<conio.h>

using namespace std;

void struk_belanjaan(int total_barang,int total_harga,int nominal_uang,int jumlah_kantong_plastik,int jumlah_minuman_1,int jumlah_makanan_1,int jumlah_makanan_2,int jumlah_minuman_2){
	int kembalian=nominal_uang-total_harga;
	
	int kantong_plastik=500;
	int minuman_1=8700;
	int makanan_1=6000;
	int makanan_2=10400;
	int minuman_2=10100;
	
//	TIRUAN STRUK BELANJA
	cout<<endl;
	cout<<"            Alfamidi DAMKAR"<<endl;
    cout<<"         DAMKAR / 081380764245"<<endl<<endl;
    cout<<"           KOMP. GM KS BLOKF1"<<endl;
    cout<<"Kritik & Saran:1500959,Alfacare@mu.co.id"<<endl;
    cout<<"         WA/SMS : 081110640888"<<endl;
    cout<<"========================================"<<endl;
    cout<<"Bon   MA37-102-1210TVX9 Kasir : NANI SOF"<<endl;
    cout<<"========================================"<<endl;
    cout<<"SB MIDI REG L        "<<jumlah_kantong_plastik<<"     500       "<<jumlah_kantong_plastik*kantong_plastik<<endl;
    cout<<"YOU C LMN 500ML      "<<jumlah_minuman_1<<"    8700      "<<jumlah_minuman_1*minuman_1<<endl;
    cout<<"SK DYK CKT 55G       "<<jumlah_makanan_1<<"    6000      "<<jumlah_makanan_1*makanan_1<<endl;
    cout<<"BISKUAT 0121.6G      "<<jumlah_makanan_2<<"   10400     "<<jumlah_makanan_2*makanan_2<<endl;
    cout<<"MILO HC 240ML        "<<jumlah_minuman_2<<"   10100     "<<jumlah_minuman_2*minuman_2<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Total Item     "<<total_barang<<"                   "<<total_harga<<endl;
    cout<<"Tunai                              "<<nominal_uang<<endl;
    cout<<"Kembalian                          "<<kembalian<<endl;
    cout<<"PPN  (       3538)"<<endl;
    cout<<"========================================"<<endl;
    cout<<"Tgl.  12-10-2022  20:34:22  V.2022.5.0"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"      PT MIDI UTAMA INDONESIA TBK"<<endl;
    cout<<"      NPWP : 02.672.927.7-054.000"<<endl;
    cout<<"ALFA TOWER LT. 12, JL JALUR SUTERA BARAT"<<endl;
    cout<<"KAV. 7-9 ALAM SUTERA PANUNGGANGAN TIMUR"<<endl;
    cout<<"      PINANG KOTA TANGERANG BANTEN"<<endl;
}

int main(){
	int pilihan_menu,kantong_plastik,minuman_1,makanan_1,makanan_2,minuman_2,jumlah_barang,jumlah_harga,total_barang=0,total_harga=0,nominal_uang;
	int jumlah_kantong_plastik=0,jumlah_minuman_1=0,jumlah_makanan_1=0,jumlah_makanan_2=0,jumlah_minuman_2=0;
	
	cout<<"PROGRAM KASIR SEDERHANA"<<endl<<endl;
	cout<<"PILIHAN ITEM/MENU YANG TERSEDIA :"<<endl;
	cout<<"1. SB MIDI REG L	: Rp. 500"<<endl;
	cout<<"2. YOU C LMN 500ML	: Rp. 8700"<<endl;
	cout<<"3. SK DYK CKT 55G	: Rp. 6000"<<endl;
	cout<<"4. BISKUAT 0121.6G	: Rp. 10400"<<endl;
	cout<<"5. MILO HC 240ML	: Rp. 10100"<<endl;
	cout<<"6. SELESAI"<<endl<<endl;
	
//	SB MID REG L adalah sebagai kantong_plastik
//	YOU C LMN 500ML adalah sebagai minuman_1
//	SK DYK CKT 55G adalah sebagai makanan_1
//	BISKUAT 0121.6G adalah sebagai makanan_2
//	MILO HC 240ML adalah sebagai minuman_2

	kantong_plastik=500;
	minuman_1=8700;
	makanan_1=6000;
	makanan_2=10400;
	minuman_2=10100;
	
	cout<<"PILIH KODE ITEM/MENU : ";
	cin>>pilihan_menu;
	
	while(pilihan_menu<6){
		if(pilihan_menu==1){
		cout<<"JUMLAH BARANG : ";
		cin>>jumlah_barang;
		jumlah_harga=kantong_plastik*jumlah_barang;
		cout<<jumlah_barang<<" SB MIDI REG L : Rp. "<<jumlah_harga<<endl;
		total_barang=total_barang+jumlah_barang;
		total_harga=total_harga+jumlah_harga;
		jumlah_kantong_plastik=jumlah_kantong_plastik+jumlah_barang;
	}else if(pilihan_menu==2){
		cout<<"JUMLAH BARANG : ";
		cin>>jumlah_barang;
		jumlah_harga=minuman_1*jumlah_barang;
		cout<<jumlah_barang<<" YOU C LMN 500ML : Rp. "<<jumlah_harga<<endl;
		total_barang=total_barang+jumlah_barang;
		total_harga=total_harga+jumlah_harga;
		jumlah_minuman_1=jumlah_minuman_1+jumlah_barang;
	}else if(pilihan_menu==3){
		cout<<"JUMLAH BARANG : ";
		cin>>jumlah_barang;
		jumlah_harga=makanan_1*jumlah_barang;
		cout<<jumlah_barang<<" SK DYK CKT 55G : Rp. "<<jumlah_harga<<endl;
		total_barang=total_barang+jumlah_barang;
		total_harga=total_harga+jumlah_harga;
		jumlah_makanan_1=jumlah_makanan_1+jumlah_barang;
	}else if(pilihan_menu==4){
		cout<<"JUMLAH BARANG : ";
		cin>>jumlah_barang;
		jumlah_harga=makanan_2*jumlah_barang;
		cout<<jumlah_barang<<" BISKUAT 0121.6G : Rp. "<<jumlah_harga<<endl;
		total_barang=total_barang+jumlah_barang;
		total_harga=total_harga+jumlah_harga;
		jumlah_makanan_2=jumlah_makanan_2+jumlah_barang;
	}else if(pilihan_menu==5){
		cout<<"JUMLAH BARANG : ";
		cin>>jumlah_barang;
		jumlah_harga=minuman_2*jumlah_barang;
		cout<<jumlah_barang<<" MILO HC 240ML : Rp. "<<jumlah_harga<<endl;
		total_barang=total_barang+jumlah_barang;
		total_harga=total_harga+jumlah_harga;
		jumlah_minuman_2=jumlah_minuman_2+jumlah_barang;
	}
	cout<<"PILIH KODE ITEM/MENU : ";
	cin>>pilihan_menu;
	}
	
	cout<<endl;
	cout<<"NOMINAL UANG ANDA : Rp. ";
	cin>>nominal_uang;
	
	cout<<endl;
	
	struk_belanjaan(total_barang,total_harga,nominal_uang,jumlah_kantong_plastik,jumlah_minuman_1,jumlah_makanan_1,jumlah_makanan_2,jumlah_minuman_2);
	
	getch();
	return 0;
}
