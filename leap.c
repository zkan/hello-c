#include <stdio.h>
#include <stdlib.h>

int isLeapYear(int year) {
    if (year % 400 == 0) {
        return 1;
    } else if (year % 100 == 0) {
        return 0;
    } else if (year % 4 == 0) {
        return 1;
    }
    return 0;
}

int main(void) {
    int i, *years;

    years = (int*) malloc(4 * sizeof(int));
    if (years == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }
    years[0] = 1997;
    years[1] = 1996;
    years[2] = 1900;
    years[3] = 2000;

    for (i = 0; i < 4; i++) {
        if (isLeapYear(years[i]) == 1) {
            printf("Year %d is a leap year.\n", years[i]);
        } else {
            printf("Year %d is NOT a leap year.\n", years[i]);
        }
    }

    int array[4] = {1, 2, 3, 4};
    for (i = 0; i < 4; i++) {
        printf("%d\n", array[i]);
    }

    free(years);

    return 0;
}
