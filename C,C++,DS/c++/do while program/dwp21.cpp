#include<iostream>
using namespace std;
int main()
{
    int a,b,c=64;
    a=1;
    do
    {
        c=c+a;
        b=1;
        do
        {
            cout<<" "<<char(c--);
            b++;
        }
        while(b<=a);
        cout<<"\n";
        a++;
    }
    while(a<=5);
}