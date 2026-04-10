/*
題目: a038. 數字翻轉
難度: 初中級
完成日期: 2026-01-26 23:50
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	// c 用來標記是否還處於「前導零」狀態
	// true 表示目前遇到的 0 都應該被忽略（因為是翻轉後的開頭）
	int c = true; 
	
	cin >> a;
	
	// 直接將字串首尾翻轉，例如 "1230" 變成 "0321"
	reverse(a.begin(), a.end());
	
	// 遍歷翻轉後的字串
	for(auto &x : a){
		// 如果當前字元是 '0' 且還在前導零狀態，則跳過不輸出
		if(x == '0' && c == true){
			continue;
		}
		else {
			// 一旦遇到第一個非 '0' 的數字，就將標記設為 false
			// 之後的所有字元（包含中間的 0）都必須正常輸出
			c = false;
		}
		cout << x;
	}
	
	// 特殊情況處理：如果輸入是 "0" 或 "000"，上述迴圈不會輸出任何東西
	// 此時 c 依然為 true，必須補印一個 '0'
	if(c == true){
		cout << '0';
	}
	
	return 0;
}
