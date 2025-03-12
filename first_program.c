#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(char binary[]) {
    int decimal = 0;
    int length = strlen(binary);
    
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        } else if (binary[i] != '0') {
            printf("Invalid binary number!\n");
            return -1; // Return -1 to indicate an error
        }
    }
    
    return decimal;
}

int main() {
    char binary[65]; // 64 bits + null terminator
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    int decimal = binaryToDecimal(binary);
    
    if (decimal != -1) {
        printf("Decimal equivalent: %d\n", decimal);
    }
    
    return 0;
}
