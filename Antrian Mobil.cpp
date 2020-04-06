#include <iostream>
#include <stdlib.h>
#define MAX 5

using namespace std;

struct Queue {
	int depan, belakang, data[MAX];
}Q;

bool isFull() {
	return Q.belakang == MAX;
}

bool isEmpty() {
	return Q.belakang == 0;
}

void printQueue() {
	if (isEmpty()) {
    cout << "Parkiran masih ada yang kosong\n\n";
	}
	else {
		cout << "Mobil yang terparkir : \n";
		for (int i = Q.depan; i < Q.belakang; i++)
        cout << "Mobil dengan Plat " << Q.data[i] << " Terparkir"<< endl;
		cout << endl<<endl;
  }
}

void enqueue() {
	if (isFull())
	{
		cout << "Parkiran penuh!"<<endl;
	}
	else {
		int data;
		cout << "Masukkan Plat Mobil : ";cin >> data;
		Q.data[Q.belakang] = data;
		Q.belakang++;
		cout << "Mobil Terpakir\n\n";
	}
}

void dequeue() {
	if (isEmpty())
	{
		cout << "Parkiran masih ada yang kosong"<<endl;
	}
	else{
		cout << "Mobil dengan plat \"" << Q.data[Q.depan] << " Sudah Keluar." << endl;
		for (int i = Q.depan; i < Q.belakang; i++)
        Q.data[i] = Q.data[i + 1];
		Q.belakang--;
	}
}

int main() {
	int pilih;

	cout << "********************\n";
	cout << "ANTRIAN PARKIR MOBIL\n";
	cout << "********************\n";
	do
	{
		cout << " Menu Pilihan\n";
		cout << "-----------------\n";
		cout << " [1] Parkir Mobil\n";
		cout << " [2] Keluarkan Mobil\n";
		cout << " [3] Tampilkan Antrian Mobil\n";
		cout << " [4] Keluar \n";
		cout << "------------------\n";
		cout << "Masukkan pilihan Anda : ";
		cin >> pilih;

		switch (pilih)
		{
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printQueue();
                break;
            default:
                cout << "Pilihan tidak tersedia";
                break;
		}
	} while (pilih !=4);
	return 0;
}
