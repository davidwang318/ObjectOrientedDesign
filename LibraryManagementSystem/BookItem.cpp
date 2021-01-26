#include "BookItem.h"
#include <iostream>

BookItem::BookItem(std::string title, std::string language, int numberOfPages, 
		           std::string author, std::string description, std::string barCode):
                   Book(title, language, numberOfPages, author, description), barCode_(barCode), 
                   status_(BookStatus::Waiting), Rack() {}