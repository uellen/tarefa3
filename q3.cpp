#include <iostream>
using namespace std;

int main()
{
     int x, i, n=0;
    cout<<"Digite um inteiro positivo: "<<endl;
    cin>>x;

    for (i=1; i<=x; i++){
         if (x%i==0){
           n+=1;
        }
            else{
                n=n;
            }
    }
    if (n/2==1){
        cout<<x<<" eh um numero primo"<<endl;
    }
        else{
            cout<<x<<" nao eh um numero primo"<<endl;
        }
}
