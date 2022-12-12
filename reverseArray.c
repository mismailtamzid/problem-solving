#include<stdio.h>
int main(){
int N=5,i,j;
int arr[N];
for(i=0;i<=N;i++){
scanf("%d", &arr[i]);
}
for(j=N;j>=0;j--){
    printf("%d", arr[j]);
}
return 0;
}
