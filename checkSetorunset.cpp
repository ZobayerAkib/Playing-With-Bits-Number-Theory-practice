#include<bits/stdc++.h>

using namespace std;

void checkSetorUnset(int a,int i)
{
    if((a&(1<<i))!=0)
    {
        cout<<i<<"th bit is set"<<endl;
    }
    else cout<<i<<"th bit is unset"<<endl;
}


int main()
{
   int a,i;
 cout<<"Enter a value for checking set or unset: ";
 cin>>a;
 cout<<"Enter a value for which you want to check that bit is set or unset: ";
 cin>>i;
 checkSetorUnset(a,i);
}

