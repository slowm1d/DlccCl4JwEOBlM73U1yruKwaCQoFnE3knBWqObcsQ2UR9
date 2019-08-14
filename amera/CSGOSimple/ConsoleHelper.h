
#include "valve_sdk/csgostructs.hpp"

#pragma once
class ConsoleHelper
{
public:
    void Write(std::string text);
    void WriteLine(std::string text);
    void WriteLine(int text);
    void WriteLine(float text);
    void WriteLine(Vector text);
    void WriteLine(QAngle text);
};

extern ConsoleHelper Console;