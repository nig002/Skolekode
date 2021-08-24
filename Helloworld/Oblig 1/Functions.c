#include <stdio.h>

void compare_values(int x, int y)
{
    if (x > y)
        printf("%i is greater than %i \n\n", x, y);
    else if (x < y)
        printf("%i is not greater than %i \n\n", x, y);
    else
        printf("%i is equal to %i\n\n", x, y);
}

void myTriangles(int numlines)
{
    for (int i = 1; i <= numlines; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

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

void myNumbers(int startnum, int endnum) //deklarerer funksjon med 2 argumenter
{
    for (int d = startnum; d <= endnum; d++) //lager en forloop som da kjører koden til ''condition'' ikke stemmer. forloop(setter verdi;''condition'';Hva koden skal gjøre om condition=true)
    {
        if (myPrimeFactor(d, 5) == 0 && myPrimeFactor(d, 2) == 0)
        {
            printf("%d is odd and 5 is not a prime factor\n\n", d);
        }
        else if (myPrimeFactor(d, 5) == 1 && myPrimeFactor(d, 2) == 0)
        {
            printf("%d is odd and 5 is a prime factor\n\n", d);
        }
        else if (myPrimeFactor(d, 5) == 1 && myPrimeFactor(d, 2) == 1)
        {
            printf("%d is even and 5 is a prime factor\n\n", d);
        }
        else if (myPrimeFactor(d, 5) == 0 && myPrimeFactor(d, 2) == 1)
        {
            printf("%d is even and 5 is not a prime factor\n\n", d);
        }
    } //if funksjon som bruker ''myPrimeFactor'' for å si om 5 er primfaktor, derreter for å se om det er par/oddetall
}

int myLog2(unsigned int n)
{
    if (n == 0)
        return 0;

    int msb;
    n >>= 1;
    for (msb = 0; n != 0; msb++)
    {
        n >>= 1;
    }
    return msb;
}

void reverseString(char string[])
{

    int Arraysize = strlen(string);
    for (int i = Arraysize - 1; i >= Arraysize / 2; i--)
    {
        char temp = string[i];
        string[i] = string[Arraysize - i - 1];
        string[Arraysize - i - 1] = temp;
    }
}

int main()
{
    while (1)
    {
        printf("Choose function\n1: Compare values\n2: Star pattern\n3: MyPrimeFactor\n4: Odd or Even\n5: Most Significant Bit/log2\n6: Reverse string\n");
        int n;
        scanf("%i", &n);

        if (n == 1)
        {
            int i, d;
            printf("Compare 2 numbers (x y)\n");
            scanf("%i %i", &i, &d);
            compare_values(i, d);
        }

        if (n == 2)
        {
            printf("How many rows?\n");
            int n;
            scanf("%i", &n);
            myTriangles(n);
        }

        if (n == 3)
        {
            printf("state number and primefactor: ");
            int n, p;
            scanf("%d %d", &n, &p);
            int result = myPrimeFactor(n, p);
            if (result == 1)
            {
                printf("%d is a primefactor \n\n", p);
            }
            else
            {
                printf("%d is not a primefactor \n\n", p);
            }
        }

        if (n == 4)
        {
            printf("Set startnumber and endnumber. \n");
            int start, end;
            scanf("%d %d", &start, &end);
            myNumbers(start, end);
        }

        if (n == 5)
        {
            int n;
            printf("Assign n for \"n(log2n)\"\n");
            scanf("%d", &n);
            printf("%d is the most significant bit\n\n", myLog2(n));
        }

        if (n == 6)
        {
            printf("What sentence/word would you like to reverse?\n\n");
            char temp;
            scanf("%c", &temp); //cleaner buffer, funnet på nett. Hadde problemer med SPACE i stringen.
            char Array[100];
            scanf("%[^\n]", Array);
            reverseString(Array);
            printf("%s\n\n",Array);
            
        }

        if (n >= 7)
        {
            return 0;
        }
    }
}
