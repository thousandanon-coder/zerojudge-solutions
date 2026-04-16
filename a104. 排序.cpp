/*
題目:a104. 排序
難度:入門
完成日期:2026-02-13 17:06
*/
#include<bits/stdc++.h> // 引入萬用標頭檔，包含所有標準函式庫 (如 cin, cout, sort)
using namespace std;

int main(){
	int a, n; // 宣告變數 a 用於儲存每組測資的數字個數
	
	// 使用 while 迴圈讀取輸入，直到沒有資料為止 (EOF)
	while(cin >> a){
		int num[a]; // 宣告大小為 a 的陣列 (在現代 C++ 編譯器中支援變數長度陣列 VLA)
		
		// 使用 range-based for loop 配合引用 (&) 依序讀取輸入的每個數字
		for(auto &x : num){
			cin >> x;
		}
		
		// 使用 STL 的 sort 函式進行排序
		// num 是陣列起始位址，num + a 是結束位址的下一個位置
		sort(num, num + a);
		
		// 依序輸出排序後的數字
		for(auto &x : num){
			cout << x << " ";
		}
		
		// 每組測資輸出完後進行換行
		cout << endl;
	}
}
