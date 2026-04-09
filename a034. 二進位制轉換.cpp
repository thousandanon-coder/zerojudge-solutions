/*
題目: a034. 二進位制轉換
難度: 初級
完成日期: 2026-02-02 23:25
說明: 此程式將輸入的十進位整數轉換為二進位。
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, n;
	// two 用來儲存連除過程中的餘數 (順序是反的)
	// num 用來儲存翻轉後的正確二進位結果
	vector<int> two, num;
	
	// 持續讀取輸入，直到沒有資料為止
	while(cin >> a){
		
		// 當數字還大於或等於 2 時，進行連除
		while(a >= 2){
			two.push_back(a % 2); // 儲存目前的餘數 (0 或 1)
			a = a / 2;            // 更新 a 值，繼續下一輪除法
		}
		
		// 將最後剩下的商 (1 或 0) 存入 vector
		two.push_back(a % 2);
		
		// 因為連除法得到的餘數是「由後往前」讀，
		// 所以這裡利用迴圈將 two 陣列倒序放入 num 陣列中
		for(n = two.size(); n > 0; n--)
			num.push_back(two[n-1]);
		
		// 輸出轉換後的二進位結果
		for(n = 0; n < num.size(); n++)
			cout << num[n];
		
		// 換行處理下一筆測資
		cout << endl;
		
		// 清空容器，避免上一筆測資的數據殘留在下一筆計算中
		two.clear();
		num.clear();
	}
	return 0;
}
