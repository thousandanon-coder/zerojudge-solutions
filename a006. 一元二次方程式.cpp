/*
題目:a006. 一元二次方程式
難度:初級
完成日期:2025-12-11 10:23
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int a,b,c;
	cin>>a>>b>>c;
	//b^2-4ac
	int ans=sqrt((b*b)-(4*a*c));
	//無實根判斷
	if(ans<0){
		cout<<"No real root"<<endl;
		return 0;
	}
	int ans1=(-b+ans)/(2*a);
	int ans2=(-b-ans)/(2*a);
	//根據題目要求寫判斷式
	if(ans1>ans2){
		cout<<"Two different roots x1="<<ans1<<" , x2="<<ans2<<endl;
	}
	else if(ans1<ans2){
		cout<<"Two different roots x1="<<ans2<<" , x2="<<ans1<<endl;
	}
	else if(ans1==ans2){
		cout<<"Two same roots x="<<ans1<<endl;
	}
}
