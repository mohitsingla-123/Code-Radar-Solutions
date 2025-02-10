#include <stdio.h>

int isprime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++){
            if(n%i=0)
            count++;
        
    }
 return 0;   
    
}
int main()
{
    int n,fact_count;
    scanf("%d",&n);
    fact_count = isprime(n);
    if(fact_count == 2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
        return 0;
    }
}