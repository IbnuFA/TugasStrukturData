#include <stdio.h>
#include <iostream>

using namespace std;

void gantikata(char *data, char cari, char ganti){
    int i=0;

    while(*data !='\0'){
        *data=((*data == cari)?ganti : *data);
        data++;
        i++;
    }
}

int main(){

    char data[25], cari, ganti;

    cout << "\n    Program Replace Kalimat";

    cout << "\n\nMasukkan sebuah kalimat : ";
    cin >> data;
    
    cout << "> Masukkan huruf yang dicari: ";
    cin >> cari
        
    cout << "> Karakter yang ingin ganti: ";
    cin >> ganti;

    gantikata(data,cari, ganti);
    cout <<"\nHasil replace huruf adalah = "<< data;

    return 0;
}
