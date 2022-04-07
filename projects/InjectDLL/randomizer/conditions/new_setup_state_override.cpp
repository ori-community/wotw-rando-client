#include <macros.h>
#include <dev/object_visualizer.h>
#include <features/scenes/scene_load.h>
#include <game/game.h>
#include <randomizer/conditions/new_setup_state_override.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>

#include <unordered_map>
#include <unordered_set>

#include "Common/ext.h"

using namespace modloader;
using namespace uber_states;

namespace randomizer
{
    namespace conditions
    {
        namespace
        {
            std::unordered_map<int32_t, std::unordered_set<std::string>>  debug_show;
            std::unordered_map<applier_key, applier_intercept, pair_hash> applier_intercepts;
            std::unordered_map<applier_key, int32_t, pair_hash> dynamic_applier_redirects;

            auto display_new_setup_debug = 1;
            void register_debug_show(applier_key key)
            {
                auto& map = debug_show[key.second];
                if (!key.first.empty())
                    debug_show[key.second].emplace(key.first);
            }

            void display_debug_show(applier_key key)
            {
                if (display_new_setup_debug == 0)
                    return;

                auto it = debug_show.find(key.second);
                if (it == debug_show.end())
                    return;

                if (it->second.find(key.first) == it->second.end())
                    console::console_send(format("%d -> %s", key.second, key.first.c_str()));
                else if (display_new_setup_debug == 2)
                    console::console_send(format("triggered %d:%s", key.second, key.first.c_str()));
            }

            STATIC_IL2CPP_BINDING(Moon, UberStateController, void, ApplyAll, (int32_t context));
            IL2CPP_INTERCEPT(, NewSetupStateController, app::SetupState*, get_ActiveState, (app::NewSetupStateController* this_ptr)) {
                auto can_resolve = il2cpp::invoke(this_ptr->fields.StateHolder->fields._._.State, "CanResolve", nullptr);
                auto state = il2cpp::invoke(this_ptr->fields.StateHolder->fields._._.State, "Resolve", nullptr);
                auto mapping = this_ptr->fields.StateHolder->fields._._.Mapping;
                auto mapping_result = il2cpp::invoke<app::Int32__Boxed>(mapping, "Resolve", state)->fields;
                auto path = il2cpp::unity::get_path(this_ptr);
                auto key = std::make_pair(path, mapping_result);
                display_debug_show(key);

                {
                    const auto it = applier_intercepts.find(key);
                    if (it != applier_intercepts.end())
                        mapping_result = it->second(this_ptr, path, mapping_result, 0);
                }
                {
                    const auto it = dynamic_applier_redirects.find(key);
                    if (it != dynamic_applier_redirects.end())
                        mapping_result = it->second;
                }
        
                this_ptr->fields.m_activeStateIndex = mapping_result;
                auto states = this_ptr->fields.StateHolder->fields.States;
                for (auto i = 0; i < states->fields._size; ++i)
                {
                    auto state_item = states->fields._items->vector[i];
                    if (state_item->fields.StateGUID == mapping_result)
                        return state_item;
                }
        
                return nullptr;
            }

            //IL2CPP_INTERCEPT(, NewSetupStateController, void, ApplyKnownState, (app::NewSetupStateController* this_ptr, int32_t stateGUID, int32_t context)) {
            //    {
            //        const auto it = applier_intercepts.find(stateGUID);
            //        if (it != applier_intercepts.end())
            //            stateGUID = it->second(this_ptr, stateGUID, context);
            //    }
            //    {
            //        const auto it = dynamic_applier_redirects.find(stateGUID);
            //        if (it != dynamic_applier_redirects.end())
            //            stateGUID = it->second;
            //    }
            //
            //    NewSetupStateController::ApplyKnownState(this_ptr, stateGUID, context);
            //}

            //void NewSetupStateController_ApplyKnownState(NewSetupStateController* this, int32_t stateGUID, UberStateApplyContext__Enum context)
            //{
            //    auto modifiers = this->fields.StateHolder->fields.Modifiers;
            //    for (var i = 0; i < modifiers->fields._size; ++i)
            //    {
            //        auto setup_state_modifier = modifiers->fields._items[i];
            //        auto setup_state_modifier_data = SetupStateModifier::GetUberStateModifierData(setup_state_modifier, stateGUID);
            //        auto uber_state_modifier = SetupControllerStateHolder::GetUberStateModifier(
            //            this->fields.StateHolder,
            //            setup_state_modifier_data->fields.ModifierGUID
            //        );
            //
            //        auto uber_state_modifier_data = SetupStateModifier::GetUberStateModifierData(
            //            uber_state_modifier,
            //            modifier_data->fields.StateGUID
            //        );
            //
            //        il2cpp::invoke(uber_state_modifier_data, "Apply");
            //    }
            //
            //    this->fields.m_currentPassiveStateApplied = stateGUID | 0x100000000;
            //}

            IL2CPP_BINDING(Moon, SerializedIntUberState, int, get_Value, (app::SerializedIntUberState* uber_state));
            IL2CPP_BINDING(Moon, SerializedIntUberState, void, set_Value, (app::SerializedIntUberState* uber_state, int value));

            void intercept_state(std::string const& command, std::vector<console::CommandParam> const& params)
            {
                if (params.size() != 3)
                {
                    console::console_send("invalid number of parameters.");
                    return;
                }

                if (!params[0].name.empty() || !params[1].name.empty() || !params[2].name.empty())
                {
                    console::console_send("invalid, does not support named parameters.");
                    return;
                }

                int first;
                if (!console::try_get_int(params[1], first))
                {
                    console::console_send("invalid first parameter, not an integer.");
                    return;
                }

                int second;
                if (!console::try_get_int(params[2], second))
                {
                    console::console_send("invalid second parameter, not an integer.");
                    return;
                }


                register_new_setup_redirect(std::make_pair(params[0].value, first), second);
                UberStateController::ApplyAll(0);
            }

            void show_state(std::string const& command, std::vector<console::CommandParam> const& params)
            {
                if (params.size() < 1)
                {
                    console::console_send("Needs at least 1 parameter.");
                    return;
                }

                auto game_object = scenes::get_game_object(params[0].value);
                if (game_object == nullptr)
                    return;

                auto nssc = il2cpp::unity::get_component(game_object, "", "NewSetupStateController");
                if (nssc == nullptr)
                    return;

                dev::Visualizer v;
                dev::visualize::visualize_object(v, nssc);
                console::console_send(dev::visualize::get_string(v));
            }

            void show_state_paths(std::string const& command, std::vector<console::CommandParam> const& params)
            {
                auto roots = scenes::get_roots_from_active();
                std::reverse(roots.begin(), roots.end());
                while (!roots.empty())
                {
                    auto go = roots.back();
                    roots.pop_back();
                    auto nssc = il2cpp::unity::get_component(go, "", "NewSetupStateController");
                    if (nssc != nullptr)
                        console::console_send(il2cpp::unity::get_path(go));

                    auto children = il2cpp::unity::get_children(go);
                    roots.insert(roots.end(), children.begin(), children.end());
                }
            }

            void add_applier_intercept_commands()
            {
                console::register_command({ "debug", "intercept_state" }, intercept_state);
                console::register_command({ "debug", "show_state" }, show_state);
                console::register_command({ "debug", "show_state_paths" }, show_state_paths);
            }

            CALL_ON_INIT(add_applier_intercept_commands);
        }

        void register_new_setup_intercept(applier_key key, applier_intercept callback)
        {
            if (applier_intercepts.find(key) != applier_intercepts.end())
                trace(MessageType::Info, 3, "init", "registering same applier state twice, overwriting.");

            applier_intercepts[key] = std::move(callback);
            register_debug_show(key);
        }

        void register_new_setup_intercept(std::vector<applier_key> const& states, applier_intercept callback)
        {
            for (auto state : states)
                register_new_setup_intercept(state, callback);
        }

        void register_new_setup_intercept(std::vector<std::string_view> const& paths, std::vector<int32_t> const& states, applier_intercept callback)
        {
            for (auto path : paths)
            {
                std::string spath(path);
                for (auto state : states)
                    register_new_setup_intercept({ spath, state }, callback);
            }
        }

        void register_new_setup_redirect(applier_key key, int32_t new_state, bool dynamic)
        {
            if (dynamic)
            {
                dynamic_applier_redirects[key] = new_state;
                register_debug_show(key);
            }
            else
            {
                if (applier_intercepts.find(key) != applier_intercepts.end())
                    trace(MessageType::Info, 3, "init", "registering same applier state twice, overwriting.");

                applier_intercepts[key] = [new_state](auto, auto, auto, auto) -> int32_t { return new_state; };
                register_debug_show(key);
            }
        }

        void register_new_setup_redirect(std::vector<std::pair<applier_key, int32_t>> const& states, bool dynamic)
        {
            for (auto state : states)
                register_new_setup_redirect(state.first, state.second, dynamic);
        }

        void register_new_setup_redirect(std::string_view view, std::pair<int32_t, int32_t> const& states, bool dynamic)
        {
            register_new_setup_redirect({ std::string(view), states.first }, states.second, dynamic);
        }

        void initialize()
        {
            // Bubble spawner at entrance of pools.
            // TODO: Add path here.
            register_new_setup_redirect(std::make_pair("", 631536139), 1230316956, false);
        }

        CALL_ON_INIT(initialize);
    }
}

INJECT_C_DLLEXPORT void register_state_redirect(const int state, const int value)
{
    // TODO: Handle path here.
    randomizer::conditions::register_new_setup_redirect(std::make_pair("", state), value, true);
}
