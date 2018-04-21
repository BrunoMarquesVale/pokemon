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
#include <string>

#include "pokemon.h"

using namespace std;


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


void InitializeDefaultPokemons(vector<Pokemon> &defaultPokemons) {

	Pokemon p = Pokemon("Pikachu", "Eletrico", 100, 100, "PokemonSoundClips\\Pikachu.mp3" , "Characters\\Pikachu.txt");
	Pokemon s = Pokemon("Squirtle", "Eletrico", 100, 100, "PokemonSoundClips\\Squirtle_1.mp3", "Characters\\Squirtle.txt");
	Pokemon c = Pokemon("Charmander", "Eletrico", 100, 100, "PokemonSoundClips\\Charmander_1.mp3", "Characters\\Charmander.txt");
	Pokemon b = Pokemon("Bulbasaur", "Eletrico", 100, 100, "PokemonSoundClips\\Bulbasaur_1.mp3", "Characters\\Bulbasaur.txt");

	defaultPokemons.push_back(p);
	defaultPokemons.push_back(s);
	defaultPokemons.push_back(c);
	defaultPokemons.push_back(b);
}


void PrintPokemonAndSound(Pokemon p) {

	cout << ">>>>>>>>>>	" << p.getNome() << "	<<<<<<<<<<\n" << endl;


	string c = "play " + p.getSound();
	mciSendString(c.c_str(), NULL, 0, NULL);
	char s[1024];
	fstream fh(p.getImage());
	while (fh.getline(s, 1024))
	{
		cout << s << endl;
	}
	fh.close();
	cout << "\n";
}


void ChooseDefaultPokemon(vector<Pokemon> &defaultPokemons)
{
	int index_defaultPokemon;

	//Escolher um pokemon por defeito para o jogo
	cout <<"Escolha o Pokemon por Defeito:" << endl;
	for (int j = 0; j < defaultPokemons.size(); j++)
	{
		cout << j <<": " << defaultPokemons[j].getNome() << endl;
	}	
	cin >> index_defaultPokemon;

	//Imprimir o pokemon escolhido por defeito
	PrintPokemonAndSound(defaultPokemons[index_defaultPokemon]);
}

int main() {
	INTRO();

	vector<Pokemon> defaultPokemons;
	InitializeDefaultPokemons(defaultPokemons);
	ChooseDefaultPokemon(defaultPokemons);

	_getch();

	return 0;
}