#include <stdio.h>

int arr[20];
int j = 0;  // Keeps track of the number of inserted elements

// INSERTION
void insertion() {
    if (j >= 20) {
        printf("Array is full. Cannot insert more elements.\n");
        return;
    }

    printf("Enter the number of elements to insert: ");
    int n, i;
    scanf("%d", &n);

    if (j + n > 20) {
        printf("Not enough space to insert %d elements. Only %d slots left.\n", n, 20 - j);
        return;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[j]);  // Correct index: insert at current end
        j++;
    }
    printf("Elements inserted successfully.\n");
}

// DELETION
void deletion() {
    if (j == 0) {
        printf("Array is empty. Cannot delete elements.\n");
        return;
    }

    int pos;
    printf("Enter the position of the element to delete (0 to %d): ", j - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= j) {
        printf("Invalid position.\n");
        return;
    }

    int temp = arr[pos];

    // Shift elements left
    for (int i = pos; i < j - 1; i++) {
        arr[i] = arr[i + 1];
    }
    j--;  // Decrease count
    printf("Element %d at position %d deleted successfully.\n", temp, pos);
}

// TRAVERSAL
void traversal() {
    if (j == 0) {
        printf("Array is empty. Nothing to traverse.\n");
        return;
    }

    printf("The elements in the array are:\n");
    for (int i = 0; i < j; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

// SEARCHING
void searching() {
    if (j == 0) {
        printf("Array is empty. Nothing to search.\n");
        return;
    }

    int target;
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < j; i++) {
        if (arr[i] == target) {
            printf("Element %d found at position %d.\n", target, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", target);
    }
}

// MAIN
int main() {
    int choice;
    do {
        printf("\n---------------------------\n");
        printf("Array Operations Menu:\n");
        printf("1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Traversal\n");
        printf("4. Searching\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertion();
                break;
            case 2:
                deletion();
                break;
            case 3:
                traversal();
                break;
            case 4:
                searching();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}
