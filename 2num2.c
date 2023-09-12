#include <stdio.h>
#include <string.h>

int main() {
    int x, y;
    char input[30], input2[30];

    while (1) {
        printf("Enter an integer or type 'exit' to end: ");

        if (fgets(input, sizeof(input), stdin) == NULL || strcmp(input, "exit\n") == 0) {
            break;
        }

        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        } else {
            printf("Invalid input. Please enter an integer or type 'exit' to end.\n");
            continue;
        }

        if (sscanf(input, "%d", &x) != 1) {
            printf("Invalid input. Please enter an integer or type 'exit' to end.\n");
            continue;
        }
        
        if (sscanf(input, 30, "%d", &x) ==1) {
            break;
        }
    }

    while (1) {
        printf("\nEnter a second integer or type 'exit' to end: ");

        if (fgets(input2, sizeof(input2), stdin) == NULL || strcmp(input2, "exit\n") == 0) {
            return 0;
        }

        size_t len2 = strlen(input2);
        if (len2 > 0 && input2[len2 - 1] == '\n') {
            input2[len2 - 1] = '\0';
        } else {
            printf("Invalid input. Please enter an integer or type 'exit' to end.\n");
            continue;
        }

        if (sscanf(input2, "%d", &y) != 1) {
            printf("Invalid input. Please enter an integer or type 'exit' to end.\n");
            continue;
        }

        printf("The two integers you entered are %d and %d.\n", x, y);
        break;
    }

    return 0;
}
