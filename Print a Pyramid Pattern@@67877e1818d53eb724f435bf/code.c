#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
   
    if(a%2 != 0)
    {
         for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("*");
        }
       printf("\n") ;
    }
    }
}