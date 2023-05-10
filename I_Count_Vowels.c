#include <stdio.h>
#include <string.h>
int x = 0;
int fun(char array[], int i)
{
    if (array[i] == '\0')
    {
        return 0;
    }

    int ans = fun(array, i + 1);

    if (array[i] >= 'A' && array[i] <= 'Z')
    {
        array[i] = array[i] + 32;
    }
    if (array[i] == 'a' || array[i] == 'i' || array[i] == 'e' || array[i] == 'o' || array[i] == 'u')
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}
int main()
{

    char array[205];
    fgets(array, 205, stdin);
    int ans = fun(array, 0);
    printf("%d", ans);

    return 0;
}