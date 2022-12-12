#include<stdio.h>
int main(){
int n;
int reminderQuib=0;
scanf("%d",&n);
int sum=0;
int devisor= 0;
int reminder=0;
for(int i=n; i>=0;i=n/10){
    devisor=n/10;
    i=devisor;
    reminder=reminder+(n%10);
   printf("%d", reminder);
}
return 0;

}
