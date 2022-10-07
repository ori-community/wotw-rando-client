#include <uber_states/uber_state_virtual.h>

#include <constants.h>
#include <features/controls/mouse_control.h>
#include <randomizer/ipc/base_handlers.h>
#include <uber_states/uber_state_helper.h>
#include <uber_states/uber_state_interface.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/GameController.h>
#include <Il2CppModLoader/app/types/PlayerInput.h>

#include <interop/csharp_bridge.h>

#include <unordered_map>

using namespace modloader;
using namespace app::classes;

namespace uber_states {
    namespace {
        using uber_id = std::pair<UberStateGroup, int>;

        // TODO: Maybe add an on_changed callback and implement the uberstate notify for these.
        struct VirtualUberState {
            using setter = void (*)(double);
            using getter = double (*)();

            std::string name;
            setter set;
            getter get;
        };

        std::unordered_map<uber_id, VirtualUberState, pair_hash> virtual_states = {
            { std::make_pair(UberStateGroup::RandoVirtual, 0),
              { "Spirit Light",
                [](double x) { set_experience(x); },
                []() -> double { return get_experience(); } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 1),
              { "Gorlek Ore",
                [](double x) { set_ore(x); },
                []() -> double { return get_ore(); } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 2),
              { "Keystones",
                [](double x) { set_keystones(x); },
                []() -> double { return get_keystones(); } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 10),
              { "Max Health",
                [](double x) { set_max_health(static_cast<int32_t>(x)); },
                []() -> double { return get_max_health(); } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 11),
              { "Health",
                [](double x) { set_health(x); },
                []() -> double { return get_health(); } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 12),
              { "Max Energy",
                [](double x) { set_max_energy(x); },
                []() -> double { return get_max_energy(); } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 13),
              { "Energy",
                [](double x) { set_energy(x); },
                []() -> double { return get_energy(); } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 100),
              { "Debug Enabled",
                [](double x) { set_debug_controls(x > 0.5); },
                []() -> double { return get_debug_controls() ? 1.0 : 0.0; } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 110),
              { "Invert x axis",
                [](double x) { set_axis_inverted(true, x > 0.5); },
                []() -> double { return get_axis_inverted(true) ? 1.0 : 0.0; } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 111),
              { "Invert y axis",
                [](double x) { set_axis_inverted(false, x > 0.5); },
                []() -> double { return get_axis_inverted(false) ? 1.0 : 0.0; } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 112),
              { "Player input active",
                [](double x) {
                    auto player_input = types::PlayerInput::get_class()->static_fields->Instance;
                    player_input->fields.Active = x > 0.5;
                },
                []() -> double {
                    auto player_input = types::PlayerInput::get_class()->static_fields->Instance;
                    return static_cast<double>(player_input->fields.Active);
                } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 200),
              { "Area",
                [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 200) is read only."); },
                []() -> double { return static_cast<double>(get_player_area()); } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 500),
              { "Total Relics",
                [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 500) is read only."); },
                []() -> double { return static_cast<double>(csharp_bridge::get_relic_count(true)); } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 501),
              { "Current Relics",
                [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 501) is read only."); },
                []() -> double { return static_cast<double>(csharp_bridge::get_relic_count(false)); } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 502),
              { "Current Trees",
                [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 502) is read only."); },
                []() -> double {
                    return uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Sword).get() + uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::DoubleJump).get() + uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::MeditateSpell).get() + uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Bow).get() + uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::DashNew).get() + uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Bash).get() + uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::SpiritLeash).get() + uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::WaterDash).get() + uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::GlowSpell).get() + uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Grenade).get() + uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Digging).get() + uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::ChargeJump).get() + uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::DamageUpgradeA).get() + uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::DamageUpgradeB).get();
                } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 503),
              { "Current Wisps",
                [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 503) is read only."); },
                []() -> double {
                    return uber_states::UberState(static_cast<UberStateGroup>(28895), 25522).get() // Reach
                            + uber_states::UberState(static_cast<UberStateGroup>(18793), 63291).get() // Mouldwood
                            + uber_states::UberState(static_cast<UberStateGroup>(945), 49747).get() // Pools
                            + uber_states::UberState(static_cast<UberStateGroup>(10289), 22102).get() // Wastes
                            + uber_states::UberState(static_cast<UberStateGroup>(46462), 59806).get(); // Hollow
                } } },
            { std::make_pair(UberStateGroup::RandoVirtual, 504),
              { "Current Quests",
                [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 504) is read only."); },
                []() -> double {
                    return static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(937), 34641).get() > 3.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(14019), 35399).get() > 2.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(14019), 35087).get() > 2.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(14019), 45931).get() > 2.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(14019), 8973).get() > 2.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(48248), 51645).get() > 2.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(48248), 18458).get() > 3.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(14019), 20667).get() > 2.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(14019), 15983).get() > 2.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(14019), 27804).get() > 3.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(14019), 59708).get() > 2.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(14019), 61011).get() > 4.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(14019), 26318).get() > 10.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(14019), 33776).get() > 2.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(14019), 50597).get() > 3.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(14019), 44578).get() > 1.5) + static_cast<int>(uber_states::UberState(static_cast<UberStateGroup>(14019), 26394).get() > 1.5);
                } } }
        };

        std::unordered_map<uber_id, double, pair_hash> cached_values;
        IL2CPP_INTERCEPT(GameController, void, Update, (app::GameController * this_ptr)) {
            next::GameController::Update(this_ptr);
            for (const auto& state : virtual_states) {
                auto value = state.second.get();
                auto it = cached_values.find(state.first);
                if (it == cached_values.end())
                    virtual_notify_change(UberState(state.first.first, state.first.second), 0.0);
                else if (std::abs(it->second - value) >= 0.1)
                    UberState(state.first.first, state.first.second).notify_changed(it->second);
            }
        }

        void initialize() {
            register_value_notify(virtual_notify_change);
        }

        CALL_ON_INIT(initialize);
    } // namespace

    bool is_virtual_state(UberStateGroup group, int state) {
        return virtual_states.find(std::make_pair(group, state)) != virtual_states.end();
    }

    std::string get_virtual_name(UberStateGroup group, int state) {
        auto it = virtual_states.find(std::make_pair(group, state));
        return it->second.name;
    }

    // TODO: Use a map for this if we add more then 1 virtual group.
    std::string get_virtual_group_name(UberStateGroup group) {
        return std::string(uber_state_group_name(UberStateGroup::RandoVirtual));
    }

    double get_virtual_value(UberStateGroup group, int state) {
        auto it = virtual_states.find(std::make_pair(group, state));
        return it->second.get();
    }

    void set_virtual_value(UberStateGroup group, int state, double value) {
        auto it = virtual_states.find(std::make_pair(group, state));
        it->second.set(value);
    }

    void virtual_notify_change(UberState state, double prev) {
        if (!is_virtual_state(state.group(), state.state()))
            return;

        auto value = state.get();
        cached_values[uber_id(state.group(), state.state())] = value;
        report_uber_state_change(state.group(), state.state(), value);
    }
} // namespace uber_states