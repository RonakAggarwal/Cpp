#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int i=1;
		while(i*(i+1)<=2*n){
			i++;
		}
		cout<<i-1<<endl;
		//cout<<floor(sqrt(2*n))<<"\n";
	}
return 0;
}
