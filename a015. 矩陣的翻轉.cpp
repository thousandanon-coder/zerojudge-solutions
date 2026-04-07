/*
題目:a015. 矩陣的翻轉
難度:初中級
完成日期:2026-02-13 18:35
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, n, k, j = 0;
	vector<int> num;
	
	// a 為列數(row)，b 為行數(column)
	while(cin >> a >> b){
		// 讀取矩陣資料並拉直存入一維 vector
		for(n = 0; n < a * b; n++){
			cin >> k;
			num.push_back(k);
		}
		
		// 開始翻轉輸出：外層跑原本的寬度(b)，內層跑原本的高度(a)
		for(n = 0; n < b; n++){
			for(k = 0; k < a; k++){
				// 核心邏輯：利用 j 控制索引跳躍，達到旋轉效果
				cout << num[n + j] << " ";
				j = j + b; // 每次跳過一行原始資料的長度
			}
			j = 0; // 輸完一行後，j 歸零，n 會移往原始資料的下一個起始點
			cout << endl;
		}
		num.clear(); // 務必清空 vector 以免下一組測資出錯
	}
	return 0;
}
