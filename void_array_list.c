#include "void_array_list.h"

struct array_list {
    int len;
    int maxlen;
    void **data;
    PrintFunction print;
};

List list_create(PrintFunction pfn) {
    List l = malloc(sizeof(struct array_list));
    l->len = 0;
    l->maxlen = 1;
    l->data = malloc(sizeof(void*));
    l->print = pfn;
    return l;
}

void list_destroy(List l) {
    free(l->data);
    free(l);
}

void list_add(List l, void *element) {
    l->len++;
    if (l->len == l->maxlen) {
        l->maxlen = l->len*2;
        l->data = realloc(l->data, l->maxlen*sizeof(void*));
    }

    l->data[l->len-1] = element;
}

void list_print(List l) {
    for (int i = 0; i < l->len; i++) {
        l->print(l->data[i]);
        printf(" ");
    }
    printf("\n");
}