#include <stdio.h>
#include <string.h>
int main()
{
    char input[1001];
    scanf("%s", input);

    int flag = 1;
    for (int i = 0, j = strlen(input) - 1; i < strlen(input); i++)
    {

        if (input[i] == input[j])
        {
            j--;
        }
        else
        {
            flag = 0;
        }
    }

    if (flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}