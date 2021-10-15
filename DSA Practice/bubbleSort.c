#include<stdio.h>
int main(){
    int n;
    printf("Enter array length:-\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array:-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    printf("Sorted Array by bubble sort:-\n");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    return 0;
}