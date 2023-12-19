#ifndef BOOK_H
#define BOOK_H
#include "Auther.h"
#include <iostream>
#include <string>
using namespace std;


class Book {
    private:
        string ISBN;            //book number
        string title;           //book name
        string genre;           //genre type
        bool availability;      //bookavaiable
        Author* author;         // auther define

    public:
    
        Book(const string& t, const string& i, const string& g, Author* a);

        void borrowBook();
        void returnBook();
        void calculateFine();
        
};

#endif 

