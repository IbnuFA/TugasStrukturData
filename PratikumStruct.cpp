#include <iostream>
#include <string>
using namespace std;

struct data_pembeli
{
    char kode_pbl[20]={"P001","P002","P003","P004","P005"};
    char status[20]={"M","M","BM","BM","M"};
    char nama[20]={"Diana","Rina","Lina","Doni","Dodi"};

}pembeli_data[5];

struct data_penjual
{
    char kode_brg[20]={"BRG001","BRG002","BRG003","BRG004","BRG005"};
    char nama_brg[20]={"Pensil","Buku Tulis","Penghapus","Penggaris","Ballpoint"};
    long int harga[20]={"2000","3500","1000","1500","2500"};

}barang_data[5];

int main()
{
    int jumlah;
    int jumlahtotal;
    int uang;

    ulang:

    cout<<"Masukkan Kode Pembeli :";
    cin>>pembeli_data[5].kode_pbl];
    if(pembeli_data.kode_pbl==0){
        cout<<pembeli_data[5].nama;
        cout<<pembeli_data[5].status
   }else(pembeli_data[5].kode_pbl==1){
        cout<<"Kode Anda Salah";
        goto ulang;
   }

    ulang2:
   cout<<"Masukkan Kode Barang :";
   cin>>barang_data.kode_brg[;
   if(barang_data[5].kode_brg==0{
        cout<<barang_data[5].nama_brg;
        cout<<barang_data[5].harga;
   }else(barang_data.kode[5]_brg==1){
        cout<<"Kode Anda Salah";
        goto ulang2;
   }
   cout<<"Jumlah yang dibeli :";
   cin>>jumlah<<endl<<endl;
   cout<<"Input uang anda :";
   cin>>uang;<<endl;

   //NOTA
    cout<<"Kode Barang :"<<barang_data.kode_brg<<endl;
    cout<<"Nama Barang :"<<barang_data.nama_brg<<endl;
    cout<<"Harga Barang:"<<barang_data.harga<<endl;
    cout<<"Jumlah yang dibeli :"<<jumlah
    cout<<"Jumlah Total :"<<jumlahtotal<<endl;
    jumlahtotal=jumlah*barang_data.harga;
    if(jumlah<2){
        cout<<"Diskon 10% :"<<jumlahtotal*10/100;
        cout<<"Jumlah Total :"<<jumlahtotal<<endl;
    }else(jumlah>2){
        cout<<"Jumlah Total :"<<jumlahtotal<<endl;
    }
    cout<<"Uang Anda :"<<uang<<endl;
    cout<<"Kembali :"<<int kembali=uang-jumlahtotal;<<endl<<endl;

    cout<<"DATA PEMBELI";
    cout<<"Kode Pembeli :";
    cout<<pembeli_data[5].kode_pbl;
    cout<<"Nama Pembeli :";
    cout<<pembeli_data[5].nama;
    cout<<"Status :";
    cout<<pembeli_data[5].status

    return 0;
}
