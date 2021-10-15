#include<stdio.h>
int c=1;
int bin=0;
int choctal(int num){
    int rem;
        if(num>0){
           rem=num%8; 
           bin+=rem*c;
           c*=10;
           choctal(num/8);
        }
    return bin;
}
void main(){
    int n;
    printf("Enter a Decimal number:-\n");
    scanf("%d",&n);
    int res=choctal(n);
    printf("Octal number is:-\n%d",res);
}