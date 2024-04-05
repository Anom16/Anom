#include <iostream>
using namespace std;
int main(){
	string nama;
	int keaktifan,tugas,ujian,keaktifan1,tugas1,ujian1,akhir;
	
	cout<<"Program Hitung Nilai Akhir"<<endl;
	cout<<"=========================="<<endl;
	
	cout<<"Nama Siswa : ";
	cin>>nama;
	cout<<"Nilai Keaktifan : ";
	cin>>keaktifan;
	cout<<"Nilai Tugas : ";
	cin>>tugas;
	cout<<"Nilai Ujian : ";
	cin>>ujian;
	
	keaktifan1=keaktifan * 0.2;
	tugas1=tugas * 0.5;
	ujian1=ujian * 0.3;
	akhir=keaktifan1+tugas1+ujian1;
	
	cout<<"Siswa yang bernama : "<<nama<<endl;
	cout<<"Dengan Nilai Persentasi Yang dihasilkan"<<endl;
	cout<<"Nilai Keaktifan * 20% : "<<keaktifan1<<endl;
	cout<<"Nilai Tugas * 50% : "<<tugas1<<endl;
	cout<<"Nilai Ujian * 30% : "<<ujian1<<endl;
	cout<<"Jadi siswa yang bernama "<<nama<< " memperoleh nilai akhir sebesar "<<akhir<<endl;
	
	return 0;
}
