#include<iostream>
using namespace std;
int fact(int i){
	if(i==0 || i==1)
	   return 1;
	else
	   return i*fact(i-1);
}
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		long long arr[n+1];
		arr[0]=0;
		arr[1]=1;
		arr[2]=2;
		for(int j=3;j<=n;j++){
			arr[j]=arr[j-1]+arr[j-2];
		}
		cout<<arr[n]<<"\n";
	}
return 0;
}
