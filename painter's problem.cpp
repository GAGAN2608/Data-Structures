bool func(int *arr,int mid,int n,int k){
    int currpainter=1;
    int sum=0;
    int i;
    for(i=0;i<n;i++){
        if(sum+arr[i]>mid){
            sum=arr[i];
            currpainter++;
            if(currpainter>k){
                return false;
            }
        }
        else{
            sum+=arr[i];
        }

    }
    return true;
}

int timereq(int a[],int low,int high,int k,int n)
{
    int mid,result;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(func(a,mid,n,k))
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
	int t,n,k,i,sum;
	cin>>t;
	while(t--)
	{
	    cin>>k>>n;
	    int a[n];
	    int max=-9999999;
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
	    cout<<timereq(a,max,sum,k,n)<<endl;

	}
	return 0;
}

