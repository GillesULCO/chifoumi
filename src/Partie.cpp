#include "Partie.hpp"
#include <glog/logging.h>

Partie::Partie() {}

void Partie::play(std::string PlayerName, std::string PlayerMove){
	switch(rng(3)){
		case 0:
			_lastAiMove="rock";
			break;
		case 1:
			_lastAiMove="paper";
			break;
		case 2:
			_lastAiMove="scissor";
			break;
		default :	
			_lastAiMove="rock";
	}
	_lastResult=Resultat(PlayerMove,_lastAiMove);
	LOG(INFO) << PlayerName << ";"<<_lastResult<<";"<<PlayerMove<<";"<<_lastAiMove<<"\n";
} 

std::string Partie::getLastResult(){
	return _lastResult;
}

std::string Partie::getLastAiMove(){
	return _lastAiMove;
}

std::string Resultat(std::string PlayerMove, std::string AiMove){
	if(PlayerMove==AiMove)
		return "draw";
	if((PlayerMove=="rock" and AiMove=="scissor") or (PlayerMove=="paper" and AiMove=="rock") or (PlayerMove=="scissor" and AiMove=="paper"))
		return "win";
	return "loss";
}	
