#include <stdio.h>

int main()
{
    int a, b, c;

    a = b = c = 5;//대입 연산은 오른쪽에서 왼쪽으로 진행한다
    printf("%d %d %d\n", a, b, c);

    a = 2 + 3 * 4;//곱셈이 덧셈보다 우선순위가 높다
    printf("%d %d %d\n", a, b, c);
    c = a++ + ++b;//++b를 먼저 사용하고, +를 실행하고, 나중에 a++한다.
    printf("%d %d %d\n", a, b, c);
    return 0;
}
