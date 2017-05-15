#ifndef PARTIE_HPP_
#define PARTIE_HPP_
#include <string>
#include "Random.hpp"
class Partie{
	private:
		std::string _lastResult; ///win, lost, draw
		std::string _lastAiMove; ///rock, paper, scissor
		Random rng;
	public : 
		///Constructeur par défaut
		Partie();
		///permet de jouer un move
		void play(std::string PlayerName, std::string PlayerMove); 
		///Récupère le dernier résultat d'une partie
		std::string getLastResult();
		///Récupère le dernier coup joué par l'IA
		std::string getLastAiMove();

};

///Permet de comparer deux coups joués et retourne le résultat
std::string Resultat(std::string PlayerMove, std::string AiMove);

#endif