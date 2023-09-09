#include "Book.h"
Book::Book(std::string title, std::string author, int publicationyear, std::string isbn) {
    this->title = title;
    this->author = author;
    this->publicationYear = publicationYear;
    this->isbn = isbn;
}

std::string Book::GetTitle() {
    return title;
}
std::string Book::GetAuthor() {
    return author;
}
int Book::GetPublicationYear() {
    return publicationYear;
}
std::string Book::GetIsbn() {
    return isbn;
}

void Book::SetTitle() {
    std::string userInput;
    getline(std::cin, userInput);
    title = userInput;
}
void Book::SetAuthor() {
    std::string userInput;
    getline(std::cin, userInput);
    author = userInput;
}
void Book::SetPublicationYear() {
    std::string userInput;
    bool isDigit = true;
    getline(std::cin, userInput);
    for (int i = 0; i < userInput.size(); i++) {
        if (isdigit(userInput[i]) == true) {
            isDigit = false;
            break;
        }
    }
    if (isDigit){
        publicationYear = stoi(userInput);
    }
    else {
        std::cout << "Enter a valid year!" << std::endl;
    }
}
void Book::SetIsbn() {
    std::string userInput;
    getline(std::cin, userInput);
    isbn = userInput;
}

Book::~Book(){}