#ifndef _Pokemon_
#define _Pokemon_

#include "Atack.h"
#include <iostream>
using namespace std;


class Pokemon
{
private:
		string nome;
		string tipo;
		int life;
		int exp;
		string sound;
		string image;
		//vector<Atack> atacks;

public:
	Pokemon(string _nome, string _tipo, int _life, int _exp, string _sound, string _image);
	string getNome();
	string getSound();
	string getImage();

};
#endif _Pokemon_