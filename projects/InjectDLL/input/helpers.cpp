#include <input/helpers.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>

#include <fstream>
#include <string>

#include <json/json.hpp>
#include <magic_enum/include/magic_enum.hpp>

using namespace modloader;

namespace input
{
    bool read_bindings(std::string const& path, handle_binding_callback callback)
    {
        std::ifstream file(path);
        if (file.is_open())
        {
            nlohmann::json j;
            try
            {
                file >> j;
            }
            catch (nlohmann::json::parse_error& ex)
            {
                warn("input", format("failed to parse '%s' error '%d' at byte '%d'", path.c_str(), ex.id, ex.byte));
                return false;
            }

            if (!j.is_object())
            {
                warn("input", format("failed to parse '%s' top most object not an object", path.c_str()));
                return false;
            }

            for (auto const& entry : j.items())
            {
                auto const& name = entry.key();
                auto action = magic_enum::enum_cast<Action>(entry.key());
                if (!action.has_value())
                {
                    warn("input", format("failed to parse '%s' entry %s not valid action, skipping.", path.c_str(), name.c_str()));
                    continue;
                }

                if (!entry.value().is_array())
                {
                    warn("input", format("failed to parse '%s' entry %s not an array, skipping.", path.c_str(), name.c_str()));
                    continue;
                }

                for (auto const& bind : entry.value())
                {
                    if (!bind.is_array())
                    {
                        warn("input", format("failed to parse '%s' entry %s bind not an array, skipping.", path.c_str(), name.c_str()));
                        continue;
                    }

                    std::vector<int> buttons;
                    for (auto const& key : bind)
                    {
                        if (!key.is_number_integer())
                        {
                            warn("input", format("failed to parse '%s' entry %s key not a string, skipping.", path.c_str(), name.c_str()));
                            buttons.clear();
                            break;
                        }

                        buttons.push_back(key.get<int>());
                    }

                    if (!buttons.empty())
                        callback(action.value(), buttons);
                }
            }
        }
        else
        {
            warn("input", format("failed to open '%s%s'", path.c_str()));
            return false;
        }

        return true;
    }
}
