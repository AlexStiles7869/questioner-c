#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_OPTIONS 5

void update_options(const char* options[], int num_options, int selected_option) {
    printf("\033[0G"); // Move cursor to the beginning of the line

    for (int i = 0; i < num_options; ++i) {
        if (i == selected_option) {
            printf("[%s] ", options[i]);
        } else {
            printf("%s ", options[i]);
        }
    }
    fflush(stdout); // Flush the output buffer to update immediately
}

int option_example() {
    const char* options[MAX_OPTIONS] = {
        "Option 1",
        "Option 2",
        "Option 3",
        "Option 4",
        "Exit"
    };
    int num_options = sizeof(options) / sizeof(options[0]);
    int selected_option = 0;

    update_options(options, num_options, selected_option);

    while (1) {
        int ch = _getch();
        if (ch == 13) { // Enter key
            if (selected_option == num_options - 1) {
	  	printf("\n");
		    break; // Exit option selected, break the loop
            } else {
                printf("\nSelected: %s\n", options[selected_option]);
                break;
		// Put your code here to perform an action for each option
            }
        } else if (ch == ' ' || ch == 9) { // Space or Tab key, switch to the next option
            selected_option = (selected_option + 1) % num_options;
            update_options(options, num_options, selected_option);
        }
    }

    printf("Exiting the program.\n"); // Add a newline for the final output
    return 0;
}

