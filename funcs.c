#include <stdio.h>
#include <inttypes.h>

// defining own type 
// for 64 bits just change 32 to 64
#define WORD uint64_t
#define PF PRIX64
WORD Ch(WORD x,WORD y, WORD z) {
    // Bitwise And = &
    // Bitwise complement operator = ~
    // Bitwise Xor = ^
    return (x&y)^(~x&z);
}

int main(int argc, char *argv[])
{
    WORD x = 0xf0f0f0f0;
    WORD y = 0x0f0f0f0f;
    WORD z = 0xf0f0f0f0;

    WORD ans = Ch(x,y,z);

// PRIu32 to print 32bit unsigned int

    printf("Ch(%" PF ",%" PF ",%" PF ")=%" PF "\n", x,y,z,ans);

    return 0;
}