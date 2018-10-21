#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

void seat ();

int main()
{

    int t;
    cin>>t;
    while(t--)
    seat();
    return 0;
}

void seat()
{
    int number;
    cin>>number;
    int check=number%12;
    switch(check)
    {
    case 0:
        cout<<number-11<<" WS"<<endl;
        break;

    case 1:
        cout<<number+11<<" WS"<<endl;
        break;

    case 2:
        cout<<number+9<<" MS"<<endl;
        break;

    case 3:
        cout<<number+7<<" AS"<<endl;
        break;

    case 4:
        cout<<number+5<<" AS"<<endl;
        break;

    case 5:
        cout<<number+3<<" MS"<<endl;
        break;

    case 6:
        cout<<number+1<<" WS"<<endl;
        break;

    case 7:
        cout<<number-1<<" WS"<<endl;
        break;

    case 8:
        cout<<number-3<<" MS"<<endl;
        break;

    case 9:
        cout<<number-5<<" AS"<<endl;
        break;

    case 10:
        cout<<number-7<<" AS"<<endl;
        break;

    case 11:
        cout<<number-9<<" MS"<<endl;
        break;


    }


}
