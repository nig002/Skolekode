#include <stdio.h>
int myPrimeFactor(int number, int primeFactor)
{
    if (number % primeFactor == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    printf("state number and primefactor: ");
    int n, p;
    scanf("%d %d", &n, &p);
    int result = myPrimeFactor(n, p);
    if (result == 1)
    {
        printf("%d is a primefactor \n", p);
    }
    else
    {
        printf("%d is not a primefactor \n", p);
    }
    return 0;
}
void myNumbers(int startnum, int endnum);