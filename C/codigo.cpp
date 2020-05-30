#include <iostream>
using namespace std;

int repe,vezes,comparar;
int codigo[100000];

int main(void){

    cin >> vezes;

    for (int i = 0; i < vezes; i++)
    {
        cin >> codigo[i];
    }

    for (int i = 0; i < vezes-2; i++)
    {
       if (codigo[i]==1 and codigo[i+1]==0 and codigo[i+2]==0)
       {
           repe++;
       }
       
    }

    cout << repe;
    

}