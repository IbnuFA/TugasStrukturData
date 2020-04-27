#include <iostream>
#include <conio.h>
#define n 11

using namespace std;

int main()
{
    char a[n] = {'B','A','H','T','R','D','Z','S','N','L'};
    char x,y,z;

    cout<<"\tProgram Sorting Array Dengan Ascending"<<endl;
    cout<<"\t======================================"<<endl;
    cout<<"\n\n==> Sebelum Abjad Di-Urutkan : \t";
    for (y=0; y<=n-1; y++)
    cout<<a[y];
    cout<<endl;


    z=0;
    while(z<=n-2){
        y=0;
        while(y<=n-2-z){
            if(a[y]>a[y+1]){
                x=a[y];
                a[y]=a[y+1];
                a[y+1]=x;
            }
            y++;
        }
        z++;
    }

    cout<<"\n==> Abjad Sesudah Di-Urutkann :\t";
    for(y=0; y<=n-1; y++){
        cout<<a<<a[y];
    }
    getch();
}
