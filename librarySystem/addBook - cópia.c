#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 10 // Maximum number of books allowed

int main() {
    char titles[MAX_BOOKS][100];
    char authors[MAX_BOOKS][100];
    char genres[MAX_BOOKS][50];
    int totalBooks = 0;
    char option;

    printf("=== Library Management System ===\n");

    // Menu Loop
    do {
        printf("\nMenu:\n");
        printf("a. Add a new Book\n");
        printf("b. See all Books\n");
        printf("c. Search for a book by title\n");
        printf("y. Exit\n");
        printf("Choose an Option: ");
        scanf(" %c", &option); 

        if (option == 'a') {
            if (totalBooks < MAX_BOOKS) {
                printf("Enter the title of the book: ");
                scanf(" %[^\n]", titles[totalBooks]);

                printf("Enter the author's name: ");
                scanf(" %[^\n]", authors[totalBooks]);

                printf("Enter the genre of the book: ");
                scanf(" %[^\n]", genres[totalBooks]);

                printf("Book added successfully!\n");
                printf("Details:\n");
                printf("Title: %s\n", titles[totalBooks]);
                printf("Author: %s\n", authors[totalBooks]);
                printf("Genre: %s\n", genres[totalBooks]);

                totalBooks++;
            } else {
                printf("Book limit reached! (MAXIMUM %d BOOKS)\n", MAX_BOOKS);
            }
        } else if (option == 'b') {
            if (totalBooks == 0) {
                printf("No books registered yet.\n");
            } else {
                printf("Books in the library:\n");
                for (int i = 0; i < totalBooks; i++) {
                    printf("%d. Title: %s, Author: %s, Genre: %s\n",
                           i + 1, titles[i], authors[i], genres[i]);
                }
            }
        } else if (option == 'c') {
            if (totalBooks == 0) {
                printf("No books to fetch.\n");
            } else {
                char search[100];
                int found = 0;
                printf("Enter the title of the book you want to search for: ");
                scanf(" %[^\n]", search);

                //Pointers content 
                for (int i = 0; i < totalBooks; i++) {
                    if (strcmp(titles[i], search) == 0) {
                        char *titlePtr = titles[i];
                        char *authorPtr = authors[i];
                        char *genrePtr = genres[i];
                        printf("Book Found!\n");
                        printf("Title: %s\n", titlePtr);
                        printf("Author: %s\n", authorPtr);
                        printf("Genre: %s\n", genrePtr);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Book not Found.\n");
                }
            }
        } else if (option == 'y') {
            printf("Closing the program. See you soon!\n");
        } else {
            printf("Invalid option. Please try again.\n");
        }

    } while (option != 'y');

    return 0;
}
