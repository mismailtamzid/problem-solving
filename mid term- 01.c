/*
//number: 1
#include<stdio.h>
int main()
{
    int n = 10;
    int x = 5;
    int index = 0;
    int a[10] = {12, 7, 3, 71, 2, 43, 38, 23, 45, 22};
    int b[10];
    for (int i=0; i<n; i++)
    {
        //Write Code Here
        b[i]=a[i]+x;
    }
     for (int i=0; i<n; i++)
    {
        //Write Code Here
        printf("%d ", b[i]);
    }

}
*/

//number-3
#include<stdio.h>
int main(){
	char a[10];
	a[0] = 98;
	a[1] = 97;
	a[2] = 'n';
	a[3] = 'a';
	a[4] = 'n';
	a[5] = 'a';
	a[6] = "\0";

			printf("%s ", a);

return 0;
}


/*
// number- 10
#include<stdio.h>
int main(){
 int i, n, sum=0, reminder;
 scanf("%d", &n);
 for(i=n; i>0; i--){
    sum +=n%10;
    n=n/10;
 }

printf("%d", sum);
return 0;
}
*/
/*
// number- 9
#include<stdio.h>
int main(){
 int i, n, arr[n], min_ind[n];
 scanf("%d", &n);
 for(i=0; i<n; i++){
    scanf("%d", arr[i]);
 }
    int min=arr[0];
 for(i=0; i<n; i++){
    if(min>arr[i]){

    }
 }


return 0;
}
*/
