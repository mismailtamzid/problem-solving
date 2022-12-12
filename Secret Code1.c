#include<stdio.h>
int main()
{
    int n,j, i, temp, k;
    scanf("%d", &n);
    int a[1000], a2[1000];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    a2[i]= a[i];
    {
        temp=a[n-k];
        for(i=n-1; i>0; i--){
            a[i] = a[i-k];}
        a[0] = temp;
        for(i=0; i<n; i++)
        {
            printf("%d ", a[i]);

        }
    }
    return 0;
}
