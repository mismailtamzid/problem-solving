#include<stdio.h>
int main(){
 int n;
 scanf("%d", &n);
 for(int i=1; i<=n; i++){
    int square=i*i;
    printf("Number is : %d and Square of the %d is :%d\n", i,i, square);
 }
}
