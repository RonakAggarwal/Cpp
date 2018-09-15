#include<iostream>
using namespace std;
int main()
{
	int t,n,k,arr[1000];
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
	        cin>>arr[i];
		}
		int tmp=arr[k-1];
		arr[k-1]=arr[n-k];
		arr[n-k]=tmp;
		for(int i=0;i<n;i++)
	        cout<<arr[i]<<" ";
	    cout<<"\n";
	}
return 0;
}
