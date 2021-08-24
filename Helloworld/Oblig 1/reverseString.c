#include <stdio.h>
void reverseString(char string[])

{

    int Arraysize = strlen(string);
    for (int i = Arraysize - 1; i >= Arraysize/2; i--)
    {
    char temp=string[i];
    string[i] = string[Arraysize - i - 1];
    string[Arraysize - i - 1] = temp;
    }

}
int main()
{
    printf("What sentence/word would you like to reverse?\n\n");
        char Array[100];
        fgets(Array, sizeof Array, stdin);
        reverseString(Array);
        printf(Array);
}