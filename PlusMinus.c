#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    scanf("%s", &c);
    int max=0;
     int counter=0;
  //  fgets(c, sizeof c, stdin);
    for(int i=0; i<=strlen(c)-1; i++)
  {

       if(c[i] == c[i+1])
        {
            counter++;
        }
        if(c[i] != c[i+1])
        {
            if(counter > max){
                max= counter;
            }
        counter=1;
        }
   }
    if(counter > max){
        max = counter;
    }

    printf("%d", max);

    return 0;
}
