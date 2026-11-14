#include<stdio.h>
int table(int n){
    for(int i=0;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    table(n);
    return 0;
}