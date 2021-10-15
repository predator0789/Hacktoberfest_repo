#include<stdio.h>
int main(){
    int n1,n2,i,j;
    printf("Enter the length of First Sorted Array:-\n");
    scanf("%d",&n1);
    int sort1[n1];
    printf("Enter the First array elements in incresing order:-\n");
    for(i=0;i<n1;i++){
        scanf("%d",&sort1[i]);
    }
    printf("Enter the length of Second Sorted Array:-\n");
    scanf("%d",&n2);
    int sort2[n2];
    printf("Enter the Second array elements in incresing order:-\n");
    for(i=0;i<n2;i++){
        scanf("%d",&sort2[i]);
    }
    i=0;
    j=0;
    int k=0;
    int n=(n1+n2);
    int res[n];
    while(i<n1 && j<n2){
        if(sort1[i]<=sort2[j]){
            res[k]=sort1[i];
            k++;
            i++;
        }else{
            res[k]=sort2[j];
            k++;
            j++;
        }
    }
    if(i>=n1){
        while(j<n2){
            res[k]=sort2[j];
            k++;
            j++;
        }
    }else{
        while(i<n1){
            res[k]=sort1[i];
            k++;
            i++;
        }
    }
    printf("Merged Sorted Array is:-\n");
    for(i=0;i<k;i++){
        printf("%d ",res[i]);
    }
    return 0;
}