#include<stdio.h>
int main()
{
    int n, i, marks[100];
    scanf("%d", &n);
    for( i=0; i<n; i++)
    {
        scanf("%d", &marks[i]);
    }
    int max = marks[0];
    for(i=1; i<n; i++)
    {
        if(max < marks[i])
            max = marks[i];
    }
   for(i=0; i<n; i++){
    marks[i] = max - marks[i];
   printf("%d ", marks[i]);
   }
    return 0;
}
