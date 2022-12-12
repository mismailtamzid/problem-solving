#include<stdio.h>
int main(){
int n,k,run, i, sum=0;
scanf("%d%d\n",&n, &k);
for(i=1; i<=n; i++){
    scanf("%d",&run);
    run=run;
     if(run<k){
        sum+=1;
    }
}
     printf("%d ", sum);
return 0;
}
