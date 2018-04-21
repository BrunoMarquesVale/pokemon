#include <iostream> //Default lib
#include <fstream> //Default lib
#define _WIN32_WINNT 0x500 //Maximize Window
#pragma comment(lib, "winmm.lib") //added for sound linker
#include <windows.h> //Libray for Windows functions
#include <mmsystem.h> //Libary for multimedia use 
#include <cstdlib>  // to use a random number generator
#include <ctime>    // to get the current time
#include <dos.h> //allows "delay / sleep" action
#include <conio.h>
#include <vector>

#include "pokemon.h"

using namespace std;

//void CHOICE_1(int chosen_1)
//{
//	switch (chosen_1)
//	{
//	case 0:
//		Pikachu();
//		break;
//	case 1:
//		Squirtle();
//		break;
//	case 2:
//		Bulbasaur();
//		break;
//	case 3:
//		Charmander();
//		break;
//	}
//}

void INTRO()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	mciSendString("play PokemonMenu\\Opening.mp3 repeat", NULL, 0, 0);
	cout << "		Projeto por: Samuel Pereira - a81408			\n";
	Sleep(2100);
	system("Cls");

	char s[1024];
	fstream filelogo("PokemonMenu\\PokemonLogo.txt");
	while (filelogo.getline(s, 1024))
	{
		cout << s << endl;
	}
	filelogo.close();

	system("pause");
	mciSendString("stop PokemonMenu\\Opening.mp3", NULL, 0, 0);
	system("CLs");
}

void Pikachu()
{
	cout << "Pikachu!\n" << endl;
		mciSendString("play PokemonSoundClips\\Pikachu.mp3", NULL, 0, NULL);
	
	char s[1024];
	fstream fh("Characters\\Pikachu.txt");
	while (fh.getline(s, 1024))
	{
		cout << s << endl;
	}
	fh.close();
	cout << "\n";


}
//void Pikachu_Attacks()
//{
//	if (PlayerTurn != 1) //Players turn
//	{
//		cout<< "||		1)Tackle		||\n"
//			<< "||		2)Thunder		||\n"
//			<< "  ======================================  \n";
//		cout << "		Attack: ";
//		cin >> attack;
//		cout << "  ======================================\n";
//		cout << "||                                      ||\n";
//
//		if (attack > 4 || 1 > attack) {
//			cout << "||		Invalid Choice		||\n";
//			Pikachu_Attacks();
//		}
//	}
//	else if (PlayerTurn != 0) {
//		attack = rand();
//		while (attack < 1 || 2 < attack)
//			attack = rand();
//	}
//
//	switch (attack)
//	{
//	case 1:
//		cout << "||	Pikachu used Tackle (20)!	||";
//		Damage = 20;
//		DAMAGE_OUT();
//		break;
//	case 2:
//		cout << "||	Pikachu used Thunder! (70)	||";
//		mciSendString("play PokemonSFX\\Thunder.mp3", NULL, 0, NULL);
//		Damage = 70;
//		DAMAGE_OUT();
//		break;
//	}
//}

void Squirtle()
{
	cout << "Squirtle!" << endl;

	mciSendString("play PokemonSoundClips\\Squirtle.mp3", NULL, 0, NULL);
	
	char s[1024];
	fstream fh("Characters\\Squirtle.txt");
	while (fh.getline(s, 1024))
	{
		cout << s << endl;
	}
	fh.close();
	 

}
//void Squirtle_Attacks()
//{
//	if (PlayerTurn != 1)
//	{
//		cout<< "||		1)Tackle		||\n"
//			<< "||		2)Water Gun		||\n"
//			<< "  ======================================  \n";
//		cout << "		Attack: ";
//		cin >> attack;
//		cout << "  ======================================\n";
//		cout << "||                                      ||\n";
//	}
//	else if (PlayerTurn != 0)
//		attack = OppChoice;
//
//	switch (attack)
//	{
//	case 1:
//		cout << "||	Squirtle used Tackle (20)!	||";
//		Damage = 20;
//		DAMAGE_OUT();
//		break;
//	case 2:
//		cout << "||	Squirtle used Water Gun (50)!	||";
//		Damage = 50;
//		DAMAGE_OUT();
//		break;
//	}
//}

void Charmander()
{
	cout << "Charmander!" << endl;

	mciSendString("play PokemonSoundClips\\Charmander.mp3", NULL, 0, NULL);
	
	char s[1024];
	fstream fh("Characters\\Charmander.txt");
	while (fh.getline(s, 1024))
	{
		cout << s << endl;
	}
	fh.close();

}
//void Charmander_Attacks()
//{
//	if (PlayerTurn != 1)
//	{
//		cout<< "||		1)Tackle		||\n"
//			<< "||		2)Ember			||\n"
//			<< "  ======================================  \n";
//		cout << "		Attack: ";
//		cin >> attack;
//		cout << "  ======================================\n";
//		cout << "||                                      ||\n";
//	}
//	else if (PlayerTurn != 0)
//		attack = OppChoice;
//
//	switch (attack)
//	{
//	case 1:
//		cout << "||	Charmander used Tackle (20)!	||";
//		Damage = 20;
//		DAMAGE_OUT();
//		break;
//	case 2:
//		cout << "||	Charmander used Ember (50)!	||";
//		Damage = 50;
//		DAMAGE_OUT();
//		break;
//	}
//}

void Bulbasaur()
{
	cout << "Bulbasaur!" << endl;

	mciSendString("play PokemonSoundClips\\Bulbasaur.mp3", NULL, 0, NULL);

	char s[1024];
	fstream fh("Characters\\Bulbasaur.txt");
	while (fh.getline(s, 1024))
	{
		cout << s << endl;
	}
	fh.close();

}
//void Bulbasaur_Attacks()
//{
//	if (PlayerTurn != 1)
//	{
//		cout<< "||		2)Tackle		||\n"
//			<< "||		3)Razor Leaf		||\n"
//			<< "  ======================================  \n";
//		cout << "		Attack: ";
//		cin >> attack;
//		cout << "  ======================================\n";
//		cout << "||                                      ||\n";
//	}
//	else if (PlayerTurn != 0)
//		attack = OppChoice;
//
//	switch (attack)
//	{
//	case 1:
//		cout << "||	Bulbasaur used Tackle (20)!	||";
//		Damage = 20;
//		DAMAGE_OUT();
//		break;
//	case 2:
//		cout << "||	Bulbasaur used Razor Leaf (50)!	||";
//		Damage = 50;
//		DAMAGE_OUT();
//		break;
//	}
//}

int main() {
	INTRO();
	Pikachu();
	_getch();
	Squirtle();
	_getch();
	Bulbasaur();
	_getch();
	Charmander();
	_getch();
}