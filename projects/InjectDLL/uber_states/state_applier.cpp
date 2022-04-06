#include <macros.h>
#include <game/game.h>
#include <uber_states/state_applier.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>

#include <unordered_map>

#include "Common/ext.h"

using namespace modloader;

namespace uber_states
{
    namespace
    {
        std::unordered_map<int32_t, applier_intercept> applier_intercepts;
        std::unordered_map<int32_t, int32_t> dynamic_applier_redirects;

        STATIC_IL2CPP_BINDING(Moon, UberStateController, void, ApplyAll, (int32_t context));
        IL2CPP_INTERCEPT(, NewSetupStateController, void, ApplyKnownState, (app::NewSetupStateController* this_ptr, int32_t stateGUID, int32_t context)) {
            {
                const auto it = applier_intercepts.find(stateGUID);
                if (it != applier_intercepts.end())
                    stateGUID = it->second(this_ptr, stateGUID, context);
            }
            {
                const auto it = dynamic_applier_redirects.find(stateGUID);
                if (it != dynamic_applier_redirects.end())
                    stateGUID = it->second;
            }

            NewSetupStateController::ApplyKnownState(this_ptr, stateGUID, context);
        }

        IL2CPP_BINDING(Moon, SerializedIntUberState, int, get_Value, (app::SerializedIntUberState* uber_state));
        IL2CPP_BINDING(Moon, SerializedIntUberState, void, set_Value, (app::SerializedIntUberState* uber_state, int value));

        void intercept_state(std::string const& command, std::vector<console::CommandParam> const& params)
        {
            if (params.size() != 2)
            {
                console::console_send("invalid number of parameters.");
                return;
            }

            if (!params[0].name.empty() || !params[1].name.empty())
            {
                console::console_send("invalid, does not support named parameters.");
                return;
            }

            int first;
            if (!console::try_get_int(params[0], first))
            {
                console::console_send("invalid first parameter, not an integer.");
                return;
            }

            int second;
            if (!console::try_get_int(params[1], second))
            {
                console::console_send("invalid second parameter, not an integer.");
                return;
            }


            register_applier_redirect(first, second);
            UberStateController::ApplyAll(0);
        }

        void add_applier_intercept_commands()
        {
            console::register_command({ "debug", "intercept_state" }, intercept_state);
        }

        CALL_ON_INIT(add_applier_intercept_commands);
    }

    void register_applier_intercept(int32_t state, applier_intercept callback)
    {
        if (applier_intercepts.find(state) != applier_intercepts.end())
            trace(MessageType::Info, 3, "init", "registering same applier state twice, overwriting.");

        applier_intercepts[state] = std::move(callback);
    }

    void register_applier_intercept(std::vector<int32_t> const& states, applier_intercept callback)
    {
        for (auto state : states)
            register_applier_intercept(state, callback);
    }

    void register_applier_redirect(int32_t state, int32_t new_state, bool dynamic)
    {
        if (dynamic)
            dynamic_applier_redirects[state] = new_state;
        else
        {
            if (applier_intercepts.find(state) != applier_intercepts.end())
                trace(MessageType::Info, 3, "init", "registering same applier state twice, overwriting.");

            applier_intercepts[state] = [new_state](auto, auto, auto) -> int32_t { return new_state; };
        }
    }

    void register_applier_redirect(std::vector<std::pair<int32_t, int32_t>> const& states, bool dynamic)
    {
        for (auto state : states)
            register_applier_redirect(state.first, state.second, dynamic);
    }

    void save_dynamic_redirects()
    {
        auto i = 0;
        for (auto const& pair : dynamic_applier_redirects)
        {
            auto* const id_state = uber_states::get_uber_state<app::SerializedIntUberState>(constants::APPLIERS_GROUP_ID, i * 2);
            auto* const value_state = uber_states::get_uber_state<app::SerializedIntUberState>(constants::APPLIERS_GROUP_ID, i * 2 + 1);
            SerializedIntUberState::set_Value(id_state, pair.first);
            SerializedIntUberState::set_Value(value_state, pair.second);
            ++i;

            if (i >= constants::APPLIERS_GROUP_COUNT)
            {
                trace(MessageType::Error, 1, "save", format("unable to save all intercepts, too many registered (%d/%d).",
                    dynamic_applier_redirects.size(), constants::APPLIERS_GROUP_COUNT));
                break;
            }
        }

        for (; i < constants::APPLIERS_GROUP_COUNT; ++i)
        {
            auto* const id_state = uber_states::get_uber_state<app::SerializedIntUberState>(constants::APPLIERS_GROUP_ID, i * 2);
            auto* const value_state = uber_states::get_uber_state<app::SerializedIntUberState>(constants::APPLIERS_GROUP_ID, i * 2 + 1);
            SerializedIntUberState::set_Value(id_state, 0);
            SerializedIntUberState::set_Value(value_state, 0);
        }
    }

    void load_dynamic_redirects()
    {
        dynamic_applier_redirects.clear();
        auto i = 0;
        for (auto i = 0; i < constants::APPLIERS_GROUP_COUNT; ++i)
        {
            auto* const id_state = uber_states::get_uber_state<app::SerializedIntUberState>(constants::APPLIERS_GROUP_ID, i * 2);
            auto* const value_state = uber_states::get_uber_state<app::SerializedIntUberState>(constants::APPLIERS_GROUP_ID, i * 2 + 1);
            const auto id = SerializedIntUberState::get_Value(id_state);
            const auto value = SerializedIntUberState::get_Value(value_state);
            if (id != 0 && value != 0)
                dynamic_applier_redirects.emplace(id, value);
        }
    }

    void handle_saveload(GameEvent game_event, EventTiming timing)
    {
        switch (game_event)
        {
        case GameEvent::CreateBackup:
        case GameEvent::CreateSave:
            save_dynamic_redirects();
            break;
        case GameEvent::NewGame:
        case GameEvent::FinishedLoadingSave:
        case GameEvent::FinishedLoadingCheckpoint:
        case GameEvent::Respawn:
            load_dynamic_redirects();
            break;
        }
    }

    void initialize() {
        // Bubble spawner at entrance of pools.
        uber_states::register_applier_redirect(631536139, 1230316956, false);

        game::event_bus().register_handler(GameEvent::CreateBackup, EventTiming::Start, &handle_saveload);
        game::event_bus().register_handler(GameEvent::CreateSave, EventTiming::Start, &handle_saveload);
        game::event_bus().register_handler(GameEvent::NewGame, EventTiming::End, &handle_saveload);
        game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::End, &handle_saveload);
        game::event_bus().register_handler(GameEvent::FinishedLoadingCheckpoint, EventTiming::End, &handle_saveload);
        game::event_bus().register_handler(GameEvent::Respawn, EventTiming::End, &handle_saveload);
    }

    CALL_ON_INIT(initialize);
}

INJECT_C_DLLEXPORT void register_state_redirect(const int state, const int value)
{
    uber_states::register_applier_redirect(state, value, true);
}
