#include <stdlib.h>
#include <algorithm>

/**
Implementation of Deck class
**/

template <typename T>
void Deck<T>::setDeckOfCards(std::vector<T> deckOfCards) {
	cards_ = deckOfCards;
}

template <typename T>
void Deck<T>::shuffle() {
	for (int i = 0; i < cards_.size(); i ++) {
		int rand_pos = i + std::rand() % (cards_.size() - i);
		swap(cards_[i], cards_[rand_pos]);
	}
}

template <typename T>
std::vector<T> Deck<T>::dealHand(int number) {
	std::vector<T> handCards {cards_.begin() + deltaIndex_, cards_.begin() + deltaIndex_ + number};
	deltaIndex_ += number;
	return handCards;
}

template <typename T>
T Deck<T>::dealCard() {
	return cards_[deltaIndex_++];
}