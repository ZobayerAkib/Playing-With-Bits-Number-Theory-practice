#include<bits/stdc++.h>

using namespace std;

void printBinary(int a)
{
    cout<<"The desire output is: " ;
    for(int i=10;i>=0;i--)
    {
        cout<<((a>>i) & 1) ;
    }
    cout<<endl;
}


int main()
{
   int a,i;
 cout<<"Enter a value for checking set or unset: ";
 cin>>a;
 cout<<"Enter a value for which you want to set that bit: ";
 cin>>i;
 //main condition of Unset the nth bit is here
 printBinary((a & (~(1<<i))));
}
//here we use AND operation



