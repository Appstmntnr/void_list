#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct array_list;

typedef struct array_list* List;

typedef void (*PrintFunction) (void*asdf);

List list_create(PrintFunction pfn);

void list_destroy(List l);

void list_add(List l, void* element);

void list_print(List l);

void list_get(List l, int i);

void list_remove(List l, int i);

