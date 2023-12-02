#include <stdio.h>
#include <string.h>

// Define the structure for the book
struct Book {
    int accessionNumber;
    char title[50];
    char author[50];
    float price;
    int isIssued; // 0 for not issued, 1 for issued
};

// Function to add book information
void addBook(struct Book library[], int *bookCount) {
    printf("Enter Accession Number: ");
    scanf("%d", &library[*bookCount].accessionNumber);
    printf("Enter Title: ");
    scanf("%s", library[*bookCount].title);
    printf("Enter Author: ");
    scanf("%s", library[*bookCount].author);
    printf("Enter Price: ");
    scanf("%f", &library[*bookCount].price);
    printf("Is the book issued? (0 for No, 1 for Yes): ");
    scanf("%d", &library[*bookCount].isIssued);

    (*bookCount)++;
    printf("Book added successfully!\n");
}

// Function to display book information
void displayBooks(struct Book library[], int bookCount) {
    if (bookCount == 0) {
        printf("No books in the library.\n");
    } else {
        for (int i = 0; i < bookCount; i++) {
            printf("\nBook Information:\n");
            printf("Accession Number: %d\n", library[i].accessionNumber);
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("Price: %.2f\n", library[i].price);
            printf("Is Issued: %s\n", (library[i].isIssued == 1) ? "Yes" : "No");
        }
    }
}

// Function to list books of a given author
void listBooksByAuthor(struct Book library[], int bookCount) {
    char author[50];
    printf("Enter Author's name: ");
    scanf("%s", author);

    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].author, author) == 0) {
            printf("%s\n", library[i].title);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found for author %s.\n", author);
    }
}

// Function to list title by accession number
void listTitleByAccessionNumber(struct Book library[], int bookCount) {
    int accessionNumber;
    printf("Enter Accession Number: ");
    scanf("%d", &accessionNumber);

    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (library[i].accessionNumber == accessionNumber) {
            printf("Title for Accession Number %d: %s\n", accessionNumber, library[i].title);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No book found for Accession Number %d.\n", accessionNumber);
    }
}

// Function to list count of books in the library
void listCountOfBooks(int bookCount) {
    printf("Total number of books in the library: %d\n", bookCount);
}

// Function to list books in the order of accession number
void listBooksByAccessionOrder(struct Book library[], int bookCount) {
    // Bubble sort books based on accession number
    for (int i = 0; i < bookCount - 1; i++) {
        for (int j = 0; j < bookCount - i - 1; j++) {
            if (library[j].accessionNumber > library[j + 1].accessionNumber) {
                // Swap
                struct Book temp = library[j];
                library[j] = library[j + 1];
                library[j + 1] = temp;
            }
        }
    }

    printf("\nBooks in the order of Accession Number:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("Accession Number: %d, Title: %s\n", library[i].accessionNumber, library[i].title);
    }
}

int main() {
    struct Book library[100]; // Assuming a maximum of 100 books in the library
    int bookCount = 0;
    int choice;

    while (1) {
        printf("\nLibrary Management System Menu:\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title specified by accession number\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("0. Exit\n");

        printf("Enter your choice (0-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(library, &bookCount);
                break;
            case 2:
                displayBooks(library, bookCount);
                break;
            case 3:
                listBooksByAuthor(library, bookCount);
                break;
            case 4:
                listTitleByAccessionNumber(library, bookCount);
                break;
            case 5:
                listCountOfBooks(bookCount);
                break;
            case 6:
                listBooksByAccessionOrder(library, bookCount);
                break;
            case 0:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 0 and 6.\n");
        }
    }

    return 0;
}
