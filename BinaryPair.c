#include<stdio.h>
#include<string.h>
int main(){
int t, n;
scanf("%d", &t);
for(int j= 0; j<t; j++){
scanf("%d", &n);
char arr[n];
scanf("%s", &arr);
int pairs=0;
        for(int i=0; i<strlen(arr); i++)
        {
            if((arr[i] == '1' && arr[i+1]== '0') || (arr[i] == '0' && arr[i+1]== '1'))
            {
                pairs+=1;
            }
        }
        printf("%d\n", pairs);
    }
return 0;
}
