#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void matrix();

int main()
{
   matrix();
   return 0;
}

void matrix()
{

    int arr[5][5]; int r=0; int c=0; int count=0; int temp;
    for(int i=0; i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
               {
                r=i;c=j;
               }
        }
    }
    while(r!=2)
    {if(r==0)
    {
        for(int j=0;j<5;j++)
        {temp=arr[1][j];
        arr[1][j]=arr[0][j];
        arr[0][j]=temp;}
        count++; r=1;
    }
    else if(r==1)
    {
        for(int j=0;j<5;j++)
        {temp=arr[2][j];
        arr[2][j]=arr[1][j];
        arr[1][j]=temp;}
        count++; r=2;

    }
    else if(r==3)
    {
        for(int j=0;j<5;j++)
        {temp=arr[3][j];
        arr[3][j]=arr[2][j];
        arr[2][j]=temp;}
        count++;r=2;
    }
    else if(r==4)
    {
        for(int j=0;j<5;j++)
        {temp=arr[4][j];
        arr[4][j]=arr[3][j];
        arr[3][j]=temp;}
        count++;r=3;
    }
    }

    while(c!=2)
    {if(c==0)
    {
        for(int i=0;i<5;i++)
        {temp=arr[i][1];
        arr[i][1]=arr[i][0];
        arr[i][0]=temp;}

        count++; c=1;
    }
    else if(c==1)
    {
        for(int i=0;i<5;i++)
        {temp=arr[i][2];
        arr[i][2]=arr[i][1];
        arr[i][1]=temp;}

        count++; c=2;

    }
    else if(c==3)
    {
        for(int i=0;i<5;i++)
        {temp=arr[i][2];
        arr[i][2]=arr[i][3];
        arr[i][3]=temp;}
        count++;c=2;
    }
    else if(c==4)
    {
        for(int i=0;i<5;i++)
        {temp=arr[i][3];
        arr[i][3]=arr[i][4];
        arr[i][4]=temp;}
        count++;c=3;
    }
    }
cout<<count;
}
