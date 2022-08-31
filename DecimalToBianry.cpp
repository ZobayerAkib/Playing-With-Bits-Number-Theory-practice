#include<bits/stdc++.h>

using namespace std;

void printBinary()
{
    int a;
    cout<<"enter decimal value: " ;
    cin>>a;
    cout<<"The binary value of "<<a <<"is : ";
    for(int i=10;i>=0;i--)
    {
        cout<<((a>>i)&1);
    }
    cout<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)printBinary();
}
