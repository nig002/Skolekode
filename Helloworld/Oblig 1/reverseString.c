#include <stdio.h>
void reverseString(char string[])

{

    int Arraysize = strlen(string);
    for (int i = Arraysize - 1; i >= Arraysize/2; i--)
    {
        printf("%s %d %d\n", string, i, Arraysize - i - 1);
    char temp=string[i];
    string[i] = string[Arraysize - i - 1];
    string[Arraysize - i - 1] = temp;
    }

}
int main()
{
    char Array[] = "ABBA";
    reverseString(Array);
    printf(Array);  
}