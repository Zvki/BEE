#pragma once
#include "podmiot.h"



class administrator {
private:

	int k;
	std::string pass = "123456";


public:

	int a = 0;
	void wczytaj_haslo();
	int getk();
	void zmk();

};

class uzytkownik {
private:

	int u;

public: 

	uzytkownik();
	int getu();
	void zmu();

};






