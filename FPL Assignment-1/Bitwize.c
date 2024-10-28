#include <stdio.h>

int main()
{

    int a = 25, b = 5;

    // Bitwize Operators[AND(&),OR(!),XOR(^),First compliment(~),Leftshift(>>),Rightshift(<<)]
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("~a: %d\n", ~a);
    printf("a >> b: %d\n", a >> b);
    printf("a << b: %d\n", a << b);

    return 0;
}