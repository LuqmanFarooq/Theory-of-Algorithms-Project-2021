#include <stdio.h>

void bin_print(unsigned int i)
{
    // number of bits in an integer.
    int j = (sizeof(unsigned int) * 8) - 1;

    // Temporary variable
    int k;
// loop over the number of bits in i
    for (j--; j >= 0; j--)
    {
        //
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
    printf("\t%x\t%d\n",i,i);

    for (int j = 0; j < 40; j++)
    {
        // what the operation is
        printf("%3u << %2d: ", i, j);
        // i shifted left j times
        bin_print(i << j);
        // End line
        printf("\n");
    }
    // Everything is ok
    return 0;
}