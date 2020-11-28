#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void printHeart(char* a, int n)
{
    int x = 0;
    for (int i = n / 2; i <= n; i += 2)
    {
        for (int j = 1; j < n - i; j += 2)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%c", a[x]);
            x++;
            if (x >= n)
            {
                x = 0;
            }
        }

        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%c", a[x]);
            x++;
            if (x >= n)
            {
                x = 0;
            }
        }

        printf("\n");
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            printf("%c", a[x]);
            x++;
            if (x >= n)
            {
                x = 0;
            }
        }

        printf("\n");
    }

}

int main()
{
    char a[100];
    int n;
    scanf("%[^\n]", a);
    n = strlen(a);
    printHeart(a, n);
    return 0;
}