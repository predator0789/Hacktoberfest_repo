#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int res=1;
    for(int i=1;i<=n;i++){
        res*=i;
    }
    return res;
}
int main(){
    cout<<"Enter a number:-\n";
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}