#include <iostream>
#include <vector>
#include <cstdlib>

struct book {
    std::string author;
    std::string book_name;
    int books_sold;
};

std::vector<book> addBook(std::vector<book> obj_book)
{
    int books_size = obj_book.size();
    obj_book.push_back(book());
    std::cout << "\nWhat is the name of the author: ";
    std::cin >> obj_book[books_size].author;
    std::cout << "\nWhat is the name of the book: ";
    std::cin >> obj_book[books_size].book_name;
    std::cout << "\nHow many books of this have been sold: ";
    std::cin >> obj_book[books_size].books_sold;

    return obj_book;
}

std::vector<book> removeBook(std::vector<book> obj_book)
{
    std::cout << "\nEnter the books author: ";
    std::string author = "";
    std::string book_name = "";
    std::cin >> author;
    std::cout << "\nEnter the books name: ";
    std::cin >> book_name;
    
    bool found = false;
    int pos = 0;
    for(int i = 0; i > obj_book.size(); i++)
    {
        if(obj_book[i].author == author && obj_book[i].book_name == book_name)
        {
            pos = i;
            found = true;
            break;
        }
    }

    if (found == false)
    {
        std::cout << "\nThat book was not found\n";
    }
    else
    {
        obj_book.erase(obj_book.begin() + pos);
    }

    return obj_book;

}

void returnRandomBook(std::vector<book> obj_book)
{
    int num_of_books = obj_book.size();
    srand(time(0));
    int random_number = rand()%num_of_books;
    
    std::cout << "Author: " << obj_book[random_number].author << "\n";
    std::cout << "Book Name: " << obj_book[random_number].book_name << "\n";
    std::cout << "Copies Sold: " << obj_book[random_number].books_sold << "\n";
}

int main()
{
    std::vector<book> obj_book;
    bool run = true;
    while(run == true)
    {
        std::cout << "Please enter what you would like to do:\n";
        std::cout << "1. Add a new book\n";
        std::cout << "2. Remove a book\n";
        std::cout << "3. Get info on a random book\n";
        std::cout << "4. Quit program: ";
        int option = 0;
        std::cin >> option;

        switch (option)
        {
        case 1:
            obj_book = addBook(obj_book);
            break;
        case 2:
            obj_book = removeBook(obj_book);
            break;
        case 3:
            returnRandomBook(obj_book);
            break;
        case 4:
            run = false;
            break;
        default:
            std::cout << "\nPlease enter a correct value\n\n";
            break;
        }
    }

    return 0;
}