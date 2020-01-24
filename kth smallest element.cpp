#include <iostream>
using namespace std;

void mergesort(int arr[],int l,int r,int mid)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1];
    int R[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[i+l];
    }
    for(int i=0;i<n2;i++)
    {
        R[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;

    }
}
void divide(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=l+(r-l)/2;
        divide(arr,l,mid);
        divide(arr,mid+1,r);
        mergesort(arr,l,r,mid);
    }
}


int main() {
	//code
	int t,n,k,i,j,min;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int array[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>array[i];
	    }
	    cin>>k;
	    divide(array,0,n-1);
	    cout<<array[k-1]<<endl;

	return 0;
}
