#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char string [] ="belajar mata kuliah struktur data";

    cout<<"Konversi String ke huruf Kapital"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"string : "<<string<<endl;

    strupr(string);
    cout<<"\nstring setelah dikonversi : "<<string<<endl;
}
