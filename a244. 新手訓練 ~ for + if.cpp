/*
題目: a244. 新手訓練 ~ for + if
難度: 初級
完成日期: 2026-02-02 22:58
*/
#include<bits/stdc++.h> // 引入萬用標頭檔，包含所有標準函式庫
using namespace std;

int main(){
    // n 為測資筆數，j 為迴圈控制變數
    // a 為運算類型，b 與 c 為參與運算的兩數
    // 使用 long long 以防止數值過大導致溢位 (Overflow)
    long long n, j = 0, a, b, c;

    // 輸入共有幾筆測資
    cin >> n;

    // 利用 for 迴圈執行 n 次運算
    for(j = 0; j < n; j++){
        // 依序輸入運算代碼 a，以及運算數字 b, c
        cin >> a >> b >> c;

        // 若 a 為 1，執行加法運算
        if(a == 1)
            cout << b + c << endl;

        // 若 a 為 2，執行減法運算
        if(a == 2)
            cout << b - c << endl;

        // 若 a 為 3，執行乘法運算
        if(a == 3)
            cout << b * c << endl;

        // 若 a 為 4，執行整數除法運算（C++ 中 long long 相除會自動捨去小數）
        if(a == 4)
            cout << b / c << endl;	
    }
    
    return 0; // 慣例回傳 0 表示程式正常結束
}
