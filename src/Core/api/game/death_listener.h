#pragma once

#include <Common/event_bus.h>
#include <Core/macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>

#include <string>

namespace core::api::death_listener {
    struct Death {
        app::GameObject* game_object;
        app::Damage* damage;
    };

    CORE_DLLEXPORT common::TimedEventBus<Death>& enemy_death_event_bus();
    CORE_DLLEXPORT common::TimedEventBus<Death>& player_death_event_bus();
} // namespace core::api::death_listener