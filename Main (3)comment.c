#include <stdio.h>

int main(int argc, char **argv) {
    // Define an array of integers with 3 elements
    int arr[3] = {1, 2, 3};
    
    // Create a pointer to an integer and initialize it with the address of the second element of the array
    int *int_ptr = &arr[1];
    
    // Create a pointer to a character and explicitly cast the integer pointer to a character pointer
    char *char_ptr = (char *) int_ptr;
    
    // Print the original values of the integer pointer and the character pointer
    printf("int_ptr val: %p\n", int_ptr);
    printf("char_ptr val: %p\n", char_ptr);
    printf("____________________________ \n");
    
    // Increment the integer pointer and the character pointer by one
    int_ptr++;
    char_ptr++;
    
    // Print the new values of the integer pointer and the character pointer
    printf("int_ptr1 val: %p\n", int_ptr);
    printf("char_ptr1 val: %p\n", char_ptr);
    printf("____________________________ \n");
    
    // Increment the integer pointer and the character pointer by two
    int_ptr += 2;
    char_ptr += 2;
    
    // Print the final values of the integer pointer and the character pointer
    printf("int_ptr2 val: %p\n", int_ptr);
    printf("char_ptr2 val: %p\n", char_ptr);
    printf("____________________________ \n");
    
    return 0;
}