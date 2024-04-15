#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

//Question-8

bool is_palin(char* str,int n,int i){
    if(n==1||n==0)
     return true;
    if(str[i]!=str[n-1]){
        return false;
    }
    else if (str[i]==str[n-1]){
        i++;
        is_palin(str,n-1,i);
    }

    
}


int main(){
    int n,i=0;
    char* str;
    printf("Enter n:");
    scanf("%d",&n);
    str = (char *)malloc(n*sizeof(char));
    printf("Enter string:");
    scanf("%s",str);
    printf("%s", str);
    if(is_palin(str,n,i))
     printf("\ntrue");
    else 
     printf("\nfalse");
    
    return 0;

 

}