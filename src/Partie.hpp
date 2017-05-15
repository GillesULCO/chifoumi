#ifndef PARTIE_HPP_
#define PARTIE_HPP_
#include <string>
#include "Random.hpp"
class Partie{
	private:
		std::string _lastResult; //win, lost, draw
		std::string _lastAiMove; //rock, paper, scissor
		Random rng;
	public : 
		Partie();
		void play(std::string PlayerName, std::string PlayerMove);
		std::string getLastResult();
		std::string getLastAiMove();

};

std::string Resultat(std::string PlayerMove, std::string AiMove);

#endif