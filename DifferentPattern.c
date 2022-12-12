#include<stdio.h>
int main()
{
    int n, row, col;
    scanf("%d", &n);
    for(row=1; row<=n; row++)
    {

        for(col=row; col>1; col--)
        {
            printf("%d ", col);
        }
        printf("%d \n",col);

    }
        printf("\n");
        return 0;
}
