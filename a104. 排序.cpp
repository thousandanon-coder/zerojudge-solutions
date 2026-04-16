/*
題目:a104. 排序
難度:入門
完成日期:2026-02-13 17:06
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,n;
	while(cin>>a){
		int num[a];
		for(auto &x:num){
			cin>>x;
		}
		sort(num,num+a);
		for(auto &x:num){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
