#include <stdio.h>
#include <limits.h>

int max(int array[], int input, int i)
{
    if (i == input)
    {
        return INT_MIN;
    }

    int ans = max(array, input, i + 1);
    if (ans <= array[i])
    {
        return array[i];
    }
    else
    {
        return ans;
    }

    printf("%d ", array[input - 1]);
}
int main()
{
    int input;
    scanf("%d", &input);

    int array[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &array[i]);
    }

    int ans = max(array, input, 0);
    printf("%d", ans);

    return 0;
}