#include <stdio.h>
int myPrimeFactor(int number, int primeFactor) //kaller funksjonen myPrimeFactor med 2 argumenter
{
    if (number % primeFactor == 0) //if funksjon for som sier modulo funksjonen gir svar 0 eller ikke.
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
            printf("%d is odd and 5 is not a prime factor\n", d);
        }
        else if (myPrimeFactor(d, 5) == 1 && myPrimeFactor(d, 2) == 0)
        {
            printf("%d is odd and 5 is a prime factor\n", d);
        }
        else if (myPrimeFactor(d, 5) == 1 && myPrimeFactor(d, 2) == 1)
        {
            printf("%d is even and 5 is a prime factor\n", d);
        }
        else if (myPrimeFactor(d, 5) == 0 && myPrimeFactor(d, 2) == 1)
        {
            printf("%d is even and 5 is not a prime factor\n", d);
        }
    }                                                                        //if funksjon som bruker ''myPrimeFactor'' for å si om 5 er primfaktor, derreter for å se om det er par/oddetall
}
int main()
{
    printf("Set startnumber and endnumber. \n");
    int start, end;
    scanf("%d %d", &start, &end); //scanf("format", & setter sted verdiene skal gå)
    myNumbers(start, end);  //kjører så funksjonen "myNumber" med verdiene vi satte i scanf.
}
