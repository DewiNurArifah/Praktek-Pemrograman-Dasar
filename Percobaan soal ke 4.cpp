/* PROGRAM MENGHITUNG JUMLAH SUKU PERTAMA  */
/* DEWI NUR ARIFAH */
/* 20051397079 */
/* MANAJEMEN INFORMATIKA - 2020A */
/* TUGAS NOMER 4 */

#include <iostream>
#include <math.h>

using namespace std;

int main (){
	int hasil = 0, a, b, n, kali, awal, jumlah;
	
	cout << "========================================"<<endl;
	cout << "MENGHITUNG JUMLAH SUKU PERTAMA "<<endl;
	cout << "======================================== \n"<<endl;
	cout << "Masukkan jumlah bilangan suku = ";
	cin >> b;
	 
	for (a=1; a<=b; a++){
		hasil = hasil + a * a * a;
		kali = a * a * a;
	cout << kali << "\n";
	}
	cout << "jumlah total : ";
	cout << hasil;
	cin >> b;

	cout << "bilangan : "<<endl;
	cout << jumlah;
	
return 0;
}

