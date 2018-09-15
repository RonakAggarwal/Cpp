//this program finds the palindrome number whose distance from given number is minimum
#include<iostream>
#include<math.h>
using namespace std;
bool chkPalindrome(int n){
	float k=0;
	int N=n;
	while(N){
		N/=10;
		k++;
	}
	if(k==1)
	  return true;
	N=n;
		while(k && N){
		   if(N%10!=N/pow(10.0,--k))
		      return false;
		   N=N%int(pow(double(10),double(k)));
		   N=N%10;
		}
	   return true;
}
int main()
{
	int t,n,i,temp1,temp2;
	cin>>t;
	while(t--){
	   cin>>n;
	for(int i=n,j=n;i>=0;i--,j++){
		if(chkPalindrome(i) || chkPalindrome(j)){
			if(chkPalindrome(i))
			   cout<<i<<"\n";
			else
			   cout<<j<<"\n";
			break;
		}
	}
}
return 0;
}
