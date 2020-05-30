#include <iostream>
using namespace std;

int n;
long long int lado;

int main()
{
cin >> n;

while (n-- > 0)
{
    lado += lado-1;
}


    cout << lado *lado;


return 0;
}