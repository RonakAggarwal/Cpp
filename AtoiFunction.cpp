// Make Atoi function
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int Atoi(string str){
	int tmp=0,index=0,ch=0;
	for(int i=str.size()-1;i>=0;i--){
		if(str[i]<'0' || str[i]>'9')
		   if(str[i]=='-')
		      ch=1;
		   else
		      return -1;
		else{
			if(ch==0)
			   tmp+=(str[i]-48)*pow(10,index++);
		}
	}
if(ch==0)
   return tmp;
else
   return -tmp;
}
int main()
{
	int t;
	string str;
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,str);
		cout<<Atoi(str)<<"\n";
	}
return 0;
}
