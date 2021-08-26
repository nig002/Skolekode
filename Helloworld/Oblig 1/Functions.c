#include <stdio.h>
#include <string.h>

    void
    compare_values(int x, int y)
{
    if (x > y)
        printf("%i is greater than %i \n\n", x, y); // verdiene man kaller på "%i", bestemmer rekkefølgen etter komma. Den først %i vil være x.
    else if (x < y)
        printf("%i is not greater than %i \n\n", x, y);
    else
        printf("%i is equal to %i\n\n", x, y);
}

void myTriangles(int numlines)
{
    for (int i = 1; i <= numlines; i++) //velger hvor mange linjer nedover trekanten skal gå
    {
        for (int j = 1; j <= i; j++) //Her velges hvor langt bortover den skal gå per ''i'' linje
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

int myPrimeFactor(int number, int primeFactor)
{
    if (number % primeFactor == 0) //kjører modulo, som viser om det er rest eller ikke.
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

int myLog2(unsigned int n) //unsigned betyr at verdien ikke kan være negativ
{
    if (n == 0) //Hvis man putter inn 0, så får man 0.
        return 0;

    int msb;
    n >>= 1;                     //<< eller >> betyr flytting på bitverdi.
    for (msb = 0; n != 0; msb++) //her sier jeg at hver gang n ikke er null så flyttes den et hakk til høyre på bitverdien. Den teller dette og sier hvor mange ganger den ble flyttet til høyre som da tilsier MSB
    {
        n >>= 1;
    }
    return msb;
}

void reverseString(char string[])
{
    int Arraysize = strlen(string);                      //kjører "strlen" får å lese lengden på stringen.
    for (int i = Arraysize - 1; i >= Arraysize / 2; i--) //arraysize er lengden på stringen din, men den har en "nullterminator" som er på siste indeks. Derfor er int i = arraysize -1
    {                                                    //derretter så kjører det så lenge i er større eller lik arraysize/2. Hvis den er det så går i-1 gjennom
        char temp = string[i];                           //her setter jeg at temp er = string[i], altså array verdien.
        string[i] = string[Arraysize - i - 1];     //lagre verdi "char temp", så flytter jeg string i til = "string[Arraysize - i - 1]". Altså vi setter indeksen til en annen indeks posisjon
        string[Arraysize - i - 1] = temp;          // så flytter vi den andre indeksverdien til der string i var.
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
            char Array[100];    //setter en "lengde" som array kan bruke
            scanf("%[^\n]", Array);
            reverseString(Array);
            printf("%s\n\n", Array);
        }

        if (n >= 7)
        {
            return 0;
        }
    }
}
