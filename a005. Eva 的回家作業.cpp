/*
題目:a005. Eva 的回家作業
難度:新手
完成日期:2025-12-11 10:25
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	
	
	int t;
	cin >> t;
	
	while(t--){
		int A[4];
		//輸入A的每一項
		for(auto&x:A){
			cin>>x;
		}
		//判斷等差,等比
		if(A[1] - A[0] == A[2] - A[1] && A[2] - A[1] == A[3] - A[2]){
			int d = A[1] - A[0];
			cout << A[0] << " " << A[1] << " " << A[2] << " " << A[3] << " " << A[3] + d << endl;
		}
		
		else{
			int r = A[1] / A[0];
			cout << A[0] << " " << A[1] << " " << A[2] << " " << A[3] << " " << A[3] * r << endl;
		}
	}
	
	return 0;
}
