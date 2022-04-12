#include <iostream>
using namespace std;

//Penyelesaian dengan cara iteratif

int main(){
	 // Inisialisasi Variabel 
    int batas, fibo1 = 0, fibo2 = 1, next = 0;
	// penjelasan variabel, batas digunakan untuk membatasi jumlah deret yang dibuat
	//fibo1 adalah angka pertama, fibo2 adalah angka ke 2
	//next digunakan untuk memunculkan angka fibonacci selanjutnya sampai mencapai batas input
	
    cout << "Masukan Bilangan Fibonacci : ";		//input nilai
    cin >> batas;
	cout<<endl;
	// Mencetak hasil deret bilangan fibonacci
	cout << "Deret Fibonacci: ";
	
    for (int loop = 1; loop <= batas; loop++){			//looping deret fibonacci
         // Mencetak dua deret bilangan fibonacci .
        if(loop == 1)
        {
            cout << " " << fibo1 <<", ";
            continue;
        }
        if(loop == 2)
        {
            cout << fibo2 << ", ";
            continue;
        }
         // Proses Operasi Pengulangan Fibonacci
        next = fibo1 + fibo2;
         // Mencetak hasil deret bilangan fibonacci (Selanjutnya).
        cout<< next << ", ";
		fibo1 = fibo2;
        fibo2 = next;  
    }
    return 0;
}


/*
//fungsi rekursif
int Fibonacci (int fibo){ 
    if (fibo == 0 || fibo == 1){		//Kasus dasar
        return fibo;
    }
    else{    
        return Fibonacci (fibo - 1) + Fibonacci (fibo - 2);		//Fungsi rekursif
    }
}


int main(){
	//inisialisasi variabel
	int bilangan, batas = 0;	
    cout << "Masukan bilangan : ";	
    cin >> bilangan;  
   
//proses perulangan fibonacci
    for (int looping = 1; looping <= bilangan; looping++){	
    	//hasil fibonacci
        cout << " " << Fibonacci (batas); 		
        batas++;
    }
    return 0;
}
*/
