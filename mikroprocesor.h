#pragma once
#include "podmiot.h"

class mikroprocesor : public podmiot {
private:
	std::string rodzina_ukl, rdzen_p;
	double szerokosc_m, czestotliwosc, nap_we_wy;

public:

	mikroprocesor();
	mikroprocesor(std::string, double, std::string , std::string, std::string, double, double, double);
	~mikroprocesor();
	
	void modru();
	void modrp();
	void modsm();
	void modcz();
	void modnw();
	
	std::string getru();
	std::string getrp();
	double getsm();
	double getcz();
	double getnw();

	void showmm();


};