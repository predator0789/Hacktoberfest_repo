#include<stdio.h>
void insert(int ins[],int num1,int pos1,int val1){
    for(int i=num1;i>pos1;i--){
        ins[i]=ins[i-1];
    }
    ins[pos1]=val1;
}
void delete(int del[],int num2,int pos2){
    for(int i=pos2;i<=num2;i++){
        del[i]=del[i+1];
    }
}
int main(){
    int n;
    printf("Enter the length of the array:-\n");
    scanf("%d",&n);
    int arr[n+2];
    printf("Input elements of array:-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int posin,x;
    printf("Enter the position of inserting element:-\n");
    scanf("%d",&posin);
    printf("Enter the inserting element:-\n");
    scanf("%d",&x);
    insert(arr,n,posin,x);
    printf("Array after insertion:-\n");
    for(int i=0;i<=n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    int posdel;
    printf("Enter the position of deleting element:-\n");
    scanf("%d",&posdel);
    delete(arr,n,posdel);
    printf("Array after deletion:-\n");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}