//Muhammad Yuda Pratama
//21091397025
//D4 MI 2021A

#include<iostream>
using namespace std;
int main()
{
	int jumlah_array=5;
	string kode[jumlah_array]= {"001","002","003","004","005"};
	string nama_barang[jumlah_array]= {"Penghapus", "Pensil","Buku","Rautan","Penggaris"};
	int jumlah_barang[jumlah_array]= {4, 3, 2, 3, 5};
	int harga_barang[jumlah_array]= {1000, 1500, 2000, 1000, 500};
	
	int total_barang =0;
	int total_harga =0;
	
	cout<< "Kode\tNama\t\tJumlah\t\tHarga\t\tTotal\n" << endl;
	
	for (int i=0; i < jumlah_array; i++)
	{
		int total = jumlah_barang[i] * harga_barang[i];
		
		cout << kode[i] << "\t" << nama_barang[i] << "\t\t" << jumlah_barang[i] 
		<< "\t\t" << harga_barang[i] << "\t" << total << endl;
		
		total_barang += jumlah_barang[i];
		total_harga += total;
	}
	
	cout <<"\nTotal Barang: " << total_barang << endl;
	cout <<"Total Harga: " << total_harga << endl;
	return 0 ;
}
