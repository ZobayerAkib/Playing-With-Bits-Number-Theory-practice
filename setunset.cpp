#include<bits/stdc++.h>

using namespace std;

//decimal to binary
int printBinary(int number)
{
    for(int i=10;i>=0;i--)
    {
        cout<<((number>>i)&1);
    }
    cout<<endl;
}
//i th number of bit is set or not(checking)
void setUnset(int a,int i)
{
    printBinary(a);

    if((a & (1<<i))!=0)
    {
        cout<<i<<" th bit is SET"<<endl;
    }

        else
            cout<<i <<" th bit is UNSET"<<endl;
}

int main()
{
 int a,i;
 cout<<"Enter a value for checking set or unset: ";
 cin>>a;
 cout<<"Enter a value for which you want to check that bit is set or unset: ";
 cin>>i;
 setUnset(a,i);
 //i th bit set formula:
 printBinary(a|(1<<i));
 //invert using (~)
 printBinary(~a);
 //i th bit unset
 printBinary((a&(~(1<<i))));

}
