#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,j=0,a,b,c;
	cin>>n;
	for(j=0;j<n;j++){
		cin>>a>>b>>c;
		if(a==1)
			cout<<b+c<<endl;
		if(a==2)
			cout<<b-c<<endl;
		if(a==3)
			cout<<b*c<<endl;
		if(a==4)
			cout<<b/c<<endl;	
	}
		
}
