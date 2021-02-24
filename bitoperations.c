#include <stdio.h>

void bin_print(unsigned int i)
{
    // number of bits in an integer.
    int j = sizeof(unsigned int);

    // Temporary variable
    int k;
    // loop over the number of bits in i, left to right
    for (j--; j >= 0; j--)
    {
        // pick out the jth bit of i
        k = ((1 << j) & i) ? 1 : 0;
        // print k
        printf("%d", k);
    }
}
// standard main signature
int main(int argc, char *argv[])
{

    // set i to a literal value
    unsigned int i = 0xffffffff; // 0xf1; // 241 // 4294967295

    // what we are printing
    printf("Original: ");
    // print i in binary
    bin_print(i);
    // End line
    printf("\t%x\t%u\n", i, i);

    // 32
    int j = sizeof(unsigned int) * 8;

    for (j--; j >= 0; j--)
    {
        // what the operation is
        // 1 shifted left j times
        bin_print(1 << j);
        printf("\n");
        // i
        bin_print(i);
        printf("\n");
        printf("------------------------------- &\n");
        // (1 shifted left j times) bitwise logical and i.
        bin_print((1 << j) & i);
        printf("\n\n");
    }
    // Everything is ok
    return 0;
}