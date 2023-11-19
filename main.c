#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, m, r=0, rev=0, i=0, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    m=n;

    while(m!=0)
    {
        m=m/10;
        i++;
    }

    m=n;

    for (j=1 ; j<=i ; j++)
    {
        r=m%10;
        rev = (10*rev) + r;
        m = m/10;
    }

    if (rev == n)
    {
        printf("%d is a palindromic number.", n);
    }
    else
    {
        printf("%d is not a palindromic number.", n);
    }
}
