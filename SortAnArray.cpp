//This program sorts the numbers (0,1,2) in the given array
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int t,n;
	int* arr;
	cin>>t;
	while(t--){
		cin>>n;
		arr=(int *)malloc(n*sizeof(int));
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
			if(arr[i]==0)
			   cout<<arr[i]<<" ";
		for(int i=0;i<n;i++)
			if(arr[i]==1)
			   cout<<arr[i]<<" ";
		for(int i=0;i<n;i++)
			if(arr[i]==2)
			   cout<<arr[i]<<" ";
		   /*for(int j=0;j<n-i-1;j++){
		   	  if(arr[j]>arr[j+1]){
		   	  	 int temp=arr[j];
		   	  	 arr[j]=arr[j+1];
		   	  	 arr[j+1]=temp;
		   	  }
		   }
		for(int i=0;i<n;i++)
		   cout<<arr[i]<<" ";*/
		cout<<"\n";
	}
return 0;
}
