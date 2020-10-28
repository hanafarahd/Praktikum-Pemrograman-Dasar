//*Program Tabel Perkalian*//
/*Hana Farahdiana*/
/*20051397073*/
/*D4 Manajemen Informatika*/
/*Tugas 7*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main() {
	int a, b, c, n;
	
	cout<<"===============\n\n";
	cout<<"\t Program Segitiga Angka \t"<<endl;
	cout<<"===============\n\n";
	
	cout<<"Masukkan Besar Angka dalam Segitiga :";
	cin>>a;
	cout<<endl;
	
	for(b=1; b<=a; b++) {
	n=1;
	for(c=1; c<=b; c++) {
	cout<<n;
	n++;
	}
	cout<<"\n";
	}
	getch() ;
}
