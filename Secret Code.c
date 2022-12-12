#include<stdio.h>
int main()
{
    int a[1000],i,n,j,flag = 0;
    scanf("%d",&n);

    for(i=0; i<n-1; i++)
    {
        scanf("%d \n", &a[i]);
        for(j=2; j<=n/2; j++){
            if(n%j==0){
                flag=1;
            }
        }

    }


return 0;
}

