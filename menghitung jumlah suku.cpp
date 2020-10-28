//*Program Menghitung Jumlah 6 Suku Pertama*//
/*Hana Farahdiana*/
/*20051397073*/
/*D4 Manajemen Informatika*/
/*Tugas 4*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main() {
	int hasil, n, a, b, kali;
	
	cout<<"==============="<<endl;
	cout<<"===SEMANGAT BELAJAR, MENGHITUNG NILAI SUKU==="<<endl;
	cout<<"===Hana Farahdiana==="<<endl;
	
	cout<<"==============="<<endl;
	cout<<"Masukkan Jumlah Nilai Suku\n\n :";
	cin>>b;
	
	for(a=1;a<=b;a++) {
	hasil= hasil + a*a*a;
	kali= a*a*a;
	cout<<kali<<"\n";
	}
	
	cout<<"Jumalah Total :";
	cout<<hasil;
	cin>>b;
	
	getch() ;
	return 0;
	
}
