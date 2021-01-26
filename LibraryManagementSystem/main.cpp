#include "BookItem.h"
#include <iostream>

int main()
{
	// Creating a BookItem (Scan into the library system)
	std::cout << "Creating a BookItem" << std::endl;
	BookItem lbmItem ("LibraryManagementSystem", "English", 10, "LihNarnWang", "C++ is hard but interesting!", "01");
	// Showing some of its property
	std::cout << "Testing functions" << std::endl;
	std::cout << lbmItem.getTitle() << std::endl;
	std::cout << lbmItem.getLanguage() << std::endl;

}