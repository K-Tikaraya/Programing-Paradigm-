#include<stdio.h>

int comparestring(char a[],char b[], int i){
    if(a[i]=='\0'&&b[i]=='\0')
      return 0;
    else if(a[i]>b[i])
      return 1;
    else if(a[i]<b[i])
      return -1;
    else if(a[i]==b[i]){
      i++;
      comparestring(a,b,i);
    }
}


int main(){
    int n;
    printf("Enter size of strings:");
    scanf("%d",&n);
    char s1[n],s2[n];
    printf("Enter strings:");
    scanf("%s%s",s1,s2);
    printf("%d",comparestring(s1,s2,0));
    return 0;



}