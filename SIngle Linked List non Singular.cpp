#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//global var/const
typedef struct Tnode
{
    string data;
    Tnode *next;
};

typedef struct Tnim
{
    float nim;
    Tnim *next_nim;
};

//head node //proto func/proc
Tnode *head;
Tnim *head_nim;

void initHead();
int isEmpty();
void insertDepan(string databaru);
void insertBelakang(float datanim);
void tampilList();
void hapusDepan();
void hapusBelakang();
void clearList();

//detil fungsi

void initHead()
{
    head=NULL; // NULL <> null
}

void initNimHead()
{
    head_nim=NULL;
}

//cek list kosong atau tidak
int isEmpty()
{
    return (head == NULL) ? 1:0;
}

int NimisEmpty()
{
    return (head_nim == NULL) ? 1:0;
}
//tambah data di depan
void insertDepan(string databaru)
{
    Tnode *baru;
    baru = new Tnode;
    baru ->data = databaru;
    baru ->next = NULL;

    if( isEmpty()==1)
    {
        head = baru;
        head -> next = NULL;
    }
    else
    {
        baru -> next = head;
        head = baru;
    }
    cout << "Data nama Mahasiswa telah ditambahkan\n";
}

//tambah data dibelakang
void insertBelakang(float data_nim)
{
    Tnim *baru_nim, *bantu_nim;
    baru_nim = new Tnim;
    baru_nim ->nim = data_nim;
    baru_nim ->next_nim= NULL;

    if(NimisEmpty()==1)
    {
        head_nim = baru_nim;
        head_nim-> next_nim = NULL;
    }
    else
    {
        bantu_nim = head_nim;
        while(bantu_nim->next_nim != NULL)
        {
            bantu_nim= bantu_nim ->next_nim;
        }
        bantu_nim->next_nim = baru_nim;
    }
    cout << "Data NIM Mahasiswa telah ditambahkan\n";
}

//menampilkan list nama
void tampilList()
{
    Tnode *bantu;
    bantu = head;
    if(isEmpty()==0)
    {
        while(bantu != NULL)
        {
            cout << bantu->data<<" " << endl;
            bantu=bantu->next;
        }
        cout<<"\n";
    }
    else
    {
        cout<<"Masih Kosong\n";
    }

}

//menampilkan list nim
void tampilListNim()
{
    Tnim *bantu_nim;
    bantu_nim = head_nim;
    if(NimisEmpty()==0)
    {
        while(bantu_nim != NULL)
        {
            cout << bantu_nim->nim<<" " << endl;
            bantu_nim = bantu_nim -> next_nim;
        }
        cout<<"\n";
    }
    else
    {
        cout<<"Masih Kosong\n";
    }

}

void tampildata()
{
    tampilList(); tampilListNim();
}

//hapus data nama terakhir
void hapusBelakang()
{
    Tnode *hapus, *bantu;
    string d;
    if(isEmpty()==0)
    {
        if(head->next != NULL)
        {
            bantu=head;
            while(bantu->next->next != NULL)
            {
                bantu=bantu->next;
            }
            hapus=bantu->next;
            d=hapus->data;
            bantu->next=NULL;
            delete hapus;
        }
        else
        {
            d=head->data;
            head=NULL;
        }
        cout<<d<< " Terhapus\n";
    }
    else
    {
        cout<< "Masih kosong\n";
    }
}

//hapus data nama terakhir
void hapusBelakangNim()
{
    Tnim *hapus_nim, *bantu_nim;
    float n;
    if(NimisEmpty()==0)
    {
        if(head_nim->next_nim != NULL)
        {
            bantu_nim=head_nim;
            while(bantu_nim->next_nim->next_nim != NULL)
            {
                bantu_nim=bantu_nim->next_nim;
            }
            hapus_nim=bantu_nim->next_nim;
            n=hapus_nim->nim;
            bantu_nim->next_nim=NULL;
            delete hapus_nim;
        }
        else
        {
            n=head_nim->nim;
            head_nim=NULL;
        }
        cout<<n<< " Terhapus\n";
    }
    else
    {
        cout<< "Masih kosong\n";
    }
}

int main()
{
    ulangi:
    system("CLS");

    cout << "Single Linked List non Circular.\n";
    cout << "Progam Input Data Nama Dan NIM Mahasiswa.\n";

    cout<< "\nMasukkan Nama Mahasiswa\n";
    string data_baru;
    for(int i=5; i>0; i--)
    {
        cout<< "\nMasukkan Nama Mahasiswa ke-"<<i<<" : ";
        cin>> data_baru;
        insertDepan(data_baru);
    }
    cout<< "Tampilkan isi List Nama :\n";
    tampilList();

    //entry data belakang
    cout<< "Masukkan NIM Mahasiswa\n";
    float data_nim;
    for(int i=5; i>0; i--)
    {
        cout<< "\nMasukkan NIM Mahasiswa ke-"<<i<<" : ";
        cin>> data_nim;
        insertBelakang(data_nim);
    }

    cout<< "Tampilkan isi List NIM :\n";
    tampilListNim();

    //hapus data di depan
    cout<< "\nHapus Data Nama Terakhir\n";
    for(int i=1; i<=1; i++)
    {
        hapusBelakang();
    }
    //hapus data nim terakhir
     cout<< "\nHapus  Data Nim Terakhir\n";
    for(int i=1; i<=1; i++)
    {
        hapusBelakangNim();
    }

    cout<< "\nTampilkan isi List Nama :\n";
    tampilList();

    cout<< "Tampilkan isi List NIM :\n";
    tampilListNim();

    char ulang;
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
