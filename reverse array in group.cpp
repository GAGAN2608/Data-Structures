#include <iostream>
using namespace std;

int main() {
	//code
	int t,n,k,i,m,j;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i=i+k)
	    {
	        m=n-i;
	        if(m<k)
	        {
	            k=m;
	        }
	        for(j=0;j<(k/2);j++)
	        {
	            int t;
	            t=a[i+j];
	            a[i+j]=a[i+k-1-j];
	            a[i+k-1-j]=t;
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}

	return 0;
}
