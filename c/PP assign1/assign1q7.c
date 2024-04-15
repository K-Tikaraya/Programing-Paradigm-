#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void printRev( int n,int* arr ){
     if(n==0){
        return;
     }
    printf("\n%d",arr[n-1]);
    printRev(n-1,arr);
    return;
} 



int main(){

    int n;
    int* a;
    printf("Enter n:");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("\nEnter a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printRev(n,a);


}