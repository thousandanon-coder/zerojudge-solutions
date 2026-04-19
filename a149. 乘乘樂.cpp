/*
題目: a149. 乘乘樂
難度: 初中級
完成日期: 2026-01-29 22:35
*/
#include<bits/stdc++.h>
using namespace std;

int main(void){
	int n, j = 0, t, test = 0;
	cin >> n; // 讀取測試資料的筆數
	
	while(j < n){
		int d = 1;      // d 用來儲存每位數相乘的結果，初始值設為 1
		char num[11];   // 宣告字元陣列來接收輸入的數字（視為字串處理）
		cin >> num;     // 讀取數字字串
		
		test = 0;       // (修正建議：每輪應重置 test，否則一旦有一筆含0，後續都會輸出0)
		
		// 使用 strlen 取得字串長度，並逐一檢查每個字元
		for(t = 0; t < strlen(num); t++){
			// 注意：num[t] 是字元，這裡檢查的是該字元的 ASCII 值
			// 若字元不是 '0' (ASCII 為 48)
			if(num[t] != '0') 
				d *= (num[t] - 48); // 將字元轉為整數並相乘 (num[t]-'0')
			else{
				test++; // 如果遇到位數為 '0'，標記 test 並跳出迴圈
				break;
			}
		}
		
		// 根據 test 旗標決定輸出結果
		if(test == 0)
			cout << d << endl; // 若所有位數都不為 0，輸出乘積
		else
			cout << "0" << endl; // 若其中一位數是 0，乘積必為 0
			
		j++; // 執行下一筆測試資料
	}	
}
