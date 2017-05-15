#include <CppUTest/CommandLineTestRunner.h>

#include "Partie.hpp"

#include "Random.hpp"

TEST_GROUP(GroupPartie){};
TEST(GroupPartie, Test_1)
{
	std::string result=Resultat("scissor","scissor");
	CHECK(result=="draw");
}

TEST(GroupPartie, Test_2)
{
	std::string result=Resultat("rock","scissor");
	CHECK(result=="win");
}

TEST(GroupPartie, Test_3)
{
	std::string result=Resultat("paper","scissor");
	CHECK(result=="loss");
}