#include<stdio.h>
int main(){
int row,n,col;
scanf("%d",&n);
for(row=1; row<=n;row++){
    for(col=n;col<=n-row; col--){
        printf(" ");
    }
    for(col=n;col<=row;col--){
        printf("*");
    }
    printf("\n");
}
return 0;
}
