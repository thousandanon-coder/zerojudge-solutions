/*
題目:a009. 解碼器
難度:初級
完成日期:2026-02-06 18:03
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	string a;
	int n;
	cin>>a;
	char num[a.length()];//亂碼
	for(n=0;n<a.length();n++)
		num[n]=a[n];
	for(n=0;n<a.length();n++)//根據Ascii 表轉換
		cout<<char(num[n]-7);
	return 0;
	
}
