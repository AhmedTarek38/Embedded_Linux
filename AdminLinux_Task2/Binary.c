#include <stdio.h>


int binary_search(int *arr,int size,int target)
 {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid; // Element found, return index
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Element not found
}

int main() {
    // Declare an array (assumes it's sorted)
    int my_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   

    // Element to search
    int target_element = 7;

    // Call binary search and print the output
    int result = binary_search(my_array,10 , target_element);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target_element, result);
    } else {
        printf("Element %d not found in the array.\n", target_element);
    }

    return 0;
}



