#include <stdio.h>

int main()
{
    int x, y, z = 0, i;

    printf("Enter Number\n");
    scanf("%d", &x);
    for (i = 1; i <= (x - 1); i++)
    {
        y = x % i;
	if (y == 0)
        {
            z = z + i;
        }
    }
    if (z == x)
        printf("Entered Number is perfect number");
    else
        printf("Entered Number is not a perfect number");
    return 0;
}