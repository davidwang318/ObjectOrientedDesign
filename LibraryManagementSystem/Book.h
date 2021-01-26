#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
	Book(){};
	Book(std::string title, std::string language, int numberOfPages, std::string author, std::string description):
		title(title), language(language), numberOfPages(numberOfPages), author(author), description(description){};
	void setTitle(std::string t) {title = t;};
	void setLanguage(std::string l) {language = l;};
	void setNumberOfPages(int n) {numberOfPages = n;};
	void setAuthor(std::string a) {author = a;};
	std::string getTitle() const { return title; };
	std::string getLanguage() const { return language; };
	/**
	More getter to add
	**/

private:
	std::string title;
	std::string language;
	int numberOfPages;
	std::string author;
	std::string description;
};

#endif