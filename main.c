#include "void_array_list.h"
#include "print_functions.h"


int main() {
    List list = list_create(print_int);
    char c = 'c';
    int n = 100;
    list_add(list, &n);
    list_print(list);
    return 0;
}