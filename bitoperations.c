#include <stdio.h>

int main(int argc, char *argv[]) {

int i = 241;

printf("Hex: %X\n",i);
printf("dec: %d\n",i);

printf("Size of i: %d\n", sizeof(i));
printf("Size of int: %d\n", sizeof(int));
printf("Size of char: %d\n", sizeof(char));

char c = 41;

printf("c in char is : %c\n",c);
printf("c in int is : %d\n",c);

int j = 1000000000;

printf("J in int is : %d\n",j);
printf("J in char is : %c\n",j);
printf("J in int from char is : %d\n",(char) j);

    return 0;
}