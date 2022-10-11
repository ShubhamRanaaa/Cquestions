#include<bits/stdc++.h>
 
using namespace std;
 
 
int main(){
	long long t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		string s;
		cin>>s;
		string t="";
		for(int i=n-1;i>=0;i--)
			t=t+s[i];
		if(k==0) cout<<"1"<<endl;
		else if(s==t) cout<<"1"<<endl;
		else cout<<"2"<<endl;
	}
}
