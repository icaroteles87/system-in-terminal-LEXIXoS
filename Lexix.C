#include <stdio.h>
#include <stdbool.h>

int main() {
    int cases = 0;
    int num1, num2;
    int goBack;

    while (1) {
        switch (cases) {
            case 0:
                printf("Welcome to lexixOs :D \nWhat do you want? \n");
                printf("1 - Calculator\n2 - Summed Vector\n3 - Print Word\n4 - Matrix\n5 - Right Triangle\n6 - Alphabet\n0 - Exit");
                printf("\n");
                if (scanf("%d", &cases) != 1) {
                    printf("Invalid input. Returning to menu.\n");
                    // Clear input buffer
                    while (getchar() != '\n');
                    cases = 0;
                    break;
                }
                if (cases == 0) {
                    return 0;
                }
                break;
            case 1:
                printf("Calculator\nNumber 1 value: ");
                if (scanf("%d", &num1) != 1) {
                    printf("Invalid input. Returning to menu.\n");
                    while (getchar() != '\n');
                    cases = 0;
                    break;
                }
                printf("\n");
                printf("Number 2 value: ");
                if (scanf("%d", &num2) != 1) {
                    printf("Invalid input. Returning to menu.\n");
                    while (getchar() != '\n');
                    cases = 0;
                    break;
                }
                printf("\n");
                printf("Result: %d\n", num1 + num2);

                printf("Go back? (1 - Yes / 0 - No): ");
                if (scanf("%d", &goBack) != 1) {
                    printf("Invalid input. Returning to menu.\n");
                    while (getchar() != '\n');
                    cases = 0;
                    break;
                }

                if (goBack == 1) {
                    cases = 0;
                } else if (goBack != 0) {
                    printf("Invalid input. Returning to menu.\n");
                    cases = 0;
                }
                break;
            case 2:
                printf("Summed vector.\n");
                int vec[5];
                int sum = 0;
                printf("\n");
                for (int i = 0; i < 5; i++) {
                    printf("number value %d: ", i + 1);
                    if (scanf("%d", &vec[i]) != 1) {
                        printf("Invalid input. Returning to menu.\n");
                        while (getchar() != '\n');
                        cases = 0;
                        break;
                    }
//please support the system :D
                    sum += vec[i];
                }
                printf("\n");
                printf("Sum result: %d\n", sum);
                printf("Go back? (1 - Yes / 0 - No): ");
                if (scanf("%d", &goBack) != 1) {
                    printf("Invalid input. Returning to menu.\n");
                    while (getchar() != '\n');
                    cases = 0;
                    break;
                }

                if (goBack == 1) {
                    cases = 0;
                } else if (goBack != 0) {
                    printf("Invalid input. Returning to menu.\n");
                    cases = 0;
                }
                break;
            case 3:
                char word[10];
                printf("Enter a word (up to 9 characters): ");
                if (scanf("%9s", word) != 1) {
                    printf("Invalid input. Returning to menu.\n");
                    while (getchar() != '\n');
                    cases = 0;
                    break;
                }
                printf("\n");
                for (int i = 0; word[i] != '\0'; i++) {
                    printf("%c\n", word[i]);
                }
                cases = 0; // Return to menu
                break;
            case 4:
                int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        printf("%d ", matrix[i][j]);
                    }
                    printf("\n");
                }
//pls a need help
                cases = 0;
                break;
            case 5:
                int triangle = 0;
                printf("Enter the number of lines for the right triangle: ");
                scanf("%d", &triangle);

                for (int i = 1; i <= triangle; i++) {
                    for (int j = 1; j <= i; j++) {
                        printf("#");
                    }
                    printf("\n");
                }
                cases = 0;
                break;
            case 6:
                char alphabet[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
                int num = 0;
                printf("Enter a number from 1 to 26: ");
                scanf("%d", &num);
                if (num > 26) {
                    cases = 0;
                } else {
                    for (int i = 0; i < num; i++) {
                        printf("%c ", alphabet[i]);
                    }
                }
                printf("\n");
                cases = 0;
                break;
            default:
                printf("Invalid option. Returning to menu.\n");
                cases = 0;
                break;
        }
    }
    return 0;
}

//omg im a brazilian
