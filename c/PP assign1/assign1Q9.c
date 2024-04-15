#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


void Replace(char *s,int i,char c1,char c2){
 if(s[i]=='\0')
  return;
 else{ if(s[i]==c1) {
    s[i]=c2;
 }
 i++;
 Replace(s,i,c1,c2);

 }


}
int main(){
    int n, i=0;
    char* str,c1,c2;
    printf("Enter size n:");
    scanf("%d",&n);
    str =(char *)malloc(n*sizeof(char));

    printf("Enter string:");
    scanf("%s",str);
    printf("Enter character c1 and c2:");
    scanf(" %c %c",&c1,&c2);
    Replace(str,i,c1,c2);
    printf("%s",str);

    return 0;





}