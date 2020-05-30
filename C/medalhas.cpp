#include <iostream>
using namespace std;

int main(){

    int n1,n2,n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;

    if(n1 < n2 and n1 <n3){
        if (n2<n3){
            cout<<'1'<<endl;
            cout<<'2'<<endl;
            cout<<'3'<<endl;
        }else{
            cout<<'1'<<endl;
            cout<<'3'<<endl;
            cout<<'2'<<endl;

        }
    }else if (n2 < n1 and n2 < n3){ 
            if (n1<n3)
            {
            cout<<'2'<<endl;
            cout<<'1'<<endl;
            cout<<'3'<<endl;
            }else{
            cout<<'2'<<endl;
            cout<<'3'<<endl;
            cout<<'1'<<endl;
            }
            
            

    }else if (n3 < n1 and n3 < n2)
    {
        if (n1<n2)
        {
            cout<<'3'<<endl;
            cout<<'1'<<endl;
            cout<<'2'<<endl;
        }else
        {
            cout<<'3'<<endl;
            cout<<'2'<<endl;
            cout<<'1'<<endl;
        }
        
        
    }
    
    
    
    
return 0;

}