#include<stdio.h>
int main(){
 int n;
 scanf("%d", &n);
 if(n%3 == 0){
       int divisor=n/3;
    printf("%d", divisor);
 }
 else{
    printf("-1" )
 }

 return 0;
}
