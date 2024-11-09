#include <stdio.h>

int main() {
    int count = 0;
    char a[1000];
    char ab[1000][1000];
    char c;
    int i=-1;
   do{
       i++;
       c=getchar();
        a[i]=c;
      
        
   }while (a[i]!='\n');
    int j;
   printf("\nto remove\n");

   scanf("%c",&c);
   i=0;
    while (a[i]!='\0')
    {
        /* code */
        if (a[i]==c)
        {
            /* code */
            j=i;
            while (a[j]!='\0')
            {
                /* code */
                a[j]=a[j+1];
                j++;
            }
            
            
        }
       i++; 
    }
    printf("%s",a);
    
    
   
}