#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
	  long long int n;
	  cin>>n;
	  if(n==0){
	      cout<<"0"<<endl;
	  }
	  else{
	      if(n%9==0){
	          cout<<"9"<<endl;
	      }
	      else{
	          cout<<n%9<<endl;
	      }
	  }
	}
	return 0;
}
