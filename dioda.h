#pragma once
#include "podmiot.h"

class dioda : public podmiot {
private:
	std::string typ_pros , typ_diody;
	double prad_prze, nap_wst;

public:

	dioda();
	dioda(std::string, double , std::string , std::string, std::string , double , double);
	~dioda();
	void modtp();
	void modtd();
	void modpp();
	void modnw();
	std::string gettp();
	std::string gettd();
	double getpp();
	double getnw();
	void showd();

};