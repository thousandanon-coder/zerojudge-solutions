#include<bits/stdc++.h>

using namespace std;

int main(){
	string a;
	cin>>a;
	char num[7];
	int n;
	for(n=0;n<7;n++)
		num[n]=a[n];
	for(n=0;n<6;n++)
		cout<<abs(num[n]-num[n+1]);
}
