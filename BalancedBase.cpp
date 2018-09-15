//https://www.hackerrank.com/contests/projecteuler/challenges/euler217
#include<iostream>
#include<math.h>
using namespace std;
bool Convert10toB(long B,long num){
	long tmpArr[1000],index=0,Bnum=0;
	while(num){
		long tmp=num%B;
		tmpArr[index++]=tmp;
		num/=B;
	}
	long sum1=0,sum2=0;
	for(long i=0,j=index-1;i<=j;i++,j--){
		sum1+=tmpArr[i];
		sum2+=tmpArr[j];
	}
if(sum1==sum2)
   return true;
else
   return false;
}
long ConvertBto10(long *d,long B,long L){
	long num=0,index=0;
	for(long i=L-1;i>=0;i--){
		num+=d[i]*pow(B,index++);
	}
	return num;
}
int main()
{
	long B,L,d[1000],count=0,sum=0;
	cin>>B>>L;
	for(long i=0;i<L;i++)
	   cin>>d[i];
	long NoInBase10=ConvertBto10(d,B,L);
	for(long i=1;i<=NoInBase10;i++){
		if(Convert10toB(B,i)){
			count++;
			sum+=i;
		}
	}
	cout<<count<<" "<<sum;
return 0;
}
