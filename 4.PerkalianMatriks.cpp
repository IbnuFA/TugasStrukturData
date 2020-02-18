#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int matA[2][2]={4,2,8,10};
    int matB[2][2]={-5,8,4,-12};
    int matC[2][2];
    int i,j,k,m,hsl;

    cout<<"Matriks A"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
        cout<<matA[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matriks B"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
          cout<<matB[i][j]<<" ";
        }
        cout<<endl;
    }
    hsl=0;
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
        matC[i][j]=0;
        for (k=0;k<2;k++){
            hsl=matA[i][k]*matB[k][j];
            matC[i][j]=matC[i][j]+hsl;
            }
        }
    }
    cout<<"Hasil Perkalian Matrik A dan B"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
        cout<<matC[i][j]<<" ";
        }
        cout<<endl;
     }
     system("PAUSE");
     return 0;
}
