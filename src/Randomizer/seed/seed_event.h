#pragma once

#include <nlohmann/json.hpp>

namespace randomizer::seed {
    enum class SeedClientEvent {
        INVALID,
        Binding1,
        Binding2,
        Binding3,
        Binding4,
        Binding5,
        ShowProgress,
        Reload,
        Tick,
        Spawn,
        Respawn,
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
        SeedClientEvent,
        {
            {SeedClientEvent::INVALID,                    "INVALID"                   },
            {SeedClientEvent::Binding1,                   "Binding1"                  },
            {SeedClientEvent::Binding2,                   "Binding2"                  },
            {SeedClientEvent::Binding3,                   "Binding3"                  },
            {SeedClientEvent::Binding4,                   "Binding4"                  },
            {SeedClientEvent::Binding5,                   "Binding5"                  },
            {SeedClientEvent::ShowProgress,               "ProgressMessage"           },
            {SeedClientEvent::Reload,                     "Reload"                    },
            {SeedClientEvent::Respawn,                    "Respawn"                   },
            {SeedClientEvent::Tick,                       "Tick"                      },
            {SeedClientEvent::Spawn,                      "Spawn"                     },
    }
    );
} // namespace randomizer::seed
