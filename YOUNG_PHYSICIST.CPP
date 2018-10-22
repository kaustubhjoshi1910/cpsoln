#include<iostream>
#include<bits/stdc++.h>

void eq();
using namespace std;

int main()
{
    eq();
    return 0;
}

void eq()
{
   int n;
   int x,y,z;
   x=y=z=0;
   cin>>n;
   int arr[n][3];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<3;j++)
       {cin>>arr[i][j];
        if(j==0)
        {
            x+=arr[i][j];
        }
        else if(j==1)
        {
            y+=arr[i][j];
        }
        else if(j==2)
        {
            z+=arr[i][j];
        }
       }
   }
   if((x==0)&&(y==0)&&(z==0))
   {
       cout<<"YES";

   }
   else
    cout<<"NO";
}
