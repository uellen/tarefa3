#include <iostream>
using namespace std;

/*1. Implemente um programa que recebe como entrada um número inteiro positivo
x. O seu programa deve imprimir na tela todos os números de 1 a x ao lado de uma
frase informando se cada um deles é ou não um divisor de x (ou seja, se x é ou não
múltiplo de cada um deles). Observe que 1 será sempre um divisor de x e x será
sempre um divisor dele mesmo. Uma possível execução deste programa é dada a
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
