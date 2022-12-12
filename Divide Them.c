#include<stdio.h>
int main()
{
    int n, k, i;
    scanf("%d", &n);
    int roll[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &roll[i]);
    }
    scanf("%d", &k);
    for(i=k; i<n; i++)
    {
        printf("%d ", roll[i]);
    }
    for(i=0; i<k; i++)
    {
        printf("%d ", roll[i]);
    }
    return 0;
}


