#include <iostream>
using namespace std;

bool func(long long int *arr,long long int mid,long long int n,long long int m){
    long long int currstudents=1;
    long long int sum=0;
    long long int i;
    for(i=0;i<n;i++){
        if(sum+arr[i]>mid){
            sum=arr[i];
            currstudents++;
            if(currstudents>m){
                return false;
            }
        }
        else{
            sum+=arr[i];
        }

    }
    return true;
}

int allocatebooks(long long int a[],long long int low,long long int high,long long int stu,long long int n)
{
    if(stu>n)
    {
        return -1;
    }
    long long int mid,result;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(func(a,mid,n,stu))
        {
            result=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }

    }
    return result;
}

int main() {
	//code
	long long int t,n,m,i,sum;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long long int a[n];
	    long long int max=-999999999999;
	    sum=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]>max)
	        {
	            max=a[i];
	        }
	        sum+=a[i];
	    }
	    cin>>m;
	    cout<<allocatebooks(a,max,sum,m,n)<<endl;

	}
	return 0;
}
