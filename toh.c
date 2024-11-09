#include<stdio.h>

void toh(int n,char A,char B,char C){
    if(n==0)
        return;
    toh(n-1,A,C,B);
    printf("%c-->%c\n",A,C);
    toh(n-1,B,A,C);
}

int main(){
    int n;
    scanf("%d",&n);
    toh(n,'A','B','C');
}