#include <stdio.h>

int main() {
    int count = 0;
    char a[1000];
    char c;
    int i=-1;
    do{
       i++;
       c=getchar();
        a[i]=c;     
   }while (a[i]!='\n');
   i=0;
   int flag;
   while(a[i]!='\0'){
       for (int j = i+1;a[j]!='\0'; j++)
       {
           if (a[j]==a[i])
           {
               for (int k = j;a[k]!='\0'; k++)
                   a[k]=a[k+1];
           }      
       }
        flag=-1;
       for (int j =i+1; a[j]!='\0'; j++)
       {
           if (a[i]==a[j])
               flag=0;
       }
        if (flag==-1)
            i++;
       
   }
    printf("%s",a);  
}