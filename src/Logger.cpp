
#include "../include/Logger.h"
#include <iostream>
#include <fstream>

using namespace std;

Logger::Logger() {
}

Logger& Logger::getInstance() {
    static Logger instance;
    return instance;
}

void Logger::ecrire(const string& message) {
    ofstream fichier("journal.txt", ios::app);

    if (fichier) {
        fichier << message << endl;
        cout << "Message ajoute au journal." << endl;
    } else {
        cout << "Erreur lors de l'ouverture du journal." << endl;
    }
}
