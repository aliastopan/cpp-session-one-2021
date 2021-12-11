#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n=9;
    int tengah= n/2;
    int batasKiri=n/2;
    int batasKanan=n/2;
    
    
    for(int i=0; i<n; i++){
        cout<< "L:" << batasKiri << " ";
        
        for(int j=0; j<n; j++)
        {
            if(j==batasKiri) // jika J itu bernilai = batas kiri -> cetak ■
            {
                cout<<"■"<<" ";
            }
            else if(j==batasKanan) // jika bernilai = batas kanan JUGA -> cetak ■
            {
                cout<<"■"<<" ";
            }
            else // jika kedua kondisi tidak terpenuhi lakukan yg dibawah
            {
                cout<< "_" <<" ";

            }
            
        }
        if(batasKiri<n-1 && i>=n/2){
            batasKiri++;
            batasKanan--;
        }else{
            batasKiri--;
            batasKanan++;
        }

        cout<< "R:" << batasKanan-1 << " ";
        cout<<endl;
    }
}

