#include<bits/stdc++.h> 
using namespace std;
int main()
{
  int n, m;
    while(cin>>n){
        for(m=1;n>m;m++){
        if(m%7!=0)
            cout<<m<<" ";
        else
            cout<<++m<<" ";
            
}
    cout<<endl;
}
    return 0;
}
