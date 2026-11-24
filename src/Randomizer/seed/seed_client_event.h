#pragma once

#include <nlohmann/json.hpp>

namespace randomizer::seed {
    enum class SeedClientEvent {
        INVALID,
        /// When Action::Binding1 is invoked
        Binding1,
        /// When Action::Binding2 is invoked
        Binding2,
        /// When Action::Binding3 is invoked
        Binding3,
        /// When Action::Binding4 is invoked
        Binding4,
        /// When Action::Binding5 is invoked
        Binding5,
        /// When Action::ShowProgressWithHints is invoked
        ProgressMessage,
        /// Every frame
        Tick,
        /// When a new save is initialized, just before the spawn save is made.
        Spawn,
        /// Whenever respawning after death. Specifically does not include voiding out.
        RespawnAfterDeath,
        /// Whenever the game loads a save state. This happens for example after dying, when loading a
        /// save from the main menu or when voiding out.
        SaveLoaded,
        /// Whenever the seed changed in an active save file.
        SeedChanged,
        /// Helper for initializing static (i.e. non-serialized) data that triggers on [`ClientEvent::Spawn`],
        /// [`ClientEvent::SaveLoaded`] and [`ClientEvent::SeedChanged`].
        /// TODO: This probably shouldn't exist in the end because there probably shouldn't be
        ///       non-serialized data that is kept around.
        Initialize,
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
            {SeedClientEvent::ProgressMessage,            "ProgressMessage"           },
            {SeedClientEvent::Tick,                       "Tick"                      },
            {SeedClientEvent::Spawn,                      "Spawn"                     },
            {SeedClientEvent::RespawnAfterDeath,          "RespawnAfterDeath"         },
            {SeedClientEvent::SaveLoaded,                 "SaveLoaded"                },
        }
    );
} // namespace randomizer::seed
