#include <iostream>
#include <cstdlib>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int numPages;

        void printBookInfo() {
            cout << "The book " << title << " authored by " << author << " has " << numPages << " pages." << endl;
        }
};

int main() {
    system("clear"); // For windows use "cls"

    Book book1;

    book1.title = "Hobbit";
    book1.author = "JRR Tolkein";
    book1.numPages = 300;

    book1.printBookInfo();

    return 0;
}