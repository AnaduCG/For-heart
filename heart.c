#include <stdio.h>

int factorial(int n)
{
    if (n >= 0)
    {
        if (n == 0)
        {
            return(1);
        }
        else
        {

            return (n * factorial(n - 1));
        }
    }
}

int fibonacci(int n1,int n2)
{
    int n3;
    if (n1 <= 144)
    {
        n3 = (n1 + n2);
        printf("%d ",n3);
        n1 = n2;
        n2 = n3;
        fibonacci(n1, n2);
    }
    return 0;
}
int main()
{
    //int n;
    //n = factorial(5);
    //printf("%d", n);
    fibonacci(0, 1);
    //printf("%d", f);
    return 0;
}
