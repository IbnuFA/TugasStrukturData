#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10

using namespace std;

typedef struct
{
    int data[MAX];
    int head;
    int tail;
}antri;

antri antrian;

void Create()
{
    antrian.head=antrian.tail=-1;
}

int data_kosong()
{
    if(antrian.tail==-1)
        return 1;
    else
        return 0;
}

int data_penuh()
{
    if(antrian.tail==MAX-1)
        return 1;
    else
        return 0;
}

void Enqueue(int data)
{
    int no=1;
    if(data_kosong()==1)
        {
            antrian.head=antrian.tail=0;
            antrian.data[antrian.tail]=data;
            cout<<data<<" masuk antrian ke-"<<no;
        }else
        {
            if(data_penuh()==0)
            {
                antrian.tail++;
                antrian.data[antrian.tail]=data;
                if(antrian.tail==0)
                {
                    no=no+1;
                }else
                {
                    no+=antrian.tail;
                }
                cout<<data<<" masuk antrian ke-"<<no;
            }else
            {
                cout<<"Data Penuh\n";
            }
            }
}

int Dequeue()
{
     int i;
     int e = antrian.data[antrian.head];

     for(i=antrian.head; i<=antrian.tail-1; i++)
     {
        antrian.data[i] = antrian.data[i+1];
     }
     antrian.tail--;

     return e;
}

void Clear()
{
     antrian.head=antrian.tail=-1;
     cout<<"Semua Data berhasil dihapus!";
}

void Tampil()
{
    if(data_kosong()==0)
    {
        for(int i=antrian.head; i<=antrian.tail; i++)
        {
            cout<<antrian.data[i];
        }
    }else
    {
        cout<<"Data Kosong!\n";
    }
}

void hitungdata(int pil)
{
    int jum=0;
    int b=antrian.tail+1;
    float avg;

    if(data_kosong()==0)
    {
        for(int i=antrian.head; i<=antrian.tail; i++)
        {
            jum=jum+antrian.data[i];
        }
        avg=jum/b;
        switch(pil)
        {
            case 1:
                cout<<"Jumlah Data = "<<jum;
                break;
            case 2:
                cout<<"Rata-rata Data = "<<avg;
                break;
            case 3:
                cout<<"Banyak Data = "<<antrian.tail+1;
                break;
            default:
                break;
        }
    }else
    {
        cout<<"Data Kosong!\n";
    }
}

int main()
{
    int pilihan;
    int data;
    Create();

    do
    {
        system ("CLS");

        cout<<"1. Enqueue Data\n";
        cout<<"2. Dequeue Data\n";
        cout<<"3. Tampilkan Data\n";
        cout<<"4. Bersihkan Data\n";
        cout<<"5. Banyak Data\n";
        cout<<"6. Jumlah Data\n";
        cout<<"7. Rata-rata Data\n";
        cout<<"8. Exit\n";
        cout<<"Pilihan = ";
        cin>>pilihan;

        switch(pilihan)
        {
            case 1:
                if(data_penuh()==0)
                {
                    cout<<"Input Data = ";
                    cin>>data;
                }
                Enqueue(data);
                break;
            case 2:
                cout<<"Data yang keluar :"<<Dequeue();
                break;
            case 3:
                Tampil();
                break;
            case 4:
                Clear();
                break;
            case 5:
                hitungdata(3);
                break;
            case 6:
                hitungdata(1);
                break;
            case 7:
                hitungdata(2);
                break;
            default:
                cout<<"Pilihan Tidak Tersedia";
                break;
        }
        getch();
    }while(pil!=8);
        return 0;
}
