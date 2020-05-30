#include <iostream>
using namespace std;

int b,t,a1,a2,a3,a4,metade1,metade2;

int main(){
cin >> b;
cin >> t;

if (b<t) //vejo qual dos lados e maior pra usar ele no calculo de area
{
    a1 = b*70;
    a2 = (t - b)/2;
}else{ 
    if (t<b){   
    a1 = t*70;
    a2 = (b - t)/2; //calculo a area do retangulo e depois do quadrado
}else
{
    a2 = b*70; //se eles forem iguais eu calculo a area somente do retangulo
}

}

if (160 - b < 160 - t) //mesmo calculo anterior so que para o outro lado
{
    a3 = (160-b)*70;
    a4 = ((160-t) - (160-b))/2;
}else {if (160-t < 160-b)
{
    a3 = (160-t)*70;
    a4 = ((160-b) - (160-t))/2;
}else
{
    a3 = (160 - t) * 70;
}

}

metade1 = a1+a2;
metade2 = a3+a4; // coloco nas variaveis a área

if (metade1>metade2) //vejo qual e maior  e imprimo a saida
{
    cout << 1;

}else
{
    if (metade2>metade1)
    {
        cout << 2;
    }else
    {
        cout << 0;
    }
    
    
}




}