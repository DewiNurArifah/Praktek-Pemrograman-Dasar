/* PROGRAM TABEL PERKALIAN */
/* DEWI NUR ARIFAH */
/* 20051397079 */
/* MANAJEMEN INFORMATIKA - 2020A */
/* TUGAS NOMER 6 */

#include <iostream> 
#include <conio.h>
using namespace std;

int main (){
	int i, j;
	
	cout << "\t \t TABEL PERKALIAN 1-10 \t \t \n" << endl;
	cout << " \t1 \t2 \t3 \t4 \t5 \t6 \t7 \t8 \t9 \t10\n";

	
	for (i=1; i<=10; i++){
		cout << i <<endl ;
		
		for (j=1; j<=10; j++){
			
			cout << "\t";
			cout << "*";
		}
		cout << endl ;
	}
	
	getch();
}
