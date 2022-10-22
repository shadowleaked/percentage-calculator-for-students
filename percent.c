#include <stdio.h>
#include <conio.h>
float percent(float n);
void main()
{
    int n;
    printf("Enter the number of subject : ");
    scanf("%d", &n);
    printf("Percentage = %.2f", percent(n));
    printf("%%");
    getch();
}

float percent(float n)
{
    int a, i, sum = 0;
    float per;
    for (i = 1; i <= n; i++)
    {
        printf("Enter Mark ");
        scanf("%d", &a);
        sum = sum + a;
    }
    per = (sum / n);
    return per;
}
