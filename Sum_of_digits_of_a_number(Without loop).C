/*Program to calculate sum of digits of a number (without loop)*/
#include <stdio.h>
int main() {
    int num = 123, sum = 0;
    sum = (num / 100) + ((num / 10) % 10) + (num % 10);
    printf("Sum of digits: %d\n", sum);
    return 0;
}