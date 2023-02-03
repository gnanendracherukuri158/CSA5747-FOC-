#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        ++i;
        binary /= 10;
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
