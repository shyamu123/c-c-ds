#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a=1;
    while(a<=5)
    {
        b=1;
        while(b<=a)
        {
            cout<<" "<<a;
            b++;
        }
        cout<<"\n";
        a++;
    }
}