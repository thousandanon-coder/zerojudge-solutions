/*
題目: a024. 最大公因數(GCD)
難度: 入門
完成日期: 2026-01-27 10:30
*/

#include <bits/stdc++.h> // 引入萬用標頭檔，包含所有標準 C++ 函式庫
using namespace std;    // 使用標準命名空間，省去寫 std:: 的麻煩

int main() {
	int a, b;           // 宣告兩個整數變數 a 與 b
	
	// 從標準輸入讀取兩個整數
	cin >> a >> b;      
	
	// 使用內建函式 __gcd(a, b) 計算最大公因數並輸出
	// 註：__gcd 位於 <algorithm> 或 <numeric> 中，能快速處理輾轉相除法
	cout << __gcd(a, b); 
	
	return 0;           // 程式正常結束
}
