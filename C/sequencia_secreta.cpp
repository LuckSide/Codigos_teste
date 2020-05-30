#include <iostream>
using namespace std;
int vezes,quantidade,ultimo;
int codigo[500];

int main (){

    cin >> vezes;

    for (int i = 0; i < vezes; i++)
    {
        cin >> codigo[i];
    } //recebendo o codigo dentro do vetor
    
    for (int i = 0; i < vezes; i++)
    {
        if (codigo[i] == ultimo)
        {
            ultimo = codigo[i];
        }else
        {
            ultimo = codigo[i];
            quantidade++;
        }
        
        
        
    }
    cout << quantidade;

}