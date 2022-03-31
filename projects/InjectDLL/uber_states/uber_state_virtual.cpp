#include <uber_states/uber_state_virtual.h>

#include <constants.h>
#include <ipc.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Common/ext.h>
#include <features/controls/mouse_control.h>
#include <uber_states/uber_state_helper.h>
#include <uber_states/uber_state_manager.h>

#include <csharp_bridge.h>

#include <unordered_map>

using namespace modloader;
namespace uber_states
{
    namespace
    {
        using uber_id = std::pair<int, int>;

        // TODO: Maybe add an on_changed callback and implement the uberstate notify for these.
        struct VirtualUberState
        {
            using setter = void(*)(double);
            using getter = double(*)();

            std::string name;
            setter set;
            getter get;
        };

        std::unordered_map<uber_id, VirtualUberState, pair_hash> virtual_states = {
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 0),
                {
                    "Spirit Light",
                    [](double x) { set_experience(x); },
                    []() -> double { return get_experience(); }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 1),
                {
                    "Gorlek Ore",
                    [](double x) { set_ore(x); },
                    []() -> double { return get_ore(); }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 2),
                {
                    "Keystones",
                    [](double x) { set_keystones(x); },
                    []() -> double { return get_keystones(); }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 10),
                {
                    "Max Health",
                    [](double x) { set_max_health(static_cast<int32_t>(x)); },
                    []() -> double { return get_max_health(); }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 11),
                {
                    "Health",
                    [](double x) { set_health(x); },
                    []() -> double { return get_health(); }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 12),
                {
                    "Max Energy",
                    [](double x) { set_max_energy(x); },
                    []() -> double { return get_max_energy(); }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 13),
                {
                    "Energy",
                    [](double x) { set_energy(x); },
                    []() -> double { return get_energy(); }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 100),
                {
                    "Debug Enabled",
                    [](double x) { set_debug_controls(x > 0.5); },
                    []() -> double { return get_debug_controls() ? 1.0 : 0.0; }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 110),
                {
                    "Invert x axis",
                    [](double x) { set_axis_inverted(true, x > 0.5); },
                    []() -> double { return get_axis_inverted(true) ? 1.0 : 0.0; }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 111),
                {
                    "Invert y axis",
                    [](double x) { set_axis_inverted(false, x > 0.5); },
                    []() -> double { return get_axis_inverted(false) ? 1.0 : 0.0; }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 112),
                {
                    "Player input active",
                    [](double x) {
                        auto player_input = il2cpp::get_class<app::PlayerInput__Class>("", "PlayerInput")->static_fields->Instance;
                        player_input->fields.Active = x > 0.5;
                    },
                    []() -> double {
                        auto player_input = il2cpp::get_class<app::PlayerInput__Class>("", "PlayerInput")->static_fields->Instance;
                        return static_cast<double>(player_input->fields.Active);
                    }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 200),
                {
                    "Area",
                    [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 200) is read only."); },
                    []() -> double { return static_cast<double>(get_player_area()); }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 500),
                {
                    "Total Relics",
                    [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 500) is read only."); },
                    []() -> double { return static_cast<double>(csharp_bridge::get_relic_count(true)); }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 501),
                {
                    "Current Relics",
                    [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 501) is read only."); },
                    []() -> double { return static_cast<double>(csharp_bridge::get_relic_count(false)); }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 502),
                {
                    "Current Trees",
                    [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 502) is read only."); },
                    []() -> double {
                        return uber_states::get_uber_state_value(0, app::AbilityType__Enum_Sword)
                            + uber_states::get_uber_state_value(0, app::AbilityType__Enum_DoubleJump)
                            + uber_states::get_uber_state_value(0, app::AbilityType__Enum_MeditateSpell)
                            + uber_states::get_uber_state_value(0, app::AbilityType__Enum_Bow)
                            + uber_states::get_uber_state_value(0, app::AbilityType__Enum_DashNew)
                            + uber_states::get_uber_state_value(0, app::AbilityType__Enum_Bash)
                            + uber_states::get_uber_state_value(0, app::AbilityType__Enum_SpiritLeash)
                            + uber_states::get_uber_state_value(0, app::AbilityType__Enum_WaterDash)
                            + uber_states::get_uber_state_value(0, app::AbilityType__Enum_GlowSpell)
                            + uber_states::get_uber_state_value(0, app::AbilityType__Enum_Grenade)
                            + uber_states::get_uber_state_value(0, app::AbilityType__Enum_Digging)
                            + uber_states::get_uber_state_value(0, app::AbilityType__Enum_ChargeJump)
                            + uber_states::get_uber_state_value(0, app::AbilityType__Enum_DamageUpgradeA)
                            + uber_states::get_uber_state_value(0, app::AbilityType__Enum_DamageUpgradeB);
                    }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 503),
                {
                    "Current Wisps",
                    [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 503) is read only."); },
                    []() -> double {
                        return uber_states::get_uber_state_value(28895, 25522) // Reach
                            + uber_states::get_uber_state_value(18793, 63291) // Mouldwood
                            + uber_states::get_uber_state_value(945, 49747) // Pools
                            + uber_states::get_uber_state_value(10289, 22102) // Wastes
                            + uber_states::get_uber_state_value(46462, 59806); // Hollow
                    }
                }
            },
            {
                std::make_pair(constants::RANDO_VIRTUAL_GROUP_ID, 504),
                {
                    "Current Quests",
                    [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 504) is read only."); },
                    []() -> double {
                        return static_cast<int>(uber_states::get_uber_state_value(937, 34641) > 3.5)
                            + static_cast<int>(uber_states::get_uber_state_value(14019, 35399) > 2.5)
                            + static_cast<int>(uber_states::get_uber_state_value(14019, 35087) > 2.5)
                            + static_cast<int>(uber_states::get_uber_state_value(14019, 45931) > 2.5)
                            + static_cast<int>(uber_states::get_uber_state_value(14019, 8973) > 2.5)
                            + static_cast<int>(uber_states::get_uber_state_value(48248, 51645) > 2.5)
                            + static_cast<int>(uber_states::get_uber_state_value(48248, 18458) > 3.5)
                            + static_cast<int>(uber_states::get_uber_state_value(14019, 20667) > 2.5)
                            + static_cast<int>(uber_states::get_uber_state_value(14019, 15983) > 2.5)
                            + static_cast<int>(uber_states::get_uber_state_value(14019, 27804) > 3.5)
                            + static_cast<int>(uber_states::get_uber_state_value(14019, 59708) > 2.5)
                            + static_cast<int>(uber_states::get_uber_state_value(14019, 61011) > 4.5)
                            + static_cast<int>(uber_states::get_uber_state_value(14019, 26318) > 10.5)
                            + static_cast<int>(uber_states::get_uber_state_value(14019, 33776) > 2.5)
                            + static_cast<int>(uber_states::get_uber_state_value(14019, 50597) > 3.5)
                            + static_cast<int>(uber_states::get_uber_state_value(14019, 44578) > 1.5)
                            + static_cast<int>(uber_states::get_uber_state_value(14019, 26394) > 1.5);
                    }
                }
            }
        };

        std::unordered_map<uber_id, double, pair_hash> cached_values;
        IL2CPP_INTERCEPT(, GameController, void, Update, (app::GameController* this_ptr)) {
            GameController::Update(this_ptr);
            for (const auto& state : virtual_states)
            {
                auto value = state.second.get();
                auto it = cached_values.find(state.first);
                if (it == cached_values.end() || (std::abs(it->second - value) >= 0.1))
                {
                    cached_values[state.first] = value;
                    report_uber_state_change(state.first.first, state.first.second, value);
                }
            }
        }
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

    void virtual_notify_change(int group, int state)
    {
        report_uber_state_change(group, state, get_virtual_value(group, state));
    }
}