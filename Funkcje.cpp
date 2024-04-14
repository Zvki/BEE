#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "user.h"
#include "rezystor.h"
#include "tyrystor.h"
#include "podmiot.h"
#include "dioda.h"
#include "mikroprocesor.h"
#include "Funkcje.h"


typedef std::vector < std::vector<std::string>> macierz;
typedef std::vector <rezystor*> vr;
typedef std::vector <dioda*> vd;
typedef std::vector < mikroprocesor*> vm;

uzytkownik u1;
administrator a1;

void modr(const vr& r, const vd& d, const vm& m) {
		int nr = 0;
		int k = 0;
			while (true) {
				system("cls");
				for (int i = 0; i < r.size(); i++) {
					std::cout << i << " ";
					r[i]->showr();
				}
				std::cout << std::endl << "1 - Modyfikuj" << std::endl
					<< "2 - Cofnij" << std::endl;
				std::cin >> k;
				switch (k) {
					case 1: {
						system("cls");
						for (int i = 0; i < r.size(); i++) {
							std::cout << i << " ";
							r[i]->showr();
						}
						std::cout << std::endl;
						std::cout << "Wybierz numer elementu i kolumne do modyfikacji" << std::endl;
						std::cout << "Numer elementu : ";
						std::cin >> nr;
						std::cout << "Numer kolumny : ";
						std::cin >> k;
						switch (k) {
							case 1: {
								r[nr]->modp();
								break;
							}
							case 2: {
								r[nr]->modc();
								break;
							}
							case 3: {
								r[nr]->mods();
								break;
							}
							case 4: {
								r[nr]->modrr();
								break;
							}
							case 5: {
								r[nr]->modrm();
								break;
							}
						}
						break;
					}
					case 2: {
						std::ofstream otp("rezystory.txt", std::ofstream::trunc);
						for (int i = 0; i < r.size(); i++) {
							otp << r[i]->getp() << " " << r[i]->getc() << " " << r[i]->getnr() << " " << r[i]->getr() << " " << r[i]->getm() << std::endl;
						}
						modb(r, d, m);
						break;
					}
					default: {
						modb(r, d, m);
						break;
					}
				}
			}
}

void modd(const vr& r, const vd& d, const vm& m) {
	int nr = 0;
	int k = 0;
	while (true) {
		system("cls");
		for (int i = 0; i < d.size(); i++) {
			std::cout << i << " ";
			d[i]->showd();
		}
		std::cout << std::endl << "1 - Modyfikuj" << std::endl
			<< "2 - Cofnij" << std::endl;
		std::cin >> k;
		switch (k) {
			case 1: {
				system("cls");
				for (int i = 0; i < d.size(); i++) {
					std::cout << i << " ";
					d[i]->showd();
				}
				std::cout << std::endl;
				std::cout << "Wybierz numer elementu i kolumne do modyfikacji" << std::endl;
				std::cout << "Numer elementu : ";
				std::cin >> nr;
				std::cout << "Numer kolumny : ";
				std::cin >> k;
				switch (k) {
				case 1: {
					d[nr]->modp();
					break;
				}
				case 2: {
					d[nr]->modc();
					break;
				}
				case 3: {
					d[nr]->mods();
					break;
				}
				case 4: {
					d[nr]->modtp();
					break;
				}
				case 5: {
					d[nr]->modtd();
					break;
				}
				case 6: {
					d[nr]->modpp();
					break;
				}
				case 7: {
					d[nr]->modnw();
					break;
				}
				}
				break;
			}
			case 2: {
				std::ofstream otp("diody.txt", std::ofstream::trunc);
				for (int i = 0; i < d.size(); i++) {
					otp << d[i]->getp() << " " << d[i]->getc() << " " << d[i]->getnr() << " " << d[i]->gettp() << " " << d[i]->gettd() << " " << d[i]->getpp() << " " << d[i]->getnw() << std::endl;
				}
				modb(r, d, m);
				modb(r, d, m);
				break;
			}
			default: {
				modd(r, d, m);
				break;
			}
		}
	}
}

void modm(const vr& r, const vd& d, const vm& m) {
	int nr = 0;
	int k = 0;
	while (true) {
		system("cls");
		for (int i = 0; i < d.size(); i++) {
			std::cout << i << " ";
			m[i]->showmm();
		}
		std::cout << std::endl << "1 - Modyfikuj" << std::endl
			<< "2 - Cofnij" << std::endl;
		std::cin >> k;
		switch (k) {
		case 1: {
			system("cls");
			for (int i = 0; i < d.size(); i++) {
				std::cout << i << " ";
				m[i]->showmm();
			}
			std::cout << std::endl;
			std::cout << "Wybierz numer elementu i kolumne do modyfikacji" << std::endl;
			std::cout << "Numer elementu : ";
			std::cin >> nr;
			std::cout << "Numer kolumny : ";
			std::cin >> k;
			switch (k) {
			case 1: {
				m[nr]->modp();
				break;
			}
			case 2: {
				m[nr]->modc();
				break;
			}
			case 3: {
				m[nr]->mods();
				break;
			}
			case 4: {
				m[nr]->modru();
				break;
			}
			case 5: {
				m[nr]->modrp();
				break;
			}
			case 6: {
				m[nr]->modsm();
				break;
			}
			case 7: {
				m[nr]->modcz();
				break;
			}
			case 8: {
				m[nr]->modnw();
				break;
			}
			}
			break;
		}
		case 2: {
			std::ofstream otp("mikroprocesory.txt", std::ofstream::trunc);
			for (int i = 0; i < d.size(); i++) {
				otp << m[i]->getp() << " " << m[i]->getc() << " " << m[i]->getnr() << " " << m[i]->getru() << " " << m[i]->getrp() << " " << m[i]->getsm() << " " << m[i]->getcz() << " " << m[i]->getnw() << std::endl;
			}
			modb(r, d, m);
			modb(r, d, m);
			break;
		}
		default: {
			modd(r, d, m);
			break;
		}
		}
	}
}

void modb(const vr& r, const vd& d, const vm& m) {
	system("cls");
	std::cout << "Wybierz elementy do modyfikacji: " << std::endl
		<< "1 - Rezystory" << std::endl
		<< "2 - Diody" << std::endl
		<< "3 - Mikroprocesory" << std::endl
		<< "4 - Cofnij" << std::endl;
	int k;
	std::cin >> k;
	switch (k) {
	case 1: {
		modr(r, d, m);
		break;
	}
	case 2: {
		modd(r, d, m);
		break;
	}
	case 3: {
		modm(r, d, m);
		break;
	}
	case 4: {
		admin(r, d, m);
		break;
	}
	default: {
		modb(r, d, m);
		break;
	}
	}
}


void wypisz_vector_vr(const vr& r, const vd& d, const vm& m) {
	system("cls");
	for (int i = 0; i < r.size(); i++) {
		std::cout << i << " ";
		r[i]->showr();
	}
	int c;
	std::cout << "Cofnij (Wcisnij 1): ";
	std::cin >> c;
	if (c == 1) {
		viewb(r, d, m);
	} else if (c == 4) {
		
	}
}


void wypisz_vector_vd(const vr& r, const vd& d, const vm& m) {
	system("cls");
	for (int i = 0; i < d.size(); i++) {
		std::cout << i << " ";
		d[i]->showd();
	}
	int c;
	std::cout << "Cofnij (Wcisnij 1): ";
	std::cin >> c;
	if (c == 1) {
		viewb(r, d, m);
	}
		
}

void wypisz_vector_vm(const vr& r, const vd& d, const vm& m) {
	system("cls");
	for (int i = 0; i < m.size(); i++) {
		std::cout << i << " ";
		m[i]->showmm();
	}
	int c;
	std::cout << "Cofnij (Wcisnij 1): ";
	std::cin >> c;
	if (c == 1) {
		viewb(r, d, m);
	}
}


void viewb(const vr& r, const vd& d, const vm& m) {
	system("cls");
	std::cout << "Wybierz baze elementow: " << std::endl
		<< "1 - Rezystory" << std::endl
		<< "2 - Diody" << std::endl
		<< "3 - Mikroprocesory" << std::endl
		<< "4 - Cofnij" << std::endl;
	int k;
	std::cin >> k;
	switch (k) {
	case 1: {
		wypisz_vector_vr(r, d, m);
		break;
	}
	case 2: {
		wypisz_vector_vd(r, d, m);
		break;
	}
	case 3: {
		wypisz_vector_vm(r, d, m);
		break;
	}
	case 4: {
		if (a1.a == 0) {
			uzytk(u1, r, d, m);
		}
		else if (a1.a == 1) {
			admin(r, d, m);
		}

		break;
	}
	default: {
		viewb(r, d, m);
		break;
	}
	}
}


void admin(const vr& r, const vd& d, const vm& m) {
	system("cls");
	std::cout << "Zalogowales sie jako admin" << std::endl
		<< "Wybierz operacje do wykonania: " << std::endl
		<< "1 - Przegladaj baze" << std::endl
		<< "2 - Modyfikuj baze" << std::endl
		<< "3 - Wroc do menu logowania" << std::endl;
	int k;
	std::cin >> k;
	switch (k) {
		case 1: {
			viewb(r, d, m);
			break;
		}
		case 2: {
			modb(r, d, m);
			break;
		}
		case 3: {
			a1.a = 0;
			login(r, d, m);
			break;
		}
		default: {
			admin(r, d, m);
			break;
		}
	}
}

void uzytk(uzytkownik u1, const vr& r, const vd& d, const vm& m) {
	system("cls");
	std::cout << "Zalogowales sie jako user" << std::endl
		<< "1 - Przegladaj baze" << std::endl
		<< "2 - Wroc do menu logowania" << std::endl;
	u1.zmu();
	switch (u1.getu()) {
	case 1: {
		viewb(r, d, m);
		break;
	}
	case 2: {
		login(r, d, m);
		break;
	}
	default: {
		uzytk(u1, r, d, m);
		break;
	}
	}
}

void login(const vr& r, const vd& d, const vm& m) {
	system("cls");
	std::cout << "Podaj jako kto chcesz sie zalogowac (1 - uzytkownik, 2 - administrator, 3 - wyjscie z programu): ";
	int k = 1;
	std::cin >> k;
	switch (k) {
		case 1: {
			uzytk(u1, r, d, m);
			break;
		}
		case 2: {
			a1.wczytaj_haslo();
			a1.a = 1;
			admin(r, d, m);
			break;
		}
		case 3: {
			exit(0);
			break;
		}
		default: {
			login(r, d, m);
			break;
		}
	}
}

macierz readdata(const std::string& file_name) {
	macierz database;
	std::string element;
	std::ifstream file(file_name);
	if (file) {
		while (std::getline(file, element)) {
			std::stringstream data;
			data << element;
			std::vector<std::string> line;
			std::string elementt;
			while (data >> elementt) {
				line.push_back(elementt);
			}
			database.push_back(line);
		}
	}
	return database;
}
