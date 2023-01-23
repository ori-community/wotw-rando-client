#pragma once

#include <Core/utils/event_bus.h>
#include <Core/macros.h>
#include <string>

#include <Modloader/app/structs/DamageType__Enum.h>

namespace core::api::death_listener {
    struct EnemyDeath {
        std::string game_object_name;
        app::DamageType__Enum damage_type;
    };

    struct PlayerDeath {
        std::string killed_by_game_object_name;
        app::DamageType__Enum damage_type;
 ;   };

    CORE_DLLEXPORT TimedEventBus<EnemyDeath>& enemy_death_event_bus();

    CORE_DLLEXPORT TimedEventBus<PlayerDeath>& player_death_event_bus();
}