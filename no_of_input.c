#include <stdio.h>

long long int fun(long long int input)
{
    if (input == 0)
    {
        return 0;
    }
    else
    {
        return 1 + fun(input / 10);
    }
}
int main()
{
    long long int input;
    scanf("%lld", &input);
    long long int ans = fun(input);
    printf("%lld", ans);
    return 0;
}

/*
55
out 2
*/