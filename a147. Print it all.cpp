/*
題目: a147. Print it all
難度: 初級
完成日期: 2025-12-11 11:18
*/
#include<bits/stdc++.h> // 引入標準函式庫，包含所有常用標頭檔
using namespace std;

int main()
{
    int n, m;
    // 使用 while 迴圈持續讀取輸入的 n，直到沒有資料為止
    while(cin >> n){
        // 使用 for 迴圈從 m = 1 開始跑，直到 m 接近但不等於 n (即 1 ~ n-1)
        for(m = 1; n > m; m++){
            // 判斷 m 是否「不是」7 的倍數
            if(m % 7 != 0)
                // 如果不是 7 的倍數，直接輸出該數字與空格
                cout << m << " ";
            else
                // 如果是 7 的倍數，則將 m 先加 1 (變為下一個數) 後再輸出
                // 注意：這會導致迴圈內的 m 提早增加，跳過了原本應檢查的 7 倍數
                cout << ++m << " ";
        }
        // 每一組 n 處理完畢後換行
        cout << endl;
    }
    return 0; // 程式正常結束
}
