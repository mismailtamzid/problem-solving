#include<stdio.h>
int main()
{
    int t;
    long long int s, a, b, c, d[10000] ;
        scanf("%d \n", &t);
    for(int i=1; i<=t; i++)
        {
        scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
        d[i] = s-(a+b+c);
    }
    for(int i=1; i<=t; i++){
    printf("%lld \n", d[i]);
    }
    return 0;
}
