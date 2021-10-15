#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter length of array:-\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            printf(" %d\n",sum);
        }
    }

}