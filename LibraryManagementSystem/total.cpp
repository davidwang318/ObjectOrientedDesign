class Person {
	Person(std::string name, std::string address = "", std::string email = "", std::string phone = ""):
	name(name), address(address), email(email), phone(phone)
	{}
	/**
	Getters and Setters
	**/
private:
	std::string name;
	std::string address;
	std::string email;
	std::string phone;
}


class Account {
public:
	void resetPassword(){};
	void changePersonalInfo(){};
private:
	std::string id;
	std::string password;
	std::AccountStatus status;
	Person personInfo;
}

class Librarian : public Account
{
public:
	bool addBookItem(BookItem& book, int RackNum, std::string category) {};
	bool blockMember(Member& member) {};
	bool unBlockMember(Member& member) {};
}

class Member : public Account
{}

class 