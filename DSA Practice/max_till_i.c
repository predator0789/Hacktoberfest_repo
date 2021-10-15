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
    printf("Max till last index:-\n");
    int mx=-1999999;
    for(int i=0;i<n;i++){
        mx=fmax(mx,arr[i]);
        printf("%d",mx);
    }
    return 0;
}