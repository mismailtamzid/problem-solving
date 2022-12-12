#include<stdio.h>
int main()
{
    int t, x[100], i, minutes;
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d%%", &x[i]);
    }
    for(i=0; i<t; i++){
            if(x[i]<=59)
        {
            minutes = ((60-x[i])*1)+(20*2)+(20*3);
        }
        else if(x[i]>59 && x[i]<=79)
        {
            minutes = ((80-x[i])*2)+(20*3);
        }
        else if(x[i]>79 && x[i]<=100)
        {
            minutes = ((100-x[i])*3);
        }
    printf("%d minutes \n", minutes);
    }
    return 0;
}
