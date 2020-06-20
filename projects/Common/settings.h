#pragma once

#include <string>
#include <array>
#include <vector>

enum class IniVarType
{
    Bool,
    Int,
    Float,
    String
};

union IniVariant
{
    bool b;
    int i;
    float f;
    std::array<char, 128> s;
};

struct IniOption
{
    std::string section;
    std::string name;
    IniVarType type;
    IniVariant value;
};

struct IniSettings
{
    std::string path;
    std::vector<IniOption> options;
};

IniSettings create_randomizer_settings();

void load_settings_from_file(IniSettings& settings);
void save_settings_to_file(IniSettings& settings);

IniOption* find_option(IniSettings& settings, std::string const& section, std::string const& name);
