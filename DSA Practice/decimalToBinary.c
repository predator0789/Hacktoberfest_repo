#include<stdio.h>
int chbinary(int num){
    int c=1;
    long bin=0;
    int coef;
    while(num>0){
        coef=num%2; 
        bin+=coef*c;
        c*=10;
        num/=2;
    }
    return bin;
}
void main(){
    int n;
    printf("Enter a Decimal number:-\n");
    scanf("%d",&n);
    long res=chbinary(n);
    printf("Binary number is:-\n%d",res);
}