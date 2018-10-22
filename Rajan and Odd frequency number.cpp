/*Given an array of numbers of size (2*n+1).Raja is unable to find the number which is present odd number of times.It is guaranteed that only one such number exists.Can you help Raja in finding the number which is present odd number of times?

Input
First line contains value of n.
Second line contains (2*n+1) array elements.
Output
Print the required number.
Constraints
1≤ n ≤
1≤ a[i] ≤

SAMPLE INPUT
2
1 2 3 2 1
SAMPLE OUTPUT
3*/
#include<iostream>
#include<bits/stdc++.h>


void rajat();
using namespace std;




int main()
{
    rajat();
    return 0;
}

void rajat()
{
    int n;
    cin>>n;
    int arr[2*n+1]; int ans=0;
    for (int i=0; i<2*n+1;i++)
    {
        cin>>arr[i];
        ans=ans^arr[i];
    }
    cout<<ans;

}
