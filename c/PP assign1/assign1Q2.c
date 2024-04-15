#include<stdio.h>

int Sum(int n){
      if(n==1)
        return 1;
      else
        return(n+Sum(n-1));

    } 

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Sum of n no. is: %d",Sum(n));


}