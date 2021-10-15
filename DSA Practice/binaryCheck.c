#include<stdio.h>
int main(){
    int n,key;
    printf("Enter array length:-\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter a sorted array:-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key element:-\n");
    scanf("%d",&key);
    int x=0;
    int a=0;
    int b=n;
    while(a<=b){
     int mid=(a+b)/2;
     if(arr[mid]>key){
         b=mid-1;
     }else if(arr[mid]<key){
         a=mid+1;
     }else if(arr[mid]==key){
         x=mid;
         break;
     }
    }
    if(x!=0)
    printf("Key found at index %d", x);
    else
    printf("Key not found");
    return 0;
}