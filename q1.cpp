#include <iostream>
using namespace std;

/*1. Implemente um programa que recebe como entrada um n�mero inteiro positivo
x. O seu programa deve imprimir na tela todos os n�meros de 1 a x ao lado de uma
frase informando se cada um deles � ou n�o um divisor de x (ou seja, se x � ou n�o
m�ltiplo de cada um deles). Observe que 1 ser� sempre um divisor de x e x ser�
sempre um divisor dele mesmo. Uma poss�vel execu��o deste programa � dada a
seguir:
*/

int main (){
    int x, i;
    cout<<"Digite um inteiro positivo: "<<endl;
    cin>>x;

    for (i=1; i<=x; i++){
        cout<<i<<endl;
        if (x%i==0){
            cout<<i<<" eh divisor de "<<x<<endl;
        }
            else{
                cout<<i<<" nao eh divisor de "<<x<<endl;
            }
    }
}
