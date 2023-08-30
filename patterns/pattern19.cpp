#include<bits/stdc++.h>
using namespace std;

void print19(int n)
{
    int inIs=0;
    for(int i=0;i<n;i++)
    {
        //star
        for(int j=1;j<=n-i;j++)
        {
            cout << "*";
        }
        //space 
        for(int j=0;j<inIs;j++)
        {
            cout << " ";
        }
        //star
        for(int j=1;j<=n-i;j++)
        {
            cout << "*";
        }
        inIs+=2;
        cout << endl;
    }
    inIs=8;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        //space 
        for(int j=0;j<inIs;j++)
        {
            cout << " ";
        }
        //star
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        inIs-=2;
        cout << endl;
    }
}
int main()
{
    int n;
    cin>>n;
    print19(n);
}