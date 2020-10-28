//*Program Menghitung Jumlah Deret*//
/*Hana Farahdiana*/
/*20051397073*/
/*D4 Manajemen Informatika*/
/*Tugas 5*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main() {
	int awal, n, beda, jumlah=0, i, c;
	
	cout<<"==============="<<endl;
	cout<<"===Semangat Belajar, Menghitung Jumlah Deret==="<<endl;
	cout<<"===Hana Farahdiana==="<<endl;
	
	cout<<"==============="<<endl;
	cout<<"Masukkan Bilangan Awal :";
	cin>>awal;
	cout<<"Masukkan Beda :";
	cin>>beda;
	cout<<"Masukkan Jumlah Bilangan Deret ke-n :";
	cin>>n;
	
	cout<<"================"<<endl;
	cout<<"Deret ke-n :";
	cout<<"Awal";
	
	jumlah= jumlah + awal;
	for(i=0; i<n-1; i++) {
	c= awal + beda;
	awal= c;
	cout<<"c"<<endl;
	jumlah= jumlah + c;
	
	}
	
	cout<<"Jumlah Deret ke-n :";
	cout<<jumlah;
	
	getch() ;
	return 0;
	
}
