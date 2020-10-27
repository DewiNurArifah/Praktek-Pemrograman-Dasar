/* PROGRAM MENGHITUNG JUMLAH DERET BILANGAN */
/* DEWI NUR ARIFAH */
/* 20051397079 */
/* MANAJEMEN INFORMATIKA-2020A */ 
/* TUGAS NOMOR 5 */

#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	int awal, beda, n, jumlah=0, i, c;
	
	cout<<"==============================================="<<endl;
	cout<<"\t Menghitung Jumlah Deret Bilangan \t"<<endl;
	cout<<"==============================================="<<endl;
	cout<<"Masukkan Bilangan awal \t    = ";
	cin>>awal; 
	cout<<"Masukkan beda \t\t    = ";
	cin>>beda;
	cout<<"Masukkan jumlah bilangan sampai deret ke-n = ";
	cin>>n;
	
	cout<<"------------------------------------------------"<<endl;
	cout<<"Deret ke-"<<n<<" \t\t = ";
	cout<<awal<<",";

	jumlah=jumlah+awal; 
    for(i=0; i<n-1; i++){
             c=awal+beda;
             awal=c;
             cout<<c<<",";
             jumlah=jumlah+c; 
} 

	cout<<endl<<"Jumlah Deret Ke-"<<n<<" \t = ";
	cout<<jumlah;
	
	getch ();
    return 0;  
}
