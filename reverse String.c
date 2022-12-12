#include<stdio.h>
#include<string.h>
int main(){
 char icc[]= "International Cricket Council" ;

 for(int i = strlen(icc)-1; i>=0; i--){
    printf("%c", icc[i]);
 }
 return 0;
}
