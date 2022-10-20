#include <iostream>

using namespace std;

int main()
{
    int a,c=0;
    cin>>a;
    for(int i=2 ; i<=a/2 ; i++)
    {
        if(a%i==0)
        c+=1;
    }
    if(c==0)
    cout<<"number is prime";
    
    else
    cout<<"number is not prime";
    

    return 0;
}
