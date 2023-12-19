#include <iostream>
#include "Author.h"
#include "Book.h"
#include "User.h"
#include "Student.h"
#include "Librarian.h"
#include "Library.h"



int main() {

     // Create authors
    Author wasif("Wasif");
    Author sumair("Sumair");

    // Create books 
    Book harryPotter("Harry Potter and the Sorcerer's Stone", "978-0-7475-3269-6", "Fantasy", &Wasif);
    Book LifeShafak("The Lord of the Rings", "978-0-395-19395-4", "Romantic", &Sumair);
    Book Thinkpad("The Hobbit", "978-0-395-07122-2", "Computer", &Sumair);

    // Create a Student
    User Souad("Souad");
    User Wahab("Wahab");

    // Create a librarian
    User headLibrarian("Huzaifa");
    User JuniorLibrarian("Khaqan");

    // funciton call
        //Auther
        addBook();
        removeBook()  
        //Book 
    harryPotter.borrowBook();
    harryPotter.returnBook();
    harryPotter.calculateFine();

    return 0;
}