/* PROGRAM MENGHITUNG SEGITIGA SIKU-SIKU BESERTA MENU */ 
/* DEWI NUR ARIFAH */ 
/* 20051397079 */
/* D4 MANAJEMEN INFORMATIKA-2020A */

#include<iostream>
#include<math.h>
using namespace std;

int getOption(){
	int input;
	
	cout<<"\t PROGRAM MENGHITUNG RUMUS SEGITIGA \t"<<endl;
	cout<<"======================================== \n";
	cout<<"MENU SEGITIGA SIKU-SIKU \n";
	cout<<"1. Menghitung Panjang Sisi Miring \n";
	cout<<"2. Menghitung Luas \n";
	cout<<"3. Menghitung Keliling \n";
	cout<<"4. Keluar \n";
	cout<<"======================================== \n";
	cout<<"silahkan pilih (1-4) : ";
	cin>>input;
	return input;
}
	
	int main(){
		
	int pil = getOption();
	int a,t,L, simir, luas, keliling;
	switch (pil){
		case 1:
			cout<<"Menghitung Panjang Sisi Miring \n";
			cout<<"Masukkan alas \t\t : "; cin>>a;
			cout<<"Masukkan tinggi \t : "; cin>>t;
			simir=sqrt((a*a)+(t*t));
			cout<<"Panjang sisi miring \t : "; cout<<simir;
			break;
			
		case 2:
			cout<<"Menghitung Luas \n";
			cout<<"Masukkan alas \t\t : "; cin>>a;
			cout<<"Masukkan tinggi \t : "; cin>>t;
			luas=((a*t)/2);
			cout<<"Luas	\t\t  : "; cout<<luas;
			break;
			
		case 3:
			cout<<"Menghitung Keliling \n";
			cout<<"Masukkan alas \t\t : "; cin>>a;
			cout<<"Masukkan tinggi \t : "; cin>>t;
			keliling=(a+t+simir);
			cout<<"Keliling \t\t : "; cout<<keliling;
			break;
		case 4 : 
			cout<<"keluar";
	}
	exit (0);
}
