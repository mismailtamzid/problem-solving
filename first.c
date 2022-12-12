#include<stdio.h>
int main(){
 int number1, number2;
 printf("please enter 2 numbers: ");
 scanf("%d%d", &number1, &number2);
 if(number1 == number2){
    printf("equal");
 }
 else{
    printf("not equal");
 }
}
