
#include "ConsoleHelper.h"
#include "helpers/utils.hpp"

void ConsoleHelper::Write(std::string text)
{
    Utils::ConsolePrint(text.data());
}

void ConsoleHelper::WriteLine(std::string text)
{
    Write(text + "\n");
}

void ConsoleHelper::WriteLine(int text)
{
    WriteLine(std::string(std::to_string(text) + "\n"));
}

void ConsoleHelper::WriteLine(float text)
{
    WriteLine(std::string(std::to_string(text) + "\n"));
}

void ConsoleHelper::WriteLine(Vector text)
{
    WriteLine(std::string("x: " + std::to_string(text.x) + "y: " + std::to_string(text.y) + "z: " + std::to_string(text.z) + "\n"));
}

void ConsoleHelper::WriteLine(QAngle text)
{
    WriteLine(std::string("pitch: " + std::to_string(text.pitch) + "yaw: " + std::to_string(text.yaw) + "roll: " + std::to_string(text.roll) + "\n"));
}


ConsoleHelper Console;