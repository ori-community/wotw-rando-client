#include <macros.h>
#include <game/game.h>
#include <game/ui.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <magic_enum/include/magic_enum.hpp>

using namespace modloader;

namespace game
{
    namespace {
        EventBus<GameEvent> game_event_bus;

        std::unordered_map<RandoContainer, app::GameObject*> containers;
        app::GameObject* main_container_object = nullptr;

        STATIC_IL2CPP_BINDING(UnityEngine, Object, void, DontDestroyOnLoad, (void* obj));
        void make_container(RandoContainer container)
        {
            auto obj = il2cpp::create_object<app::GameObject>("UnityEngine", "GameObject");
            il2cpp::invoke(obj, ".ctor");
            il2cpp::invoke(obj, "set_name", il2cpp::string_new(magic_enum::enum_name(container)));
            containers[container] = obj;
            if (container == RandoContainer::Randomizer)
            {
                Object::DontDestroyOnLoad(obj);
                main_container_object = obj;
            }
            else
            {
                if (main_container_object == nullptr)
                    make_container(RandoContainer::Randomizer);

                il2cpp::unity::set_parent(obj, main_container_object);
            }
        }

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

    app::GameObject* container(RandoContainer c)
    {
        auto it = containers.find(c);
        if (it == containers.end())
        {
            make_container(c);
            it = containers.find(c);
        }

        return it->second;
    }

    void add_to_container(RandoContainer c, app::GameObject* go)
    {
        auto it = containers.find(c);
        if (it == containers.end())
        {
            make_container(c);
            it = containers.find(c);
        }

        il2cpp::unity::set_parent(go, container(c));
    }

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

