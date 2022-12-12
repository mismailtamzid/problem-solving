#include<stdio.h>
int main()
{
    long long int n;
    int i, sum=0;
    scanf("%lld", &n);

        for(i=0; i<n; i++)
        {
            sum += i;
        }
    printf("%d", sum);
}
