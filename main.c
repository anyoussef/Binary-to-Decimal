#include <stdio.h>
#include <string.h>


long convertToDecimal(long binary){

    int base = 1;
    long decimal = 0;
    long temp = binary;

    while (temp != 0){
        int currDigit = temp % 10;
        temp /= 10;
        decimal += currDigit * base;
        base *= 2;
    }

    return decimal;

}

int main() {

    long binary;

    printf("Input a binary number to convert: ");
    scanf("%ld", &binary);
    printf("Binary: %ld\n", binary);
    printf("Decimal: %ld\n", convertToDecimal(binary));


    return 0;
}