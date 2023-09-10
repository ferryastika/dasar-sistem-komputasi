#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
     printf("\n");
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("\n");
    printf("SHRT_MAX    :   %hi\n", SHRT_MAX);
    printf("SHRT_MIN    :   %hi\n", SHRT_MIN);
    printf("\n");
    printf("USHRT_MAX   :   %hu\n", USHRT_MAX);
    printf("\n");
    printf("INT_MAX     :   %i\n", INT_MAX);
    printf("INT_MIN     :   %i\n", INT_MIN);
    printf("\n");
    printf("UINT_MAX    :   %lu\n", UINT_MAX);
    printf("\n");
    printf("LONG_MAX    :   %ld\n", LONG_MAX);
    printf("LONG_MIN    :   %ld\n", LONG_MIN);
    printf("\n");
    printf("ULLONG_MAX   :   %llu\n", ULLONG_MAX);
    

    return 0;
}