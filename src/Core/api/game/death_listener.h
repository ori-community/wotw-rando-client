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

    namespace events {
        struct BeforePlayerDeath {
            const Death& death;
        };
        struct AfterPlayerDeath {
            const Death& death;
        };
        struct BeforeEnemyDeath {
            const Death& death;
        };
        struct AfterEnemyDeath {
            const Death& death;
        };

        using bus_t = common::EventBus<
            BeforePlayerDeath,
            AfterPlayerDeath,
            BeforeEnemyDeath,
            AfterEnemyDeath
        >;
    }

    CORE_DLLEXPORT events::bus_t& death_event_bus();
} // namespace core::api::death_listener
