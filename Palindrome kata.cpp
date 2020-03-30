#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char kata[25];
    int reverse_kata, jumlah_kata;
    char outputkata, ulang;
    bool palindrome=true;

    ulangi:
    system("CLS");

    cout<< "Progam Palindrome kata\n";
    cout<< "========================\n\n";

    cout<< "Masukkan Kata : ";
    cin>>kata;

    jumlah_kata=strlen(kata);
    cout<< "\nKata yang dimasukkan : " << kata<<endl;
    cout<< "Jumlah Huruf : " << jumlah_kata<<endl;

    cout<< "kata dibalik menjadi : ";
    for(int i=jumlah_kata; i>=1; i--)
    {
        outputkata =kata[i-1];
        cout << outputkata;
    }

    reverse_kata = jumlah_kata-1;
    for(int i=0; i<jumlah_kata; i++)
    {
        if((char)tolower(kata[i])!=(char)tolower(kata[reverse_kata]))
        {
            palindrome = false;
            break;
        }
        reverse_kata--;
    }

    if(palindrome)
    {
        cout<<"\n\nPalindrome"<<endl;
    }else
    {
        cout<<"\n\nBukan Palindrome"<<endl;
    }

    cout<< "\n========================\n";
    cout << "Mau Mencoba Ulang? Y/N\n";
    cin >> ulang;
    if(ulang=='Y'||ulang=='y')
        {
            goto ulangi;
        }else if(ulang=='N'||ulang=='n')
        {
            goto akhir;
        }else
        {
            cout<<"Pilihan yang anda masukkan salah";
        }

    akhir:
    return 0;
}
