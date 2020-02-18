#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{
  int matA[2][2]={4,8,2,10};
  int j,k;

  cout<<"Matriks A"<<endl;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<<matA[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"Hasil perkalian hasil Matriks A eksponen 5"<<endl;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
    //pow = Pangkat
        cout<<pow(matA[i][j],5)<<" ";
    }
    cout<<endl;
  }
  system("PAUSE");
  return 0;
}
