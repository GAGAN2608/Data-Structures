#include <bits/stdc++.h>
using namespace std;

bool search(int a[],int b,int n)
{
    int low=0;
    int high=n;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==b)
        {
            return true;
        }
        else
        {
            if(a[mid]>b)
            {
                high=mid;
            }
            else
                low=mid+1;

        }
    }
    return false;
}

void ans(int a[],int n)
{
    for(int i=0;i<=n;i++)
    {
        int b=n-a[i];
        if(search(a,b,n))
        {
            cout<<a[i]<<b<<endl;
        }

    }
    cout<<"-1"<<endl;
}

void findprime(int *a,int n)
{
    int nNew = (n-2)/2;
    bool marked[nNew + 1];
    memset(marked, false, sizeof(marked));
    for (int i=1; i<=nNew; i++)
        for (int j=i; (i + j + 2*i*j) <= nNew; j++)
            marked[i + j + 2*i*j] = true;
        if (n > 2)
        a[0]=2;
    for (int i=1; i<=nNew; i++)
        if (marked[i] == false)
            a[i]=(2*i)+1;
}

int main() {
	//code
	int t,n,i,j;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[(n-2)/2];
	    findprime(a,n);
	    ans(a,n);
	}
	return 0;
}
