/* PROGRAM TABEL PERKALIAN */
/* DEWI NUR ARIFAH */
/* 20051397079 */
/* MANAJEMEN INFORMATIKA - 2020A */
/* TUGAS NOMER 7 */

#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	int a, b, c, n;
	
	cout << "_____________________________________________ \n \n";
	cout << "\t PROGRAM SEGITIGA ANGKA \t"<<endl;
	cout << "_____________________________________________ \n \n";
	
	cout << "Masukkan besar angka dalam segitiga : ";
	cin >> a;
	cout << endl;
	
	for (b=1; b<=a; b++){
		n =1;
		for (c=1; c<=b; c++){
		cout<<n;
		n++;
		}
	cout<<" \n";
    }
    
	for (b=a-1; b>=1; b--){
    	n =1;
    	for (c=1; c<=b; c++){
    	cout<<n;
    	n++;
		}
	cout<<" \n";
	
	}
	getch();
}
