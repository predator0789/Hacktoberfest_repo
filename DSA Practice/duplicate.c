#include<stdio.h>
int main(){
    int n;
    printf("Enter your array length:-\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements to array:-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("New Array:-\n");
    int prev=arr[0];
    printf("%d ",arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i]!=prev){
            printf("%d ",arr[i]);
        }
        prev=arr[i];
    }
    return 0;
}