/* PROGRAM MENGHITUNG  GAJI KARYAWAN PER MINGGU */
/* DEWI NUR ARIFAH */ 
/* 20051397079 */
/* D4 MANAJEMEN INFORMATIKA-2020A */

#include<iostream>
using namespace std;

int main (){
	string nama;
	char golongan;
	int jam;
	long gaji, lembur;
	
	cout<<"============================================== \n";
	cout<<"Program Perhitungan Gaji Karyawan Perminggu \n";
	cout<<"============================================== \n";
	cout<<"Masukkan Nama Karyawan \t\t = ";
	cin>>nama;
	cout<<"Pilih Jenis Golongan [A/B/C/D] \t = ";
	cin>>golongan;
	cout<<"Masukkan Jam Kerja \t\t = "; 
	cin>>jam;
	cout<<"============================================== \n";
	
	lembur=4000;
	int lembur1=0;
	
	if (jam>48){
	lembur1 = jam-48;
	}
	
	
	switch(golongan){
 case 'A' :
  gaji = (jam-lembur1) * 5000;
   break;
  case 'B' :
  gaji = (jam-lembur1) * 7000;
   break;
   case 'C' :
  gaji = (jam-lembur1) * 8000;
   break;
    case 'D' :
  gaji = (jam-lembur1) * 10000;
   break;
     default :
            cout<<"Bukan Termasuk Golongan : "<<endl;
            gaji = 0;
            lembur = 0; 
}
   if (jam>48){
gaji = gaji+( (jam - 48) * lembur);
 }
    cout<<"Nama Karyawan  \t : "<<nama<<endl;
 cout<<"Total Gaji \t : Rp. "<<gaji<<endl;
 cout<<endl;
 cout<<"============================================== \n";
 cout<<"Terima Kasih!";

return 0;
}
