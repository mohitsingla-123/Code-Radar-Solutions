#include <stdio.h>

int main() {
    char d;
    printf("You entered:");
    if(scanf("%c", &d) == 1){
        printf("you entered:%c",d);

    }
    
    return 0;
}