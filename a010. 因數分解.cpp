/*
題目:a010. 因數分解
難度:初級
完成日期:2025-12-11 10:25
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, i, count, A;
	
	// 輸入要分解的正整數
	cin >> a; 
	
	// A 用來記錄原始輸入的值，以便後續判斷是否為最後一個質因數
	A = a; 
	
	// 從最小的質數 2 開始嘗試除到 a 為止
	for (i = 2; i <= a; i++) {                                
		
		count = 0; // count 用來記錄目前質因數 i 出現的次數（指數）
		
		// 當 a 能被 i 整除時，代表 i 是 a 的質因數
		while (a % i == 0) {
			a = a / i; // 不斷除以 i，直到無法整除
			count++;   // 累計次數
		}
		
		// 如果 count 為 0，表示 i 不是該數的質因數，直接跳過
		if (count == 0) { 
			continue;
		} 
		
		// 情況 1：目前的 i 是最後一個質因數，且次數大於 1
		// (a == 1 代表已經分解完畢，不再需要印出 " * ")
		else if (a == 1 && count > 1 || a == A && count > 1)  
			cout << i << "^" << count;
		
		// 情況 2：目前的 i 是最後一個質因數，且次數剛好為 1
		else if (a == 1 || a == A) {
			cout << i;
		}
		
		// 情況 3：後續還有其他質因數，且目前次數為 1
		else if (count == 1)                                     
			cout << i << " * ";
		
		// 情況 4：後續還有其他質因數，且目前次數大於 1
		else                                                     
			cout << i << "^" << count << " * ";
	}
	
	return 0;
}
