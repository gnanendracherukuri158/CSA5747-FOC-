#include <stdio.h>
#include <math.h>

int octal_to_decimal(int octal_num) {
    int decimal_num = 0, i = 0;
    while (octal_num != 0) {
        decimal_num += (octal_num % 10) * pow(8, i++);
        octal_num /= 10;
    }
    return decimal_num;
}

int main() {
    int octal_num;
    printf("Enter an octal number: ");
    scanf("%d", &octal_num);
    printf("Decimal representation of %d: %d", octal_num, octal_to_decimal(octal_num));
    return 0;
}
