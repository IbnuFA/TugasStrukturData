#include <iostream>
#include <windows.h>
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
  cout<<"Transpose dari Matriks A"<<endl;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<<matA[j][i]<<" ";
    }
    cout<<endl;
  }
  system("PAUSE");
  return 0;
}
