//*Menghitung Gaji*//
/*Hana Farahdiana(20051397073)*/

#include<iostream>
#include<conio.h>

using namespace std;

int main ()
{
	string nama;
	char pilihan;
	int jumlah, total, gaji, lembur, sisa, sisa1;
	int jam;
	
	cout<<"==============="<<endl;
	cout<<"===PROGRAM MENGHITUNG GAJI KARYAWAN==="<<endl;
	cout<<"Nama Karyawan\t:"<<endl;
	cin>>nama;
	cout<<"Golongan\t:"<<endl;
	cin>>pilihan;
	cout<<"Jumlah Jam Kerja"<<endl;
	cin>>jam;
	cout<<"==============="<<endl;
	cout<<endl;
	
	if(pilihan=='A'||pilihan=='a')
	{
	jumlah=5000;
	}
	else if(pilihan=='B'||pilihan=='b')
	{
	jumlah=7000;
	}
	else if(pilihan=='C'||pilihan=='c')
	{
	jumlah=8000;
	}
	else if(pilihan=='D'||pilihan=='d')
	{
	jumlah=10000;
	}
	if(jam>48)
	{
	sisa=jam - 48;//sisa=1
	sisa1= jumlah * (jam-sisa);
	total=4000 * sisa;
	jumlah= sisa1 + total;
	}
	else
	{
	jumlah= jumlah * jam;
	}
	
	cout<<"Nama Karyawan\t:"<<nama<<endl;
	cout<<"Total Gaji\t:"<<jumlah<<endl;
	
	
	
}
