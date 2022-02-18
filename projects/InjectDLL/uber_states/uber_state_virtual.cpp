#include <uber_states/uber_state_virtual.h>

#include <Il2CppModLoader/common.h>
#include <constants.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Common/ext.h>
#include <uber_states/uber_state_helper.h>
#include <uber_states/uber_state_manager.h>

#include <csharp_bridge.h>

#include <unordered_map>

using namespace modloader;
namespace uber_states
{
    namespace
    {
        // TODO: Maybe add an on_changed callback and implement the uberstate notify for these.
        struct VirtualUberState
        {
            using setter = void(*)(double);
            using getter = double(*)();

            std::string name;
            setter set;
            getter get;
        };

        std::unordered_map<std::pair<int, int>, VirtualUberState, pair_hash> virtual_states = {
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 0),
                {
                    "Spirit Light",
                    [](double x) { set_experience(x); },
                    []() -> double { return get_experience(); }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 0),
                {
                    "Gorlek Ore",
                    [](double x) { set_ore(x); },
                    []() -> double { return get_ore(); }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 0),
                {
                    "Keystones",
                    [](double x) { set_keystones(x); },
                    []() -> double { return get_keystones(); }
                }
            },
        };
    }

    bool is_virtual_state(int group, int state)
    {
        return virtual_states.find(std::make_pair(group, state)) != virtual_states.end();
    }

    std::string get_virtual_name(int group, int state)
    {
        auto it = virtual_states.find(std::make_pair(group, state));
        return it->second.name;
    }

    // TODO: Use a map for this if we add more then 1 virtual group.
    std::string get_virtual_group_name(int group)
    {
        return constants::RANDO_VIRTUAL_GROUP_NAME;
    }

    double get_virtual_value(int group, int state)
    {
        auto it = virtual_states.find(std::make_pair(group, state));
        return it->second.get();
    }

    void set_virtual_value(int group, int state, double value)
    {
        auto it = virtual_states.find(std::make_pair(group, state));
        return it->second.set(value);
    }
}