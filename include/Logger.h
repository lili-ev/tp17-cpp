
#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
private:
    Logger();

public:
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    static Logger& getInstance();

    void ecrire(const std::string& message);
};

#endif
