#ifndef RACK_H
#define RACK_H

#include <string>

class Rack {
public:
	Rack():number_(-1), locationIdentifier("Not Assigned"){};
	void placeTo(int number, std::string lI) {
		number_ = number;
		locationIdentifier = lI;
	}
private:
	int number_;
	std::string locationIdentifier;
}

#endif