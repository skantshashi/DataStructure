#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    //uper half
    for(int i=1;i<=n;i++)
    {
        //1st part star
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        //2nd part space
        int space=2 * (n-i);
        for(int j=1;j<=space;j++)
        {
            cout<<"  ";
        }
         //3rd part star
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        //1st part star
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        //2nd part space
        int space = 2 * (n-i);
        for(int j=1;j<=space;j++)
        {
            cout<<"  ";
        }
         //3rd part star
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}