//A sorted array A[ ] with distinct elements is rotated at some unknown point, the task is to find the minimum element in it.
#include<iostream>
using namespace std;
int main()
{
	int t,n,A[500],pos;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)
		   cin>>A[i];
		if(A[0]>A[n-1]){
			pos=0;
			while(pos<n-1){
				if(A[pos+1]<A[pos]){
					pos++;
					break;
				}
				else
				   pos++;
			}
		}
		if(A[0]<A[n-1]){
			pos=n-1;
			while(pos-1>=0){
				if(A[pos-1]>A[pos]){
					pos--;
					break;
				}
				else
				   pos--;
			}
		}
		cout<<A[pos];
	}
return 0;
}
