#include "interface.h"

void run() {
    List list = NULL;
    while (true) {
        printf("Welcome!\n0.\tExit\n1.\tNew List\n2.\tEdit Current List\n3.\tPrint List\n\n");
        int response = 0;
        int f = scanf("%d", &response);
        if (f == 0 || response == 0) break;
        
        if (response == 1) {
            printf("What type? Hann is sad about exams and other things\n");
            printf("Shane is sad too but he doesn't show it because he's a man and men don't have\nemotions\n");
            printf("1.char\n2.int\n\n");
            int type = 0;
            int g = scanf("%d", &type);
            if (type == 1) {
                list = list_create(print_char);
            }
            else if (type == 2) {
                list = list_create(print_int);
            }
        }
    }
    printf("Goodbye!");
}