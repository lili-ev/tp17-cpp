
#include "../include/Config.h"
#include <iostream>
#include <fstream>
#include <regex>

using namespace std;

Config::Config() {
}

void Config::charger(const string& nomFichier) {
    ifstream fichier(nomFichier);

    if (!fichier) {
        cout << "Erreur : fichier de configuration introuvable." << endl;
        return;
    }

    string contenu((istreambuf_iterator<char>(fichier)),
                    istreambuf_iterator<char>());

    regex motif("\"([^\"]+)\"\\s*:\\s*\"([^\"]*)\"");
    smatch resultat;

    while (regex_search(contenu, resultat, motif)) {
        donnees[resultat[1]] = resultat[2];
        contenu = resultat.suffix().str();
    }

    cout << "Configuration chargee." << endl;
}

string Config::lire(const string& cle) const {
    auto it = donnees.find(cle);

    if (it != donnees.end()) {
        return it->second;
    }

    return "Cle introuvable";
}
