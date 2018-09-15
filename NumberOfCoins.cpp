//Given a value V, if we want to make change for V cents,
//and we have infinite supply of each of C = { C1, C2, .. , Cm} valued coins,
//what is the minimum number of coins to make the change?
#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int C[100];
/*void sort(int size){
	int j,key;
	for(int i=1;i<size;i++){
		key=C[i];
		j=i-1;
		while(j>=0 && C[j]<key){
			C[j+1]=C[j];
			j--;
		}
		C[j+1]=key;
	}
}
int findCount(int l,int h,int v){
	int count=0,tmpCount=0;
		int tmpV=v;
		while(tmpV>0 && l!=h){
			tmpCount=tmpV/C[l];
			count+=tmpCount;
			tmpV-=(tmpCount*C[l++]);
		}
		if(tmpV!=0)
		   count=1000;
return count;
}*/
int ans(int n,int v){
	int table[v+1];
	table[0]=0;
	for(int i=0;i<n;i++)
	   table[i]=INT_MAX;
	   for(int i=0;i<v;i++){
	   	for(int j=0;j<n;j++){
	   		if(C[i]<=i){
	   			int sub_res = table[i-C[j]]; 
                if (sub_res != INT_MAX && sub_res + 1 < table[i]) 
                  table[i] = sub_res + 1; 
	   		}
	   	}
	   }
	return table[v];
}
int main()
{
	int t,v,n,count,min;
	cin>>t;
	while(t--){
		cin>>v>>n;
		for(int i=0;i<n;i++)
		   cin>>C[i];
		//sort(n);
		//min=1000;
		//for(int i=0;i<n;i++){
//			int c=findCount(i,n,v);
//			if(min>c && c!=0)
//			   min=c;
//		}
        int N=ans(n,v);
		if(N==INT_MAX) cout<<-1<<"\n";
        else cout<<N<<"\n";
	}
return 0;
}

