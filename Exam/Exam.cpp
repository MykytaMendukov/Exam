// Exam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

class Book {
private:
	string author;
	string name;
	int year;
public:

	Book() : author{ "None" }, name{ "None" }, year{ -1 } {};
	Book(string author_, string name_, int year_) : name{ name_ }, author{ author_ }, year{ year_ } {};
	Book(const Book& book) { author = book.author; name = book.name, year = book.year; };
	~Book() { author = ""; name = ""; year = 0; };
	friend std::ostream& operator <<(std::ostream& out, Book& book);

	string getAuthor() { return author; };
	string getName() { return name; };
	int getYear() { return year; };

};

std::ostream& operator << (std::ostream& out, Book& book) {

	out << "Book info" << endl;
	out << "Author: " << book.author << endl;
	out << "Name: " << book.name << endl;
	out << "Year: " << book.year << endl;

	return out;
}

class Library {
private:
	vector<Book> Books;
public:

	~Library() { Books.clear(); };

	void addBook(Book& book) {
		Books.push_back(book);
	}

	void searchForAuthor(string author_) {
		for (Book& book : Books) {
			if (book.getAuthor() == author_) {
				cout << "Searched book: " << endl;
				cout << book << endl;
				break;
			}
			else {
				cout << "No matches. Check the accuracy." << endl;
			}
		}
	}

	void searchForName(string name_) {
		for (Book& book : Books) {
			if (book.getName() == name_) {
				cout << "Searched book: " << endl;
				cout << book << endl;
				break;
			}
			else {
				cout << "No matches. Check the accuracy." << endl;
			}
		}
	}

	void searchForYear(int year_) {
		for (Book& book : Books) {
			if (book.getYear() == year_) {
				cout << "Searched book: " << endl;
				cout << book << endl;
				break;
			}
			else {
				cout << "No matches. Check the accuracy." << endl;
			}
		}
	}

	friend std::ostream& operator << (std::ostream& out, Library& lib);
};

std::ostream& operator << (std::ostream& out, Library& lib) {
	int i = 1;
	out << "Your Library" << endl;
	for (Book& book : lib.Books) {
		out << i << ". " << book << endl;
		i++;
	}
	return out;
}

int main()
{
	Library myLibrary;

	Book book1("George Orwell", "1984", 1949);
	Book book2("Panteleimon Kulish", "Black Counsil", 1843);
	Book book3("Charles Dickens", "The Mystery of Edwin Drood", 1870);

	myLibrary.addBook(book1);
	myLibrary.addBook(book2);
	myLibrary.addBook(book3);

	cout << myLibrary << endl;

	myLibrary.searchForAuthor("George Orwell");
}

