#include<iostream>
#include<stdlib.h>
using namespace std;
int *arr;
void sort(int size){
	for(int i=0;i<size;i++){
		int j=i-1;
		int key=arr[i];
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main()
{
	 int t,n,index=0;
	 cin>>t;
	 arr=(int*)malloc(t*sizeof(int));
	 while(t--){
	 	cin>>arr[index++];
	 	sort(index);
	 	if(index%2==1)
	 	   cout<<arr[index/2];
	 	else
	 	   cout<<(arr[(index-1)/2]+arr[index/2])/2;
	 	cout<<"\n";
	 }
return 0;
}
