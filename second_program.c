#include <stdio.h>
#include <string.h>

// Function to convert binary to decimal
int binaryToDecimal(char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += 1 << (length - i - 1);
        }
    }
    
    return decimal;
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimal) {
    char hex[20];
    int i = 0;
    
    while (decimal != 0) {
        int temp = decimal % 16;
        
        if (temp < 10) {
            hex[i] = temp + '0';
        } else {
            hex[i] = temp + 'A' - 10;
        }
        
        decimal = decimal / 16;
        i++;
    }
    
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    char binary[65]; // Maximum 64-bit binary number
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    // Convert binary to decimal
    int decimal = binaryToDecimal(binary);
    
    // Convert decimal to hexadecimal
    decimalToHexadecimal(decimal);
    
    return 0;
}
