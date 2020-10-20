//*Menghitung Segitiga*//
/*Hana Farahdiana(20051397073)*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	string nama;
	int pilihan, sisi1, sisi2, sisi3, keliling, panjang, luas;
	char ulang;
	
	cout<<endl;
	cout<<"===============\n"<<endl;
	cout<<"-------Menu Segitiga Siku-Siku-------\n"<<endl;
	cout<<"-------Hana Farahdiana-------\n"<<endl;
	cout<<"-------20051397073-------\n"<<endl;
	
	cout<<"=============="<<endl;
	cout<<"1. Hitung Panjang Sisi Miring"<<endl;
	cout<<"2. Hitung Luas"<<endl;
	cout<<"3. Hitung Keliling"<<endl;
	cout<<"4. Hitung Program"<<endl;
	cout<<"=============="<<endl;
	
	cout<<"Masukkan Pilihan Anda :";
	cin>>pilihan;
	switch(pilihan){
		
case 1: cout<<"Masukkan Alas Segitiga :";
		cin>>sisi1;
		cout<<"Masukkan Tinggi Segitiga :";
		cin>>sisi2;
		panjang= sqrt((sisi1*sisi1)+(sisi2*sisi2));
		cout<<"Panjang Sisi Miring adalah :"<<panjang; break;
case 2: cout<<"Masukkan Alas Segitiga :";
		cin>>sisi1;
		cout<<"Masukkan Tinggi Segitiga :";
		cin>>sisi2;
		luas= sisi1*sisi2/2;
		cout<<"Luas Segitiga adalah :"<<luas; break;
case 3: cout<<"Masukkan Panjang Sisi Alas :";
		cin>>sisi1;
		cout<<"Masukkan Panjang Sisi Tinggi :";
		cin>>sisi2;
		cout<<"Masukka Panjang Sisi Miring :";
		cin>>sisi3;
		keliling= sisi1 + sisi2 + sisi3;
		cout<<"Keliling Segitiga adalah :"<<keliling; break;
case 4: cout<<"Yakin Mau Keluar?(Y/T)";
		cin>>ulang; break;
		default: cout<<"Maaf Inputan Salah"; break;
	}
		while(ulang=='t'||ulang=='T');
		cout<<endl;
		cout<<"n TERIMA KASIH";
		
}
