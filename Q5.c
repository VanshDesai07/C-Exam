#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

void inputBookDetails(struct Book books[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for book %d:\n", i + 1);

        printf("Title: ");
        getchar();  
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0'; 

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0'; 

        printf("Price: ");
        scanf("%f", &books[i].price);

        printf("\n");
    }
}

void displayBookDetails(struct Book books[], int n) {
    printf("Details of Books:\n");
    for (int i = 0; i < n; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book books[n];

    inputBookDetails(books, n);

    displayBookDetails(books, n);

    return 0;
}