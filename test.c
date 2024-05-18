#include <stdio.h>

int main() {
    // Test case 1: Valid input within limit
    printf("Test case 1: Valid input within limit\n");
    freopen("input1.txt", "w", stdout);
    printf("5\n1 2 3 4 5\n2 3 4 5 6\n3 4 5 6 7\n4 5 6 7 8\n5 6 7 8 9\n");

    // Test case 2: Too many vertices
    printf("\nTest case 2: Too many vertices\n");
    freopen("input2.txt", "w", stdout);
    printf("1001\n");

    // Test case 3: Negative value
    printf("\nTest case 3: Negative value\n");
    freopen("input3.txt", "w", stdout);
    printf("3\n-1 2 3\n4 5 6\n7 8 9\n");

    // Test case 4: Non-integer input
    printf("\nTest case 4: Non-integer input\n");
    freopen("input4.txt", "w", stdout);
    printf("2\na b c\n1 2 3\n");

    // Test case 5: Too few values in a line
    printf("\nTest case 5: Too few values in a line\n");
    freopen("input5.txt", "w", stdout);
    printf("3\n1 2\n4 5 6\n7 8 9\n");

    // Test case 6: Too many values in a line
    printf("\nTest case 6: Too many values in a line\n");
    freopen("input6.txt", "w", stdout);
    printf("3\n1 2 3 4\n4 5 6\n7 8 9\n");

    return 0;
}
