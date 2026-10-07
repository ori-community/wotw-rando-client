#include <Common/ext.h>
#include <Core/api/game/game.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/dev/object_visualizer.h>
#include <Modloader/app/methods/Moon/UberStateController.h>
#include <Modloader/app/methods/NewSetupStateController.h>
#include <Modloader/app/structs/Int32__Boxed.h>
#include <Modloader/app/types/NewSetupStateController.h>
#include <Modloader/app/types/PlayerStateMap.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>
#include <Randomizer/conditions/new_setup_state_override.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>
#include <unordered_map>
#include <unordered_set>


using namespace modloader;
using namespace modloader::win;
using namespace core::api::uber_states;
using namespace app::classes;
using namespace app::classes::Moon;

namespace randomizer::conditions {
    namespace {
        std::unordered_map<new_setup_state_controller_intercept_key, new_setup_state_controller_intercept_fn, pair_hash> applier_intercepts;

        bool get_tree_state_for_ability(const app::AbilityType__Enum ability) {
            switch (ability) {
                case app::AbilityType__Enum::Bash:
                    return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Bash)>().get();
                case app::AbilityType__Enum::DoubleJump:
                    return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::DoubleJump)>().get();
                case app::AbilityType__Enum::ChargeJump:
                    return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::ChargeJump)>().get();
                case app::AbilityType__Enum::Grenade:
                    return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Grenade)>().get();
                case app::AbilityType__Enum::SpiritLeash:
                    return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::SpiritLeash)>().get();
                case app::AbilityType__Enum::GlowSpell:
                    return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::GlowSpell)>().get();
                case app::AbilityType__Enum::MeditateSpell:
                    return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::MeditateSpell)>().get();
                case app::AbilityType__Enum::Bow:
                    return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Bow)>().get();
                case app::AbilityType__Enum::Sword:
                    return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Sword)>().get();
                case app::AbilityType__Enum::Digging:
                    return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Digging)>().get();
                case app::AbilityType__Enum::DashNew:
                    return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::DashNew)>().get();
                case app::AbilityType__Enum::WaterDash:
                    return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::WaterDash)>().get();
                case app::AbilityType__Enum::DamageUpgradeA:
                    return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::DamageUpgradeA)>().get();
                case app::AbilityType__Enum::DamageUpgradeB:
                    return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::DamageUpgradeB)>().get();
                default:
                    return false;
            }
        }

        IL2CPP_INTERCEPT(app::SetupState*, NewSetupStateController, get_ActiveState, app::NewSetupStateController* this_ptr) {
            const auto state = il2cpp::invoke(this_ptr->fields.StateHolder->fields._._.State, "Resolve", 0);
            const auto mapping = this_ptr->fields.StateHolder->fields._._.Mapping;

            state_guid_t mapping_result;

            if (il2cpp::is_assignable(mapping, types::PlayerStateMap::get_class())) {
                for (const auto entry: il2cpp::ListIterator(reinterpret_cast<app::PlayerStateMap*>(mapping)->fields._.Entries)) {
                    auto tree_state = get_tree_state_for_ability(entry.m_ability);

                    if (entry.m_matchType == 1) {
                        tree_state = !tree_state;
                    }

                    if (tree_state) {
                        mapping_result = entry.m_index;
                        break;
                    }
                }
            } else {
                mapping_result = il2cpp::invoke<app::Int32__Boxed>(mapping, "Resolve", state)->fields;
            }

            const auto path = il2cpp::unity::get_path(this_ptr);
            const auto key = std::make_pair(path, mapping_result);

            const auto it = applier_intercepts.find(key);
            if (it != applier_intercepts.end()) {
                mapping_result = it->second(this_ptr, path, mapping_result);
            }

            this_ptr->fields.m_activeStateIndex = mapping_result;
            for (const auto state_item: il2cpp::ListIterator(this_ptr->fields.StateHolder->fields.States)) {
                if (state_item->fields.StateGUID == mapping_result) {
                    return state_item;
                }
            }

            return nullptr;
        }

        void intercept_state(std::string const& command, std::vector<console::CommandParam> const& params) {
            if (params.size() != 3) {
                console::console_send("invalid number of parameters.");
                return;
            }

            if (!params[0].name.empty() || !params[1].name.empty() || !params[2].name.empty()) {
                console::console_send("invalid, does not support named parameters.");
                return;
            }

            int first;
            if (!console::try_get_int(params[1], first)) {
                console::console_send("invalid first parameter, not an integer.");
                return;
            }

            int second;
            if (!console::try_get_int(params[2], second)) {
                console::console_send("invalid second parameter, not an integer.");
                return;
            }

            register_new_setup_state_controller_redirect(std::make_pair(params[0].value, first), second);
            apply_all_states();
        }

        void show_state(std::string const& command, std::vector<console::CommandParam> const& params) {
            if (params.empty()) {
                console::console_send("Needs at least 1 parameter.");
                return;
            }

            auto game_object = core::api::scenes::get_game_object(params[0].value);
            if (game_object == nullptr)
                return;

            auto nssc = il2cpp::unity::get_component(game_object, types::NewSetupStateController::get_class());
            if (nssc == nullptr)
                return;

            dev::Visualizer v;
            dev::visualize::visualize_object(v, nssc);
            console::console_send(dev::visualize::get_string(v));
        }

        void show_state_paths(std::string const& command, std::vector<console::CommandParam> const& params) {
            auto roots = core::api::scenes::get_roots_from_active();
            std::ranges::reverse(roots);
            while (!roots.empty()) {
                auto go = roots.back();
                roots.pop_back();
                auto setup_state_controller = il2cpp::unity::get_component(go, types::NewSetupStateController::get_class());
                if (setup_state_controller != nullptr) {
                    console::console_send(il2cpp::unity::get_path(go));
                }

                auto children = il2cpp::unity::get_children(go);
                roots.insert(roots.end(), children.begin(), children.end());
            }
        }

        [[maybe_unused]]
        auto on_game_ready = modloader::event_bus().on<modloader::events::GameReady>([](auto) {
            console::register_command({"debug", "intercept_state"}, intercept_state);
            console::register_command({"debug", "show_state"}, show_state);
            console::register_command({"debug", "show_state_paths"}, show_state_paths);

            // Bubble spawner at entrance of pools.
            register_new_setup_state_controller_redirect(std::make_pair("lumaPoolsA/interactives/stateController", 631536139), 1230316956);
        });
    } // namespace

    void register_new_setup_state_controller_intercept(const new_setup_state_controller_intercept_key& key, const new_setup_state_controller_intercept_fn& callback) {
        if (applier_intercepts.contains(key)) {
            warn("new_setup_state_override", std::format("Registering same NewSetupController intercept twice, overwriting: {}:{}", key.first, key.second));
        }

        applier_intercepts[key] = callback;
    }

    void register_new_setup_state_controller_intercept(std::vector<new_setup_state_controller_intercept_key> const& states, const new_setup_state_controller_intercept_fn& callback) {
        for (const auto& state: states) {
            register_new_setup_state_controller_intercept(state, callback);
        }
    }

    void register_new_setup_state_controller_intercept(
        const std::vector<std::string_view>& paths,
        const std::vector<state_guid_t>& states,
        const new_setup_state_controller_intercept_fn& callback
    ) {
        for (auto path: paths) {
            std::string spath(path);
            for (auto state: states) {
                register_new_setup_state_controller_intercept({spath, state}, callback);
            }
        }
    }

    void register_new_setup_state_controller_redirect(const new_setup_state_controller_intercept_key& key, state_guid_t new_state) {
        register_new_setup_state_controller_intercept(key, [new_state](auto, auto, auto) -> state_guid_t { return new_state; });
    }

    void register_new_setup_state_controller_redirect(std::vector<std::pair<new_setup_state_controller_intercept_key, state_guid_t>> const& states) {
        for (auto state: states) {
            register_new_setup_state_controller_redirect(state.first, state.second);
        }
    }

    void register_new_setup_state_controller_redirect(const std::string_view view, std::pair<state_guid_t, state_guid_t> const& states) {
        register_new_setup_state_controller_redirect({std::string(view), states.first}, states.second);
    }

    void apply_all_states() { UberStateController::ApplyAll(app::UberStateApplyContext__Enum::ValueChanged); }
} // namespace randomizer::conditions
