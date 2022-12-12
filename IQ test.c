#include<stdio.h>
int main(){
    int arr[105];
 int n, i, odd=0, even=0;
 scanf("%d", &n);
 for(i=1;i<=n; i++){
    scanf("%d", &arr[i]);
 }
 for(i=1; i<=n; i++){
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }

 }
}
