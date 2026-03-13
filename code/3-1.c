#include <stdio.h>

int main()
{
    char a = 'a';
    char b = 'b';

    printf("sizeof(a) = %u\n", sizeof(a + b));

    return 0;
}

