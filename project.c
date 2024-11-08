#include <stdio.h>
#include <stdlib.h>

// Function to add two 3x3 matrices
void add(int m[3][3], int n[3][3], int sum[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = m[i][j] + n[i][j];
        }
    }
}

// Function to subtract two 3x3 matrices
void subtract(int m[3][3], int n[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = m[i][j] - n[i][j];
        }
    }
}

// Function to multiply two 3x3 matrices
void multiply(int m[3][3], int n[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0; // Initialize the result cell to 0
            // Calculate product
            for (int k = 0; k < 3; k++) {
                result[i][j] += m[i][k] * n[k][j];
            }
        }
    }
}

// Function to find the transpose of a 3x3 matrix
void transpose(int matrix[3][3], int trans[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            trans[j][i] = matrix[i][j]; // Transpose operation
        }
    }
}

// Function to display a 3x3 matrix
void display(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n"); // New line after each row
    }
}

// Main function
int main() {
    // Declare matrices
    int a[3][3] = { {5, 6, 7}, {8, 9, 10}, {3, 1, 2} };
    int b[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int c[3][3];

    // Print both matrices
    printf("First Matrix:\n");
    display(a);
    printf("Second Matrix:\n");
    display(b);

    // Variable to take choice
    int choice;

    // Menu-driven loop
    do {
        // Menu to choose the operation
        printf("\nChoose the matrix operation:\n");
        printf("1. Addition\n");
        printf("2. Multiplication\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add(a, b, c);
                printf("Sum of matrices:\n");
                display(c);
                break;

            case 2:
                multiply(a, b, c);
                printf("Multiplication of matrices:\n");
                display(c);
                break;

            case 3:
                printf("Thank you.\n");
                exit(0);

            default:
                printf("Invalid input. Please enter the correct input.\n");
        }
    } while (1);

    return 0;
}
