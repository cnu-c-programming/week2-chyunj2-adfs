#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a == 1){
        printf("false");
    }else{
        for(int i = 2; i < a; i++)
        {
            if(a % i == 0){
                printf("false");
            }else{
                printf("true");
            }
        }
    }
    return 0;
}
