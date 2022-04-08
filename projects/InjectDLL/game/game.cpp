#include <macros.h>
#include <game/game.h>
#include <game/ui.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

namespace game
{
    namespace {
        EventBus<GameEvent> game_event_bus;
    
        STATIC_IL2CPP_BINDING(, TimeUtility, float, get_deltaTime, ());
        STATIC_IL2CPP_BINDING(, TimeUtility, float, get_fixedDeltaTime, ());
        IL2CPP_BINDING(UnityEngine, Behaviour, void, set_enabled, (app::Behaviour*, bool));

        IL2CPP_INTERCEPT(, GameController, void, Update, (app::GameController* this_ptr))
        {
            game_event_bus.trigger_event(GameEvent::Update, EventTiming::Start);
            GameController::Update(this_ptr);
            game_event_bus.trigger_event(GameEvent::Update, EventTiming::End);
        }

        IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController* this_ptr))
        {
            game_event_bus.trigger_event(GameEvent::FixedUpdate, EventTiming::Start);
            GameController::FixedUpdate(this_ptr);
            game_event_bus.trigger_event(GameEvent::FixedUpdate, EventTiming::End);

            // TODO: Probably should move this somewhere else.
            auto simple_fps = il2cpp::get_class<app::SimpleFPS__Class>("", "SimpleFPS")->static_fields->Instance;
            Behaviour::set_enabled(reinterpret_cast<app::Behaviour*>(simple_fps), false);
        }

        IL2CPP_INTERCEPT(, GameController, void, OnApplicationFocus, (app::GameController* this_ptr, bool focusStatus))
        {
            auto evt = focusStatus ? GameEvent::GainedFocus : GameEvent::LostFocus;
            game_event_bus.trigger_event(evt, EventTiming::Start);
            this_ptr->fields._PreventFocusPause_k__BackingField = true;
            GameController::OnApplicationFocus(this_ptr, focusStatus);
            game_event_bus.trigger_event(evt, EventTiming::End);
        }

        IL2CPP_INTERCEPT(, GameController, void, OnApplicationQuit, (app::GameController* this_ptr)) {
            game_event_bus.trigger_event(GameEvent::Shutdown, EventTiming::Start);
            GameController::OnApplicationQuit(this_ptr);
            game_event_bus.trigger_event(GameEvent::Shutdown, EventTiming::End);
            modloader::shutdown();
            // Force exit to prevent crash.
            quick_exit(0);
        }
    }

    EventBus<GameEvent>& event_bus() { return game_event_bus; }

    float delta_time() { return TimeUtility::get_deltaTime(); }
    float fixed_delta_time() { return TimeUtility::get_deltaTime(); }

    app::GameController* controller() { return il2cpp::get_class<app::GameController__Class>("", "GameController")->static_fields->Instance; }

    bool is_paused()
    {
        auto instance = ui::get();
        return !il2cpp::unity::is_valid(instance) ||
            !il2cpp::unity::is_valid(instance->static_fields->m_sMenu) ||
            instance->static_fields->m_sMenu->fields.m_isPaused;
    }
}

INJECT_C_DLLEXPORT float get_fixed_delta_time()
{
    return game::fixed_delta_time();
}

