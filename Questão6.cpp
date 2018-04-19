#include <iostream>
using namespace std;

/*– Implemente um programa que recebe vários números inteiros e mostre a soma
de todos os números que são múltiplos de 3 e 5 ao mesmo tempo. O programa
encerra quando um número negativo é digitado.
*/
int main()
{
    int x, i=0, n=0;
    while (x>=0)
    {
        cout<<"Digite um numero: "<<endl;
        cin>>x;
        if(x%3==0 && x%5==0)
        {
            n+=x;
        }
        else
        {
            n=n;
        }


    }
    cout<<n<<endl;
}
