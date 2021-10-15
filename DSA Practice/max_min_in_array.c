#include<stdio.h>
void main(){
    int n;
    printf("Enter Array Length:-\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array elements:-\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int max=-9999999;
    int min=9999999;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Maximum element in array is %d \nMinimum element in array is %d",max,min);
}