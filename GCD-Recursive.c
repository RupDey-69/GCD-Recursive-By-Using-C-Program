// Recursive Gcd......
#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
int main()

{

    int a, b;
    printf("Enter the Fast Number:");
    scanf("%d", &a);

    printf("Enter the Second Number:");
    scanf("%d", &b);

    printf("The GCD OF %d and %d  Is:%d", a, b, gcd(a, b));
    return 0;
}