#include "Console.hpp"
#include "Partie.hpp"
#include <glog/logging.h>
#include <string>
#include <iostream>

void Console::run(int argc, char ** argv){
	if(argc!=2)
		std::cerr<<"Il faut exactement deux arguments !\n";
	google::InitGoogleLogging(argv[0]);
    google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
	Partie p;
	std::string nom=argv[1];
	std::string choix;
	do{
		std::cout<<"move(rock,scissor,paper,quit): ";
		std::cin>>choix;
		while(choix!="rock" and choix!="paper" and choix!="scissor" and choix!="quit"){
			std::cout<<"move(rock,scissor,paper,quit): ";
			std::cin>>choix;
		}
		if(choix!="quit"){
			p.play(nom,choix);
			std::cout<<p.getLastResult()<<" ("<<choix<<","<<p.getLastAiMove()<<")"<<std::endl;
		}
	}while(choix!="quit");
}