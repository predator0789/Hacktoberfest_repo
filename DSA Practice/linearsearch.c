#include<stdio.h>
void main(){
    int n,k;
    printf("Enter array length:-\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter a array:-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter key element:-\n");
    scanf("%d",&k);
    int c=1;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            printf("Key found at %d",i);
            c=0;
            break;
        }
    }
    if(c==1)
    printf("Key not found");
}