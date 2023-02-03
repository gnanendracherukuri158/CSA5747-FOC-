#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    int length = strlen(str);
    int i;
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

void addBinary(char* a, char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    int len = (len_a > len_b) ? len_a : len_b;
    reverse(a);
    reverse(b);
    char result[len + 1];
    int carry = 0;
    int i;
    for (i = 0; i < len; i++) {
        int sum = carry;
        if (i < len_a) {
            sum += a[i] - '0';
        }
        if (i < len_b) {
            sum += b[i] - '0';
        }
        result[i] = (sum % 2) + '0';
        carry = sum / 2;
    }
    if (carry) {
        result[len] = '1';
        len++;
    }
    result[len] = '\0';
    reverse(result);
    printf("Result of binary addition: %s\n", result);
}

int main() {
    char a[20];
    char b[20];
    printf("Enter first binary number: ");
    scanf("%s", a);
    printf("Enter second binary number: ");
    scanf("%s", b);
    addBinary(a, b);
    return 0;
}

