#include <game/game.h>
#include <game/ui.h>
#include <macros.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/windows_api/console.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Object.h>
#include <Il2CppModLoader/app/methods/UnityEngine/GameObject.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Behaviour.h>
#include <Il2CppModLoader/app/methods/TimeUtility.h>
#include <Il2CppModLoader/app/methods/GameController.h>

#include <magic_enum/include/magic_enum.hpp>

using namespace modloader;
using namespace app::methods;

namespace game {
    namespace {
        MultiEventBus<GameEvent> game_event_bus;

        std::unordered_map<RandoContainer, app::GameObject *> containers;
        app::GameObject *main_container_object = nullptr;

        void make_container(RandoContainer container) {
            auto obj = il2cpp::create_object<app::GameObject>("UnityEngine", "GameObject");
            UnityEngine::GameObject::ctor_1(obj, il2cpp::string_new(magic_enum::enum_name(container)));

            containers[container] = obj;
            if (container == RandoContainer::Randomizer) {
                UnityEngine::Object::DontDestroyOnLoad(reinterpret_cast<app::Object_1 *>(obj));
                main_container_object = obj;
            } else {
                if (main_container_object == nullptr)
                    make_container(RandoContainer::Randomizer);

                il2cpp::unity::set_parent(obj, main_container_object);
            }
        }

        IL2CPP_INTERCEPT(GameController, void, Update, (app::GameController * this_ptr)) {
            game_event_bus.trigger_event(GameEvent::Update, EventTiming::Start);
            next::GameController::Update(this_ptr);
            game_event_bus.trigger_event(GameEvent::Update, EventTiming::End);
        }

        IL2CPP_INTERCEPT(GameController, void, FixedUpdate, (app::GameController * this_ptr)) {
            game_event_bus.trigger_event(GameEvent::FixedUpdate, EventTiming::Start);
            next::GameController::FixedUpdate(this_ptr);
            game_event_bus.trigger_event(GameEvent::FixedUpdate, EventTiming::End);

            // TODO: Probably should move this somewhere else.
            auto simple_fps = il2cpp::get_class<app::SimpleFPS__Class>("", "SimpleFPS")->static_fields->Instance;
            UnityEngine::Behaviour::set_enabled(reinterpret_cast<app::Behaviour *>(simple_fps), false);
        }

        IL2CPP_INTERCEPT(GameController, void, OnApplicationFocus, (app::GameController * this_ptr, bool focusStatus)) {
            auto evt = focusStatus ? GameEvent::GainedFocus : GameEvent::LostFocus;
            game_event_bus.trigger_event(evt, EventTiming::Start);
            this_ptr->fields._PreventFocusPause_k__BackingField = true;
            next::GameController::OnApplicationFocus(this_ptr, focusStatus);
            game_event_bus.trigger_event(evt, EventTiming::End);
        }

        IL2CPP_INTERCEPT(GameController, void, OnApplicationQuit, (app::GameController * this_ptr)) {
            game_event_bus.trigger_event(GameEvent::Shutdown, EventTiming::Start);
            next::GameController::OnApplicationQuit(this_ptr);
            game_event_bus.trigger_event(GameEvent::Shutdown, EventTiming::End);

            modloader::win::console::console_free();
            modloader::shutdown();

            // Force exit to prevent crash.
            quick_exit(0);
        }
    } // namespace

    MultiEventBus<GameEvent> &event_bus() {
        return game_event_bus;
    }

    float delta_time() {
        return TimeUtility::get_deltaTime();
    }

    float fixed_delta_time() {
        return TimeUtility::get_deltaTime();
    }

    app::GameController *controller() {
        return il2cpp::get_class<app::GameController__Class>("", "GameController")->static_fields->Instance;
    }

    app::GameObject *container(RandoContainer c) {
        auto it = containers.find(c);
        if (it == containers.end()) {
            make_container(c);
            it = containers.find(c);
        }

        return it->second;
    }

    void add_to_container(RandoContainer c, app::GameObject *go) {
        il2cpp::unity::set_parent(go, container(c));
    }

    bool is_paused() {
        auto instance = ui::get();
        return !il2cpp::unity::is_valid(instance) ||
               !il2cpp::unity::is_valid(instance->static_fields->m_sMenu) ||
               instance->static_fields->m_sMenu->fields.m_isPaused;
    }
} // namespace game

INJECT_C_DLLEXPORT float get_fixed_delta_time() {
    return game::fixed_delta_time();
}
