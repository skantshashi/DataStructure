#include<bits/stdc++.h>
using namespace std;
void Bubblesort(int A[],int n);
int main()
{
    int n;
    // int A[n] can't be declare here
    cout<<"Enter the size of array :";
    cin>>n;
    int A[n];
    cout<<"Enter the element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    Bubblesort(A,n);
    for(auto x:A)
    {
        cout<<x<<" ";
    }
}
void swap(int &x,int &y)
{
  int temp;
  temp=x;
  x=y;
  y=temp;
}
void Bubblesort(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]);
                flag=1;
            }
        }
        if(flag==0) break;
    }
}