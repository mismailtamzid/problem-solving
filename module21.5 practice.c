/*
//problem-1
#include<stdio.h>
int loop(int x){
    int i;
 if(x>0){
    for(i=x; i> -x; i--){
    printf("%d ", i);
 }
 }
 else{
      for(i=x; i<-x; i++){
   printf("%d ", i);
 }
 }
}

int main(){
 int n, i;
 scanf("%d", &n);
 int result= loop(n);
 printf("%d", result);
}
*/

//problem-2
#include<stdio.h>


int main(){
 int row, col, n;
 scanf("%d", &n);
  for(row=1; row<=n; row++){

    for(col=1; col<=n-row; col=col+1){
        printf(" ", col);
    }
    for(col=2*row+1; col>=1; col--){
        printf("%d", col);
    }
  printf("\n");

// int result= loop(row, col);
// printf("%d", result);
}
}
