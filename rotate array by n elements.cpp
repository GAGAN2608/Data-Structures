#include <iostream>
using namespace std;

int main() {
	//code
	int i,t,n,d,j;
	cin>>t;
	while(t--)
	{
	    cin>>n>>d;
	    int array[n],arr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>array[i];
	        arr[i]=array[i];
	    }
	    j=d%n;
	   // cout<<j;
	    if(j!=0)
	    {
	        for(i=0;i<n-j;i++)
	        {
	            array[i]=array[i+j];
	        }
	        for(int k=0;k<j;k++,i++)
	        {
	            array[i]=arr[k];
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        cout<<array[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
