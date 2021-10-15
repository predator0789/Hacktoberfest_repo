#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter your array length:-\n";
    cin>>n;
    int arr[n];
    cout<<"Give input for elements:-\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your unsorted array:-\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<ends;
    }
    cout<<endl;
    // Sorting process
    int x=1;
    while(x<=n-1){
        for(int i=0;i<n-x;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        x++;
    }
    cout<<"Your sorted array:-\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<ends;
    }
}