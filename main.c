#include <stdio.h>
#include <stdbool.h>

bool isNumber(const char input[]);

int main() {
    char input[50];

    printf("Enter a number: ");
    scanf("%s", input);
    if(!isNumber(input)) {
        printf("Invalid input!\n");
        return 1;
    }
    printf("%s is a number\n", input);

}

bool isNumber(const char input[]) {
    int i = 0;
    bool result = true;

    while(input[i] != '\0') {
        if(input[i] < '0' || input[i] > '9') {
            result = false;
            break;
        }
        i++;
    }

    return result;
}