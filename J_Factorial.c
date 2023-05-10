#include <stdio.h>

long long int fun(long long int input)
{
    if (input == 0)
    {
        return 1;
    }

    long long int ans = fun(input - 1);
    return ans * input;
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
5 * 4 * 3 * 2 * 1
*/