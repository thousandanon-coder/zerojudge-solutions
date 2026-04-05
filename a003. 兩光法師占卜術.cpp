/*
題目:a003. 兩光法師占卜術
難度:入門
完成日期:2025-12-13 22:01
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int M,D,S;
	cin>>M>>D;//輸入日,月
	S=(M*2+D)%3;//根據題目進行推算
	if(S==0)				//判斷答案輸出
		cout<<"普通"<<endl;	
	if(S==1)
		cout<<"吉"<<endl;	
	if(S==2)
		cout<<"大吉"<<endl;
	return 0;
}
