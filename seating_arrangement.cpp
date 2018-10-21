/*Seating Arrangement
Attempted by: 19552/Accuracy: 52%/Maximum Score: 10/
 659 Votes
Tag(s): Very-Easy
PROBLEM
EDITORIAL
MY SUBMISSIONS
ANALYTICS
Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like


So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows :

Window Seat : WS
Middle Seat : MS
Aisle Seat : AS

You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

INPUT
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

CONSTRAINTS
1<=T<=105
1<=N<=108
SAMPLE INPUT
2
18
40
SAMPLE OUTPUT
19 WS
45 AS*/

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
