#include<stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   printf("%d, ", n);
   while(n != 1){
    if(n%2){
        n=n-1;
    }
    else{
        n=n/2;
    }
    printf("%d, ", n);
   }
   return 0;
}
