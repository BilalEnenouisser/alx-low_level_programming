#include <stdio.h>
#include <stdbool.h>

// A function to check if a number is palindrome
bool isPalindrome(int n)
{
    // Store the number in a temporary variable
    int temp = n;

    // Reverse the number
    int rev = 0;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    // Return true if the number is equal to its reverse
    return (n == rev);
}

// A function to find the largest palindrome made from the product of two 3-digit numbers
int largestPalindrome()
{
    // Initialize the maximum product
    int max = 0;

    // Loop through all possible pairs of 3-digit numbers
    for (int i = 999; i >= 100; i--)
    {
        for (int j = i; j >= 100; j--)
        {
            // Calculate the product
            int prod = i * j;

            // If the product is palindrome and greater than the current maximum, update the maximum
            if (isPalindrome(prod) && prod > max)
            {
                max = prod;
            }
        }
    }

    // Return the maximum product
    return max;
}

// The main function
int main()
{
    // Find the largest palindrome
    int result = largestPalindrome();

    // Save the result in the file 102-result
    FILE *fp = fopen("102-result", "w");
    fprintf(fp, "%d", result);
    fclose(fp);

    // Print the result to the standard output
    printf("%d\n", result);

    // Return 0 to indicate success
    return 0;
}
