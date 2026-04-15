/*
題目: a065. 提款卡密碼
難度: 初級
完成日期: 2026-02-07 02:35
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
    // 宣告字串變數 a，用來儲存輸入的 7 個大寫字母
    string a;
    cin >> a;

    // 宣告一個長度為 7 的字元陣列，準備存放拆解後的字母
    char num[7];
    int n;

    // 第一個迴圈：將字串中的每個字元依序存入字元陣列 num 中
    for(n = 0; n < 7; n++)
        num[n] = a[n];

    // 第二個迴圈：計算相鄰兩個字元之間的距離（ASCII 碼差值）
    // 因為 7 個字元只有 6 個間隔，所以迴圈執行 6 次
    for(n = 0; n < 6; n++)
        // 使用 abs() 取得兩字元 ASCII 碼相減後的絕對值，並直接輸出
        cout << abs(num[n] - num[n+1]);
    
    return 0;
}
