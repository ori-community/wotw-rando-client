#include <Core/api/game/game.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/dev/object_visualizer.h>
#include <Randomizer/conditions/new_setup_state_override.h>
#include <Randomizer/macros.h>

#include <Modloader/app/methods/Moon/SerializedIntUberState.h>
#include <Modloader/app/methods/Moon/UberStateController.h>
#include <Modloader/app/methods/NewSetupStateController.h>
#include <Modloader/app/types/NewSetupStateController.h>
#include <Modloader/app/types/PlayerStateMap.h>
#include <Modloader/app/types/PlayerStateMap_Mapping.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <Modloader/app/structs/Int32__Boxed.h>

#include <unordered_map>
#include <unordered_set>

#include "Common/ext.h"

using namespace modloader;
using namespace modloader::win;
using namespace core::api::uber_states;
using namespace app::classes;
using namespace app::classes::Moon;

namespace randomizer::conditions {
    namespace {
        std::unordered_map<int32_t, std::unordered_set<std::string>> debug_show;
        std::unordered_map<applier_key, applier_intercept, pair_hash> applier_intercepts;
        std::unordered_map<applier_key, int32_t, pair_hash> dynamic_applier_redirects;

        auto display_new_setup_debug = 1;

        void register_debug_show(applier_key key) {
            if (!key.first.empty())
                debug_show[key.second].emplace(key.first);
        }

        void display_debug_show(applier_key key) {
            if (display_new_setup_debug == 0)
                return;

            auto it = debug_show.find(key.second);
            if (it == debug_show.end())
                return;

            if (it->second.find(key.first) == it->second.end())
                console::console_send(std::format("{} -> {}", key.second, key.first));
            else if (display_new_setup_debug == 2)
                console::console_send(std::format("triggered {}:{}", key.second, key.first));
        }

        // Override this to check trees instead of abilities.
        int32_t handle_player_state_map(app::PlayerStateMap* map, void* state) {
            for (const auto entry: il2cpp::ListIterator(map->fields._.Entries)) {
                auto output = false;
                UberState tree(UberStateGroup::Tree, entry.m_ability);
                if (tree.valid()) {
                    output = UberState(0, static_cast<int>(entry.m_ability)).get<bool>() ^ (entry.m_matchType != 0);
                } else {
                    output = il2cpp::invoke(types::PlayerStateMap_Mapping::box(entry), "", state);
                }

                if (output) {
                    return entry.m_index;
                }
            }

            return map->fields._.FallbackSetupStateIndex;
        }

        IL2CPP_INTERCEPT(NewSetupStateController, app::SetupState*, get_ActiveState, (app::NewSetupStateController * this_ptr)) {
            auto state = il2cpp::invoke(this_ptr->fields.StateHolder->fields._._.State, "Resolve", 0);
            auto mapping = this_ptr->fields.StateHolder->fields._._.Mapping;
            int32_t mapping_result = 0;
            if (il2cpp::is_assignable(mapping, types::PlayerStateMap::get_class())) {
                mapping_result = handle_player_state_map(reinterpret_cast<app::PlayerStateMap*>(mapping), state);
            } else {
                mapping_result = il2cpp::invoke<app::Int32__Boxed>(mapping, "Resolve", state)->fields;
            }

            auto path = il2cpp::unity::get_path(this_ptr);
            auto key = std::make_pair(path, mapping_result);
            display_debug_show(key); {
                const auto it = applier_intercepts.find(key);
                if (it != applier_intercepts.end()) {
                    mapping_result = it->second(this_ptr, path, mapping_result, 0);
                }
            } {
                const auto it = dynamic_applier_redirects.find(key);
                if (it != dynamic_applier_redirects.end()) {
                    mapping_result = it->second;
                }
            }

            this_ptr->fields.m_activeStateIndex = mapping_result;
            for (auto state_item: il2cpp::ListIterator(this_ptr->fields.StateHolder->fields.States)) {
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

            register_new_setup_redirect(std::make_pair(params[0].value, first), second);
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
            std::reverse(roots.begin(), roots.end());
            while (!roots.empty()) {
                auto go = roots.back();
                roots.pop_back();
                auto nssc = il2cpp::unity::get_component(go, types::NewSetupStateController::get_class());
                if (nssc != nullptr)
                    console::console_send(il2cpp::unity::get_path(go));

                auto children = il2cpp::unity::get_children(go);
                roots.insert(roots.end(), children.begin(), children.end());
            }
        }

        auto on_game_ready = modloader::event_bus().register_handler(
            ModloaderEvent::GameReady,
            [](auto) {
                console::register_command({"debug", "intercept_state"}, intercept_state);
                console::register_command({"debug", "show_state"}, show_state);
                console::register_command({"debug", "show_state_paths"}, show_state_paths);

                // Bubble spawner at entrance of pools.
                register_new_setup_redirect(std::make_pair("lumaPoolsA/interactives/stateController", 631536139), 1230316956, false);
            }
        );
    } // namespace

    void register_new_setup_intercept(applier_key key, applier_intercept callback) {
        if (applier_intercepts.find(key) != applier_intercepts.end())
            info("init", "registering same applier state twice, overwriting.");

        applier_intercepts[key] = std::move(callback);
        register_debug_show(key);
    }

    void register_new_setup_intercept(std::vector<applier_key> const& states, applier_intercept callback) {
        for (auto state: states)
            register_new_setup_intercept(state, callback);
    }

    void register_new_setup_intercept(std::vector<std::string_view> const& paths, std::vector<int32_t> const& states, applier_intercept callback) {
        for (auto path: paths) {
            std::string spath(path);
            for (auto state: states)
                register_new_setup_intercept({spath, state}, callback);
        }
    }

    void register_new_setup_redirect(applier_key key, int32_t new_state, bool dynamic) {
        if (dynamic) {
            dynamic_applier_redirects[key] = new_state;
            register_debug_show(key);
        } else {
            if (applier_intercepts.find(key) != applier_intercepts.end())
                info("init", "registering same applier state twice, overwriting.");

            applier_intercepts[key] = [new_state](auto, auto, auto, auto) -> int32_t { return new_state; };
            register_debug_show(key);
        }
    }

    void register_new_setup_redirect(std::vector<std::pair<applier_key, int32_t>> const& states, bool dynamic) {
        for (auto state: states)
            register_new_setup_redirect(state.first, state.second, dynamic);
    }

    void register_new_setup_redirect(std::string_view view, std::pair<int32_t, int32_t> const& states, bool dynamic) {
        register_new_setup_redirect({std::string(view), states.first}, states.second, dynamic);
    }

    void apply_all_states() {
        UberStateController::ApplyAll(app::UberStateApplyContext__Enum::ValueChanged);
    }
} // namespace randomizer::conditions
