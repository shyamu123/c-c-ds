#include <iostream>
using namespace std;
class bank
{
    int balance = 0, withdrow, deposit, shyam, o = 0, x = 0;

public:
    static int count, count1;
    bank()
    {
        balance = 1000;
    }
    ~bank()
    {
        shyam = balance;
        balance -= balance;
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\nyour account for withdrow balance:" << shyam;
        cout << "\nExit for closing balance:" << balance;
        cout << "\nwithdrow of total use:" << bank::count;
        cout << "\ntotal of with:" << o;
        cout << "\ndeposit  of total use:" << bank::count1;
        cout << "\ntotal of depo:" << x;
    }
    void with()
    {
        cout << "\nEnter the withdrow :";
        cin >> withdrow;
        if (withdrow > balance)
        {
            cout << "you have not balance";
        }
        cout << "\nyoyr withdrow :" << withdrow;
        balance -= withdrow;
        count++;
        o += withdrow;
    }
    void depos()
    {
        cout << "\nEnter the deposit :";
        cin >> deposit;
        if (deposit > 0)
        {
            cout << "\nYour deposit :" << deposit;
            balance += deposit;
            count1++;
            x += deposit;
        }
    }
    void showbalance()
    {
        cout << "\nYou have total balance :" << balance;
    }
    void ex()
    {
        cout << "Exit";
    }
};
class person : public bank
{
    int a;
    char b[20];

public:
    void shyam()
    {
        cout << "Enter the name :";
        cin >> b;
        cout << "Enter the phon number :";
        cin >> a;
    }
};
class person2 : public bank
{
    int a;
    char b[20];

public:
    void shyam1()
    {
        cout << "Enter the name person 2 :";
        cin >> b;
        cout << "Enter the phon number person 2:";
        cin >> a;
    }
};
int bank::count, bank::count1;
int main()
{
    int ch, a, b, h, balance, x;
    person shyamu;
    person2 shyamu2;
    shyamu.shyam();
    shyamu2.shyam1();
    cout << "\n1.bank:1";
    cout << "\n2.bank:2";
    cout << "\nEnter the user value for bank :";
    cin >> h;
    while (ch > 0)
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\nWellcome";
        cout << "\n\n1.withdrow";
        cout << "\n2.deposit";
        cout << "\n3.AC switch";
        cout << "\n9.showbalance";
        cout << "\n0.Exit";
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\nEnter your choise:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            if (h == 1)
                shyamu.with();
            else
                shyamu2.with();
            break;
        case 2:
            if (h == 1)
                shyamu.depos();
            else
                shyamu2.depos();
            break;
        case 3:
            if (h == 1)
                h = 2;
            else
                h = 1;
            break;
        case 9:
            if (h == 1)
                shyamu.showbalance();
            else
                shyamu2.showbalance();
            break;
        case 0:
            shyamu.ex();
            break;
        default:
            cout << "wrong choice...";
            break;
        }
    }
}