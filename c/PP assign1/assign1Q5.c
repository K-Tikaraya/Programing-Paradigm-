#include<stdio.h>

int HCF(int x,int y){
    if(y!=0)
      return(HCF(y,x%y));
    else
      return(x);
    
}

int main(){
    int x,y;
    printf("Enter two no. :");
    scanf("%d %d",&x,&y);
    printf("HCF of given no. are %d",HCF(x,y));
    return 0;
}