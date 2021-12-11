#include <iostream>
#include <string>
using namespace std;


int main()
{
    char _a='z';
    int n=9;
    int tengah= n/2;
    int batasKiri=n/2;
    int batasKanan=n/2;
    

    cout<< " Y ---------->" << endl;
    for(int x=0; x<n; x++){
         cout<< "X:" << x << " ";
        
        for(int y=0; y<n; y++)
        {
            bool target1 = y==6 && x==1;
            bool target2 = y==2 && x==7;
            bool allTarget = target1 || target2;

            if(y==x)
            {
                cout<<_a<<" ";
            }
            else if(allTarget)
            {
                cout<<"x"<<" ";
                //cout<< "_" <<" ";

            }
            else 
            {
                cout<< "_" <<" ";
            }

        }
        if(batasKiri<n-1 && x>=n/2){
            batasKiri++;
            batasKanan--;
        }else{
            batasKiri--;
            batasKanan++;
        }

        //  cout<< "J:" << y << " ";
        cout<<endl;
        _a--;
    }
}

