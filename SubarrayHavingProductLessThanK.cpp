//Given an array of positive numbers, the task is to find the number of possible contiguous subarrays having product less than a given number K.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,*arr,count,mul;
	cin>>t;
	while(t--){
		count=0;
		cin>>n>>k;
		arr=(int*)malloc(n*sizeof(int));
		for(int i=0;i<n;i++)
		   cin>>arr[i];
		for(int i=0;i<n;i++){
			if(arr[i]<k)
			   count++;
			mul=arr[i];
			for(int j=i+1;j<n;j++){
				mul*=arr[j];
				if(mul<k)
				   count++;
				else
				   break;
			}
		}
		cout<<count<<"\n";
		free(arr);
	}
return 0;
}
