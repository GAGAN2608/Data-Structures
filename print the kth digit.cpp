#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//code
	long long int t,a,b,k,sum,rev,rem,i;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>k;
	    sum=pow(a,b);
	    i=0;
	   // int a[10000];
	    while(sum>0&&i<k)
	    {
	        rem=sum%10;
	        //a[i]=rem;
	        i++;
	        if(i==k)
	        {
	            cout<<rem<<endl;
	            break;
	        }
	        sum=sum/10;
	    }

	}
	return 0;
}
