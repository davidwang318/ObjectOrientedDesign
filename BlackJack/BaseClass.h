#include <vector>


enum class Suit {
	Club, Diamond, Heart, Spade
};

template <typename T>
class Deck {
public:
	void setDeckOfCards(std::vector<T> deckOfCards);
	void shuffle();
	int remainingCards() { return cards_.size() - deltaIndex_; };
	std::vector<T> dealHand(int number);
	T dealCard();
private:
	std::vector<T> cards_; // Follow google naming convention name_
	int deltaIndex_ {0}; // How many card we dealt
};

class Card {
public:
	Card(int c, Suit s): faceValue_(c), suit_(s) {};
	Suit getSuit() { return suit_; };
	bool isAvailable() { return available_; };
	void markUnavailable() { available_ = false; };
	void markAvailable() { available_ = true; };
	// pure virtual function because we need to know what kind of card we're playing
	virtual int value() = 0;
private:
	int faceValue_;
	Suit suit_;
	bool available_ {true};
};

template <typename T>
class Hand {
public:
	int score();
	void addCard(T card) { cards_.push_back(card); };
private:
	std::vector<T> cards_;
};

#include "BaseClass.tpp" // Hard to seperate the implementation and the declaration
