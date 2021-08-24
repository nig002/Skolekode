#include <stdio.h> 
int myLog2(unsigned int n)
{
    if (n == 0)
        return 0;
    printf("%d\n", n);

    int msb;
    n >>= 1;     
    for (msb = 0; n != 0; msb++)
    {
        n >>= 1;
    }
    return msb;
}

int main()
{
    int n;
        printf("Assign n for \"n(log2n)\"\n");
        scanf("%d", &n);
    printf("%d\n", myLog2(n));

}