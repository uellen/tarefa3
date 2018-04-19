#include <iostream>
using namespace std;
/*Implemente um programa que recebe vários números inteiros e calcula a
porcentagem dos números ímpares maiores do que 15 dentre todos os números. O
programa deve encerrar quando for informado o número zero. */
int main()
{
    int x, i=0, n=0;
    float prob;
    while(x!=0)
    {
        i++;
        cout<<"Digite um numero: "<<endl;
        cin>>x;
            if(x>15 && x%2==1)
            {
                n=n+1;
            }
            else
            {
                n=n;
            }
    }
    cout<<"-------------------------------RESULTADOS-------------------------------------"<<endl;
    cout<<"1. Numero de recorrencias do numeros impares maiores que 15: "<<n<<" unidades"<<endl;
    cout<<"2. Campo amostral "<<i<<" unidades"<<endl;
    prob =(((float) n/i)*100);
    cout<<"3. A probabilidade de um numero impar e maior que 15 eh de:"<<prob<<"%"<<endl;
}
