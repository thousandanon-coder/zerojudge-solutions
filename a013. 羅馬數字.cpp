/*
題目:a013. 羅馬數字
難度:中上級
完成日期:2026-02-26 16:53
*/
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 函式：將羅馬數字字串轉換為整數
int romanToInt(string s, unordered_map<char, int>& roma) {
	int total = 0;
	for (int i = 0; i < s.length(); i++) {
		// 羅馬數字規則：如果左邊的數字比右邊小，代表要用減的（例如 IV = 5 - 1 = 4）
		if (i + 1 < s.length() && roma[s[i]] < roma[s[i + 1]]) {
			total -= roma[s[i]];
		} else {
			// 否則直接加上該數值
			total += roma[s[i]];
		}
	}
	return total;
}

// 函式：將整數轉換回羅馬數字字串
string intToRoman(int num) {
	if (num == 0) return "ZERO"; 
	
	// 定義轉換表，包含特殊情況（如 4, 9, 40, 90 等）
	pair<int, string> table[] = {
		{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
		{100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
		{10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"},
		{1, "I"}
	};
	
	string res = "";
	// 從最大的單位開始扣除，並串接對應的羅馬符號
	for (int i = 0; i < 13; i++) {
		while (num >= table[i].first) {
			res += table[i].second;
			num -= table[i].first;
		}
	}
	return res;
}

int main() {
	// 建立對照表，記錄每個羅馬字元的數值
	unordered_map<char, int> roma = {
{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
	{'C', 100}, {'D', 500}, {'M', 1000}
};
	
	string s1, s2;
	// 循環讀取兩個字串，直到遇到 "#" 為止
	while (cin >> s1 >> s2 && s1 != "#") { 
		// 1. 將兩個羅馬數字都轉成整數
		int n1 = romanToInt(s1, roma);
		int n2 = romanToInt(s2, roma);
		
		// 2. 計算兩數之差的絕對值
		int diff = abs(n1 - n2);
		
		// 3. 根據題目要求，若差為 0 輸出 ZERO，否則轉回羅馬數字
		if (diff == 0) {
			cout << "ZERO" << endl;
		} else {
			cout << intToRoman(diff) << endl;
		}
	}
	return 0;
}
