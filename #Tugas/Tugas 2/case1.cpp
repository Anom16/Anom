#include <iostream>
using namespace std;
int main (){
	string nama;
	int nim,nilai1,nilai2,nilai3,total,rata;
	
	cout<<"Program Menghitung Nlai Rata-Rata Siswa"<<endl;
	cout<<"======================================="<<endl;
	
	cout<<"Masukan Nim Siswa : ";
	cin>>nim;
	cout<<"Masukan Nama Siswa : ";
	cin>>nama;
	cout<<"Masukan Nilai I : ";
	cin>>nilai1;
	cout<<"Masukan Nilai II : ";
	cin>>nilai2;
	cout<<"Masukan Nilai III : ";
	cin>>nilai3;
	
	total=nilai1+nilai2+nilai3;
	rata=total/3;
	
	cout<<"Nim "<<nim<<" Siswa yang Bernama "<<nama<<" Memperoleh nilai rata-rata "<<rata<<" dari hasil tugas yang diikutinya"<<endl;
	return 0;
	
}
