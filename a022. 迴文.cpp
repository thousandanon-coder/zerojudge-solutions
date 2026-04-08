 /*
題目: a022. 迴文
難度: 初級
完成日期: 2026-01-26 23:08
*/
#include<bits/stdc++.h> // 引入標準函式庫
using namespace std;

int main(){
	int n;           // 宣告迴圈變數
	string a, k;     // a 用於儲存輸入字串，k 用於標記是否為「非迴文」
	cin >> a;        // 讀取輸入的字串
	
	// 迴圈跑字串長度的一半即可，因為是對稱比對
	for(n = 0; n < a.length() / 2; n++){
		// 比對第 n 個字元與倒數第 n 個字元是否相同
		// a[0+n] 是左側起算，a[a.length()-1-n] 是右側起算
		if(a[0 + n] != a[a.length() - 1 - n]){
			k = "no";   // 若發現任一組字元不對稱，將標記 k 設為 "no"
			break;      // 已確定不是迴文，直接跳出迴圈
		}
	}
	
	// 根據標記變數 k 的結果輸出答案
	if(k == "no")
		cout << "no";   // 如果中間有被標記為 no，輸出 no
	if(k != "no")
		cout << "yes";  // 如果迴圈正常結束且 k 保持為空，輸出 yes 
	
	return 0;           // 程式正常結束
}
