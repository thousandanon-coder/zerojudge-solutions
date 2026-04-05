/*
題目:a004.  文文的求婚
難度:入門
完成日期:2025-12-11 18:36
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	/*輸入直到檔案結束*/
	while(cin>>a){	
		if(a%4==0&&a%100!=0||a%400==0)	//閏年判斷
			cout<<"閏年"<<endl;
		else
			cout<<"平年"<<endl;
	}
	return 0;
}
