#include <iostream>
using namespace std;

/*void min(int a[],int b,int k)
{
    return ;
}*/

int main() {
	//code
	int t,n,k,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cin>>k;
	    int min=0;
	    int j;
	    for(i=0;i<n;i++)
	    {
	        min=0;
            for(j=i;j<i+k;j++)
	        {
	            if(a[j]<0)
	            {
	                min=a[j];
	                break;
	            }
        	}
        	cout<<min<<" ";
	        if((i+k)>=n)
	        {
	            break;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
