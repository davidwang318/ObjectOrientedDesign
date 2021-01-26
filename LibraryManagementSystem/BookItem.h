#ifndef BOOKITEM_H
#define BOOKITEM_H

#include "Book.h"

enum class BookStatus {
	Available,
	Loaned,
	Waiting
};

class BookItem : public Book
{
public:
	BookItem(std::string title, std::string language, int numberOfPages, 
		     std::string author, std::string description, std::string barCode);

private:
	std::string barCode_;
	BookStatus status_;
	Rack palcedAt_;
};

#endif