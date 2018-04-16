#include "print_functions.h"


void print_char(void *d) {
    char *c = d;
    printf("%c", *c);
}

void print_int(void *n) {
    int *d = n;
    printf("%d", *d);
}