#include "armstrong_numbers.h"
#include <stdlib.h>
#include <math.h>
int digitCount (int num) {
    int num_cpy = num;
    int i = 0;
    while (num_cpy > 0) {
        num_cpy /= 10;
        i++;
    }
    return i;
}
int* intToArray (int num, int digits) {
    int * result = malloc(sizeof(int) * digits);
    int i = 0;
    while (num > 0) {
        result[i] = num % 10;
        num /= 10;
        i++;
    }
    return result;
}
int isArmstrongNumber (int num) {
    int count = digitCount(num);
    int * digits = intToArray(num, count);
    int armstrong_sum = 0;
    for (int i = 0; i < count; i++) {
        armstrong_sum += pow(digits[i], count);
    }
    if (num == armstrong_sum) {
    return 1;
    }
    return 0;
}
