#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char kota1,kota2,kota3,kota4,kota5;
    int jumlah,panjang, hasil1,hasil2,hasil3,hasil4,hasil5,hasil6,hasil7;
    
    //input jumlah kota
    cout<<"*Jumlah kota yang berada di kerajaan Britan : ";
    cin>>jumlah;
    
    //input nama kota
    cout<<"Kota Pertama : ";
    cin>>kota1;
    cout<<"Kota Kedua   : ";
    cin>>kota2;
    cout<<"Kota Ketiga  : ";
    cin>>kota3;
    cout<<"Kota Keempat : ";
    cin>>kota4;
	cout<<"Kota kelima  : ";
	cin>>kota5;
	
	cout<<endl;
	
	//deklarasi graph                                            
	//menampilkan graph yang terjadi
	cout<<"*Sisi-sisinya adalah : "<<endl;
    cout<<kota1<<kota2<<",";
    cout<<kota1<<kota4<<",";
    cout<<kota1<<kota5<<",";
    cout<<kota2<<kota3<<",";
    cout<<kota3<<kota5<<",";
    cout<<kota3<<kota4<<",";
    cout<<kota4<<kota5<<endl<<endl;
	
	//deklarasi edge
	//menampilkan panjang jalan yang menghubungkan vertex
	cout<<"*Panjang jalan antar kota : "<<endl;
	cout<<"Panjang "<<kota1<<" ke "<<kota2<< ": "; cin>> hasil1;
	cout<<"Panjang "<<kota1<<" ke "<<kota4<< ": "; cin>> hasil2;
	cout<<"Panjang "<<kota1<<" ke "<<kota5<< ": "; cin>> hasil3;
	cout<<"Panjang "<<kota2<<" ke "<<kota3<< ": "; cin>> hasil4;
	cout<<"Panjang "<<kota3<<" ke "<<kota5<< ": "; cin>> hasil5;
	cout<<"Panjang "<<kota3<<" ke "<<kota4<< ": "; cin>> hasil6;
	cout<<"Panjang "<<kota4<<" ke "<<kota5<< ": "; cin>> hasil7;
	
	cout<<endl;
	
	//deklarasi adjacent
	//menampilkan jalan yang menghubungkan kedua simpul (x,y,z)
	cout<<"*Seluruh jalan yang ada dalam kerajaan britan dan panjang jalannya : "<< endl;
	cout<<"("<<kota1<<","<<kota2<<","<<hasil1<<") ";
	cout<<"("<<kota1<<","<<kota4<<","<<hasil2<<") ";
	cout<<"("<<kota1<<","<<kota5<<","<<hasil3<<") ";
	cout<<"("<<kota2<<","<<kota3<<","<<hasil4<<") ";
	cout<<"("<<kota3<<","<<kota5<<","<<hasil5<<") ";
	cout<<"("<<kota3<<","<<kota4<<","<<hasil6<<") ";
	cout<<"("<<kota4<<","<<kota5<<","<<hasil7<<") ";
	
	cout<<endl<<endl;
	
	//hasil
	//menampilkan tempat pedagang berada
	cout<<"*Kota tempat pedagang sekarang berada : ";
	cout<<kota1;
	
	cout<<endl;
	
	//menampilkan kota yang diserang naga
	cout<<"*Kota yang diserang naga : ";
	cout<<kota3; 
	
	cout<<endl<<endl;
	
	//menampilkan kota yang terdapat kastil
	cout<<"*Kota yang memiliki kastil : ";
	cout<<kota5;
	
	cout<<endl<<endl;
	
	//menampilkan vertex tercepat untuk selamat	
	cout<<"*Jalur yang paling cepat ditempuh : ";
	cout<<kota1<<"-"<<kota4<<"-"<<kota5<<endl;
	
	cout<<endl;
	
	//total edge yang harus ditempuh
	cout<< "*Dengan jarak : ";
	cout<<hasil2+hasil7<<endl;
	
	getch();
	return 0;
}