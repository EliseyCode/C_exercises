/* while2.c -- semicolon */
#include <stdio.h>

int main(void) {
    int n = 0;

    while (n++ < 3);
    printf("n равно %d\n", n);
    printf("Это все, что делает данная программа.\n");

    return 0;
}