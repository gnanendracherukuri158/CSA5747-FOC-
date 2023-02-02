#include <stdio.h>
#include <math.h>

int decimal_to_octal(int decimal_num) {
    int octal_num = 0, i = 0;
    while (decimal_num != 0) {
        octal_num += (decimal_num % 8) * pow(10, i++);
        decimal_num /= 8;
    }
    return octal_num;
}

int main() {
    int decimal_num;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);
    printf("Octal representation of %d: %d", decimal_num, decimal_to_octal(decimal_num));
    return 0;
}

