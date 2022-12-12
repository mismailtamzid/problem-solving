#include<stdio.h>

int main()
{
    int n,i,t,j, count;
   scanf("%d", &t);
   for(j=1; j<=t; j++){
     count=0;
    scanf("%d", &n);
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            count=1;
        }
    }
    if(n == 1){
        count=1;
    }
    if(count == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
   }
    return 0;
}
