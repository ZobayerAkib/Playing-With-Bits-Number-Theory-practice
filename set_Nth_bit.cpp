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
 //main condition of set the nth bit is here
 printBinary((a | (1<<i)));
}

/*suppose a=6 and we want to set 4th bit(i=3).
so we use this logic (a or(|) (1 left shift(<<) i(nth bit))
Solution(Mathematically) : a=6 . Binary of a=00000110 and we want to set the i=3 means 4th bit of binary 6 that is now 0.
now we use left shift logic (1<<i(3)) which is equal to 1000.
if we do OR(|) operation between binary of 6 and 00001000, we get our ultimate output that is 00001110 where i(3)th bit is set(00001110)*/


