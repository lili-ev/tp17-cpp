
#include <iostream>
#include "include/Logger.h"
#include "include/Config.h"

using namespace std;

int main() {
    Logger::getInstance().ecrire("Demarrage de l'application");

    Config config;
    config.charger("config.json");

    cout << "Application : " << config.lire("application") << endl;
    cout << "Utilisateur : " << config.lire("utilisateur") << endl;
    cout << "Langue : " << config.lire("langue") << endl;

    return 0;
}
