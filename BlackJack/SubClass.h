#include "BaseClass.h"

class BlackJackCard : public Card {
public:
	BlackJackCard(int c, Suit s) : Card(c, s) {};
	// Implement the pure virtual function
	int value() {
		if (isAce()) return 1;
		if (faceValue_ >= 11 && faceValue_ <= 13) return 10;
		return faceValue_; 
	}
	int minValue() {
		if (isAce()) return 1;
		return value();
	}
	int maxValue() {
		if (isAce()) return 11;
		return value();
	}
};

class BlackJackHand : public Hand<BlackJackCard> {
public:
	int score() {
	}
private:
}