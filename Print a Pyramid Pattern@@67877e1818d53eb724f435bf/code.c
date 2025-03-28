#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
   
    {
         for (int i = 1; i < a; i++)
    {
        for(int k = a;k>=1;k--){
            printf(" ");
        }
        for(int l = 1;l >= a;l++){
            printf("*");
        }
        for (int j = 1; j < i; j++)
        {
            printf("*");
        }
       printf("\n") ;
    }
    }
}