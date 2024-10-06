#include <stdio.h>
#include <stdlib.h>

typedef struct book {
    char *title;
    double price;
    int pages;
    char *language;
    int weight_in_grams;
    int year;
    struct book *next;
} Book;

void book_new(Book *book, char *title, double price, int pages, char *language, int weight_in_grams, int year, Book *next) {
    book->title = title;
    book->price = price;
    book->pages = pages;
    book->language = language;
    book->weight_in_grams = weight_in_grams;
    book->year = year;
    book->next = next;
}

void book_print(Book *book) {
    printf("Title: %s\n", book->title);
    printf("Price: %.2lf\n", book->price);
    printf("Pages: %d\n", book->pages);
    printf("Language: %s\n", book->language);
    printf("Weigth(in grams): %d\n", book->weight_in_grams);
    printf("Year of publication: %d\n", book->year);
    printf("\n");
}

void books_print(Book *book) {
    while (book != NULL) {
        book_print(book);
        book = book->next;
    }
}

int main() {
    Book 
    *head = NULL, 
    *book1 = NULL, 
    *book2 = NULL, 
    *book3 = NULL, 
    *book4 = NULL, 
    *book5 = NULL, 
    *book6 = NULL, 
    *book7 = NULL,
    *book8 = NULL;

    book1 = (Book *) malloc(sizeof(Book));
    book2 = (Book *) malloc(sizeof(Book));
    book3 = (Book *) malloc(sizeof(Book));
    book4 = (Book *) malloc(sizeof(Book));
    book5 = (Book *) malloc(sizeof(Book));
    book6 = (Book *) malloc(sizeof(Book));
    book7 = (Book *) malloc(sizeof(Book));
    book8 = (Book *) malloc(sizeof(Book));

    book_new(book1, "Harry Potter and the Sorcerer’s Stone", 990, 499, "KZ", 120, 1997, book2);
    book_new(book2, "Harry Potter and the Chamber of Secrets", 990, 490, "EN", 133, 1998, book3);
    book_new(book3, "Harry Potter and the Prisoner of Azkaban", 1100, 600, "PK", 233, 1999, book4);
    book_new(book4, "Harry Potter and the Goblet of Fire", 1200, 799, "IT", 256, 2000, book5);
    book_new(book5, "Harry Potter and the Order of the Phoenix", 1400, 599, "SW", 444, 2003, book6);
    book_new(book6, "Harry Potter and the Half-Blood Prince", 420, 299, "UA", 123, 2005, book7);
    book_new(book7, "Harry Potter and the Deathly Hallows", 420, 399, "EN", 145, 2007, book8);
    book_new(book8, "Harry Potter and the Cursed Child", 420, 120, "EN", 166, 2016, NULL);

    head = book1;
    books_print(head);

    return 0;
}