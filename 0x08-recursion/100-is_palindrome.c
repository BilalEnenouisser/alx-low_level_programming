#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
/**
 * is_alphanumeric - Check if a character is alphanumeric
 * @c: The character to check
 * Return: true if alphanumeric, false otherwise
 */
bool is_alphanumeric(char c) {
return isalnum(c);
}
/**
 * is_equal_ignore_case - Check if two characters are equal ignoring case
 * @c1: First character
 * @c2: Second character
 * Return: true if equal, false otherwise
 */
bool is_equal_ignore_case(char c1, char c2) {
return tolower(c1) == tolower(c2);
}
/**
 * is_palindrome_recursive - Check if a string is a palindrome recursively
 * @s: The string to check
 * @left: The left index of the substring to check
 * @right: The right index of the substring to check
 * Return: true if it's a palindrome, false otherwise
 */
bool is_palindrome_recursive(char *s, int left, int right) {
if (left >= right) {
return true;
}
while (left < right && !is_alphanumeric(s[left])) {
left++;
}
while (left < right && !is_alphanumeric(s[right])) {
right--;
}
if (is_equal_ignore_case(s[left], s[right])) {
return is_palindrome_recursive(s, left + 1, right - 1);
}
return false;
}
/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to check
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int is_palindrome(char *s) {
int length = 0;
int left = 0;
int right;
while (s[length] != '\0') {
length++;
}
right = length - 1;
return is_palindrome_recursive(s, left, right) ? 1 : 0;
}
int main(void) {
int r;
r = is_palindrome("level");
printf("%d\n", r);
r = is_palindrome("redder");
printf("%d\n", r);
r = is_palindrome("test");
printf("%d\n", r);
r = is_palindrome("step on no pets");
printf("%d\n", r);
return (0);
}
