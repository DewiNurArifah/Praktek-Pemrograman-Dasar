/* BILLING WARNET */
/* Dewi  Nur Arifah */
/* NIM 20051397079 */

#include <iostream>
using namespace std;

int main (){
	string nameuser;
	int total_detik_mulai,total_detik_selesai,durasi,tot_jam_pemakaian,pembayaran,sisa,tot_menit_pemakaian,tot_detik_pemakaian,J1,J2,menit1,menit2,detik1,detik2;
	
	cout<<"==========================================\n";
	cout<<"\t BILLING WARNET \t \n";
	cout<<"==========================================\n";
	
	cout<<"NAMA USER \t = ";
	cin>>nameuser;
	cout<<"\n \n";
	
	cout<<"MULAI\n";
	cout<<"JAM MULAI \t = ";
	cin>>J1;
	
	cout<<"MENIT MULAI \t = ";
	cin>>menit1;
	
	cout<<"DETIK MULAI \t = ";
	cin>>detik1; 
	total_detik_mulai=(J1*3600)+(menit1*60)+detik1;
	cout<<"\n \n";
	
	cout<<"SELESAI\n";
	cout<<"JAM SELESAI \t = ";
	cin>>J2;
	cout<<"MENIT SELESAI \t = ";
	cin>>menit2;
	cout<<"DETIK SELESAI \t = ";
	cin>>detik2;
	total_detik_selesai=(J2*3600)+(menit2*60)+detik2;
	durasi=total_detik_selesai-total_detik_mulai;
	
	pembayaran=durasi*5000/3600;
	tot_jam_pemakaian=durasi/3600;
	sisa=durasi%3600;
	tot_menit_pemakaian=sisa/60;
	tot_detik_pemakaian=sisa%60;
	cout<<"\n \n";
	
	cout<<"LAMA PEMAKAIAN\n";
	cout<<"JAM = "<<tot_jam_pemakaian<<endl;
	cout<<"MENIT = "<<tot_menit_pemakaian<<endl;
	cout<<"DETIK = "<<tot_detik_pemakaian<<endl;
	cout<<"\n \n";

	cout<<"TARIF PER JAM (Rp) = 5000,- \n";
	cout<<"JUMLAH YANG HARUS DIBAYAR = "<<pembayaran<<endl;
	cout<<"=============================================\n";
	cout<<"\t Terima Kasih \t";
}
