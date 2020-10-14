//* Program Billing Warnet *//
/* Hana Farahdiana (20051397073) */
#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	
	string name;
	int tarif=5.000;

	cout<<name<<endl;
	
	int
	total_detik_mulai, total_detik_selesai, durasi, total_jam_pemakaian, pembayaran, sisa,
	total_menit_pemakaian, total_detik_pemakaian, nomorkomputer, nama, jumlahdetik, jumlah, J1, J2, M1, M2, D1, D2;
	
	cout<<"================================"<<endl;
	cout<<"---------Pembayaran Warnet---------\n"<<endl;
	cout<<"---------Hana Farahdiana---------\n"<<endl;
	cout<<"---------20051397073---------\n"<<endl;
	
	cout<<"================================"<<endl;
	
	cout<<"masukkan nomor komputer\t:";
	cin>>nomorkomputer;
	cout<<"Masukkan nama pengguna\t:";
	cin>>nama;
	cout<<"Masukkan waktu mulai\t:"<<endl;
	cout<<"Jam mulai=";
	cin>>J1;
	cout<<"Menit mulai=";
	cin>>M1;
	cout<<"Detik mulai=";
	cin>>D1;
	cout<<"Masukkan waktu selesai\t:"<<endl;
	cout<<"Jam selesai=";
	cin>>J2;
	cout<<"Menit selesai=";
	cin>>M2;
	cout<<"Detik selesai=";
	cin>>D2;
	
	jumlahdetik=((J2-J1)*3600)+((M2-M1)*60+(D2-D1));
	jumlah=jumlahdetik*tarif/3600;
	
	cout<<"Kepada YTH:"<<nama<<endl;
	cout<<"Total tagihan=Rp"<<jumlah;
	
	cout<<endl;
	
	
	
}	
