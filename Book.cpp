
#include "Book.h"
    
    
            Book::Book(const string t, string i, string g,Author* a)
            : title(t), ISBN(i), genre(g),author(a), availability(true),{
            availability = true;
    };

    void Book::borrowBook() {
        if (availability) {
            cout << "Book borrowed successfully by " << endl;
            availability = false; 
        } else {
            cout << "Book is not available for borrowing." << endl;
        }
    }

    void Book::returnBook() {
        availability = true;
        cout << "Book returned successfully." << endl;
    }

    void calculateFine() {
        cout << "Fine calculation logic to be implemented." <<endl;
    }

