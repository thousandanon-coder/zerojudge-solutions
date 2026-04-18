/*
題目: a148. You Cannot Pass?!
難度: 入門
完成日期: 2026-04-18 21:02
*/
#include<bits/stdc++.h> // 引入萬用標頭檔，包含所有標準函式庫
using namespace std;

int main() {
    int a; // 用來存放每一行開頭的整數，代表接下來有幾個分數
    
    // 使用 while(cin >> a) 持續讀取輸入，直到遇到 EOF (檔案結束)
    while(cin >> a) {
        double total = 0, c; // total 用來累加總分，c 用來存放當下讀入的分數
        
        // 迴圈跑 a 次，讀取該行後續的所有分數
        for(int j = 0; j < a; j++) {
            cin >> c;      // 讀取一個分數
            total += c;    // 將分數加進總分
        }
        
        // 判斷平均值 (總分 / 個數) 是否大於 59
        // 題目邏輯：平均大於 59 分（即 60 分以上）代表通過，不須補考 -> 輸出 "no"
        if((total / a) > 59) {
            cout << "no" << "\n";
        }
        // 若平均小於或等於 59 分，代表不通過 -> 輸出 "yes"
        else {
            cout << "yes" << "\n";
        }
    }
    return 0; // 良好的程式習慣，代表程式正常結束
}
