#include <stdio.h>

    int Fac(int x){
      if(x==1||x==0)
        return 1;

      else
        return(x*Fac(x-1));

    }

    int main(){
       int n;
       printf("Enter n:");
       scanf("%d",&n);
       printf("Factorial of n is: %d",Fac(n));
    }