/*
#include<stdio.h>
int main()
{
    int i, j, n=8;
    int array1[8]= {12, 7, 9, 3, 15, 2, 6, 5};
    int sortedArray[8];
    for(i=0; i<n; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");
    int min, min_index;
    for(j=0; j<n; j++)
    {
        min =array1[0];
        min_index = 0;
        for(i=0; i<n; i++)
        {
            if(array1[i] < min)
            {
                min = array1[i];
                min_index = i;
            }
        }
        sortedArray[j] = min;
        array1[min_index] = 9999;
        for(i=0; i<n; i++)
        {
            printf("%d ", sortedArray[i]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int i, j, n;
        scanf("%d", &n);

    int array1[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &array1[i]);
    }
    int sortedArray[n];
    int min, min_index;
    for(j=0; j<n; j++)
    {
        min =array1[0];
        min_index = 0;
        for(i=0; i<n; i++)
        {
            if(array1[i] < min)
            {
                min = array1[i];
                min_index = i;
            }
        }
        sortedArray[j] = min;
        array1[min_index] = 9999;
        for(i=0; i<n; i++)
        {
            printf("%d ", sortedArray[i]);
        }
        printf("\n");

    }
    return 0;
}
*/

/*To determine a magic square we have to make sure that the sum of row,
 sum of col,
 sum of both diagonals are the same. If not, they aren’t diagonal.
Let's program it. */

#include <stdio.h>
int main(){

   int matrix[10][10];
   int r=3,c=3,sum1=0, sum2=0, rs,cs;
   for(int i=0; i<c; i++){
       for(int j=0; j<r; j++){
           printf("Enter the value in [%d][%d]:",i,j);
           scanf("%d",&matrix[i][j]);
       }
   }

   //first & second diagonal sum
   for (int i = 0; i <c ; i++) {
      sum1 = sum1+matrix[i][i];
   }
   for(int i=0; i<c; i++){
       sum2 = sum2+ matrix[i][c-1-i];
   }

   if(sum1==sum2){
       //Check sum of rows
       for(int i=0; i<r; i++){
           rs=0;
           for(int j=0; j<c; j++){
               rs = rs+ matrix[i][j];
           }
       }
       if(rs==sum1){

           //Check for col sum
           for(int i=0; i<c; i++ ){
               cs=0;
               for(int j=0; j<r; j++){
                   cs = cs+ matrix[i][j];
               }
           }
           if(cs==rs){
               printf("YES");
           }
           else{
               printf("NO");
           }
       }else{
           printf("NO");
       }
   }else{
       printf("NO");
   }
   return 0;
}

