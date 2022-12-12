#include<stdio.h>
#include<string.h>
int main()
{
    char c[20];
    int a,b, sum=0, mul=0, total=0;
    scanf("%s", &c);
    scanf("%d%d", &a, &b);
    for(int i=0; i<=strlen(c)-1; i++)
    {
        if(c[i]=='+')
        {
            sum +=(a+b);
        }
        if(c[i]=='*')
        {
            mul += (a*b);
        }
    }
    total= total+(sum+mul);
    printf("%d", total);
    return 0;
}

