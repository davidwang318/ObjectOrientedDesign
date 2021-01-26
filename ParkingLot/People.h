/**
This file defines classes represent various people that interact with our system
**/

#include <string>
#include "EnumsAndConstants.h"

class Address {
public:
	// Constructor
	Address(std::string st, std::string ci, std::string co)
	:streetAddress(st), city(ci), country(co) {};
	// Getters:
	std::string getCountry() {return country;}; 
private:
	std::string streetAddress;
	std::string city;
	std::string country;
};

class Person {
public:
	// Constructor
	Person(std::string na, std::string ph, std::string st, std::string ci, std::string co)
	:name(na), phone(ph), address(st, ci, co) {};
	// Getters:
	std::string getCountry() {return address.getCountry();};
private:
	std::string name;
	std::string phone;
	Address address;
};

class account {
public:
	virtual
	void account() 
	bool resetPassword(std::string newPassWord) {password = newPassWord};
private:
	std::string userName;
	std::string password;
	AccountStatus status;
	Person person;
}