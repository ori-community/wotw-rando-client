#include <settings.h>

#include <algorithm>
#include <filesystem>
#include <fstream>
#include <xstring>

#include <assert.h>
#include <windows.h>

void load_settings_from_file(IniSettings& settings)
{
    if (!std::filesystem::exists(settings.path))
        return;

    for (auto& option : settings.options)
    {
        switch (option.type)
        {
        case IniVarType::Bool:
        {
            auto length = GetPrivateProfileString(
                option.section.c_str(),
                option.name.c_str(),
                option.value.b ? "true" : "false",
                option.value.s.data(),
                option.value.s.size(),
                settings.path.c_str()
            );

            std::string value{ option.value.s.data(), length };
            std::transform(value.begin(), value.end(), value.begin(), [](auto c) { return std::tolower(c); });
            option.value.b = value == std::string{ "true" };
            break;
        }
        case IniVarType::Int:
        {
            option.value.i = GetPrivateProfileInt(
                option.section.c_str(),
                option.name.c_str(),
                option.value.i,
                settings.path.c_str()
            );
            break;
        }
        case IniVarType::Float:
        {
            auto length = GetPrivateProfileString(
                option.section.c_str(),
                option.name.c_str(),
                std::to_string(option.value.f).c_str(),
                option.value.s.data(),
                option.value.s.size(),
                settings.path.c_str()
            );

            std::string value{ option.value.s.data(), length };
            option.value.f = std::stof(value);
            break;
        }
        case IniVarType::String:
        {
            auto length = GetPrivateProfileString(
                option.section.c_str(),
                option.name.c_str(),
                option.value.s.data(),
                option.value.s.data(),
                option.value.s.size(),
                settings.path.c_str()
            );

            break;
        }
        default:
            assert(false);
        }
    }
}

void save_settings_to_file(IniSettings& settings)
{
    if (!std::filesystem::exists(settings.path))
        std::fstream().open(settings.path);

    for (auto& option : settings.options)
    {
        std::string value;
        switch (option.type)
        {
        case IniVarType::Bool:
            value = option.value.b ? "true" : "false";
            break;
        case IniVarType::Int:
            value = std::to_string(option.value.i);
            break;
        case IniVarType::Float:
            value = std::to_string(option.value.f);
            break;
        case IniVarType::String:
            value = option.value.s.data();
            break;
        default:
            assert(false);
        }

        WritePrivateProfileString(
            option.section.c_str(),
            option.name.c_str(),
            value.c_str(),
            settings.path.c_str()
        );
    }
}

IniOption* find_option(IniSettings& settings, std::string const& section, std::string const& name)
{
    auto it = std::find_if(settings.options.begin(), settings.options.end(), [&](auto const& option) -> bool {
        return option.section == section && option.name == name;
    });

    if (it != settings.options.end())
        return &*it;

    return nullptr;
}

IniSettings create_randomizer_settings()
{
    IniSettings file;
    file.path = "C:\\moon\\settings.ini";

    IniOption option;
    option.section = "Paths";
    option.type = IniVarType::String;

    option.name = "Steam";
    strcpy_s(option.value.s.data(), option.value.s.size(), "C:\\Program Files (x86)\\Steam\\steam.exe");
    file.options.push_back(option);

    option.section = "Flags";
    option.type = IniVarType::Bool;

    option.name = "UseWinStore";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "SkipUpdate";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "MuteInjectLogs";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "MuteCSLogs";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "ShowShortCutscenes";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "ShowLongCutscenes";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "CursorLock";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "InvertSwim";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "QuestFocusOnAbility3";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "NoEnergyCost";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "Dev";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "TraceEnabled";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "TracePingingDisabled";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "BurrowMouseControl";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "WaterDashMouseControl";
    option.value.b = false;
    file.options.push_back(option);

    option.name = "GrappleMouseControl";
    option.value.b = false;
    file.options.push_back(option);

    return file;
}
