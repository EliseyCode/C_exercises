#include <stdio.h>
#include "hw1_lib.h"

int main(void) {
    double f_num;
    double s_num;

    printf("Enter two number to get min of them: ");

    scanf("%lf%lf", &f_num, &s_num);

    printf("minimum of %.2lf and %.2lf is %.2lf", f_num, s_num, get_min(&f_num, &s_num));

    return 0;
}


