

#include "pokemon.h"

Pokemon::Pokemon(string _nome, string _tipo, int _life, int _exp, string _sound, string _image)
{
	nome = _nome;
	tipo = _tipo;
	life = _life;
	exp = _exp;
	sound = _sound;
	image = _image;
}


string Pokemon::getNome(){
	return nome;
}

string Pokemon::getSound() {
	return sound;
}

string Pokemon::getImage() {
	return image;
}