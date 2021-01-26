#include "People.h"
#include <iostream>


int main() {
	Person p ("LihNarn", "301xxxxxxx", "testStreet", "Taipei", "Taiwan");
	std::cout << p.getCountry() << std::endl;
}