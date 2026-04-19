#include<bits/stdc++.h>
using namespace std;

int main(void){
	int n,j=0,t,test=0;
	cin>>n;
	while(j<n){
		int d=1;
		char num[11];
		cin>>num;
			for(t=0;t<strlen(num);t++){
				if(num[t]!=0) 
					d*=num[t]-48;
				else{
					test++;
					break;
				}
			}
		 if(test == 0)
            cout<<d<<endl;
        //若test為1，代表此數字有位數為0，其乘積必為0
        else
            cout<<"0"<<endl;
		j++;
	}
		
	
	
	
}
