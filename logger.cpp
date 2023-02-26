#include "logger.h"

using namespace Logger;

void Logger::log(std::string s){
    Serial.println(s.c_str());
}