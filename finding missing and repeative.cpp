#include<iostream>
#include<stdlib.h>
using namespace std;
void find(int a[],int n)
{
    int ar[n+1];

    for(int i=0;i<=n;i++)
        ar[i]=0;
    for(int i=0;i<n;i++)
        ar[a[i]]++;
    for(int i=1;i<=n;i++)
    {
        if(ar[i]>1)
        {
            cout<<i<<" ";
            break;
        }

    }
    for(int i=1;i<=n;i++)
    {
        if(ar[i]==0)
        {
            cout<<i<<endl;
        }
    }
    /*for(int i=0;i<n;i++)
    {
        if(a[abs(a[i])-1]<0)
        {
            cout<<(-a[abs(a[i])-1])<<" ";
        }
        else
        {
         a[abs(a[i])-1]=-a[abs(a[i])-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
            cout<<(i+1)<<endl;
    }*/
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        cin>>a[i];
        find(a,n);
    }
    return 0;
}
