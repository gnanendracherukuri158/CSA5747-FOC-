#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int binaryToDecimal(char *binary)
{
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++)
    {
        if (binary[i] == '1')
        {
            decimal += 1 << (length - i - 1);
        }
    }
    return decimal;
}

char *decimalToBinary(int decimal)
{
    static char binary[33];
    binary[0] = '\0';
    while (decimal > 0)
    {
        strcat(binary, (decimal % 2 == 0) ? "0" : "1");
        decimal /= 2;
    }
    reverse(binary);
    return binary;
}

void binaryMultiplication(char *first, char *second)
{
    int decimalFirst = binaryToDecimal(first);
    int decimalSecond = binaryToDecimal(second);
    int decimalResult = decimalFirst * decimalSecond;
    char *binaryResult = decimalToBinary(decimalResult);
    printf("Binary Multiplication: %s * %s = %s\n", first, second, binaryResult);
}

int main()
{
    char first[33];
    char second[33];
    printf("Enter first binary number: ");
    scanf("%s", first);
    printf("Enter second binary number: ");
    scanf("%s", second);
    binaryMultiplication(first, second);
    return 0;
}

