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
        Teleport,
        ShowProgress,
        RequeueLastMessage,
        Reload,
        Tick,
        Spawn,
        Respawn,
        InkwaterTrialTextRequest,
        HollowTrialTextRequest,
        WellspringTrialTextRequest,
        WoodsTrialTextRequest,
        ReachTrialTextRequest,
        DepthsTrialTextRequest,
        LumaTrialTextRequest,
        WastesTrialTextRequest,
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
            {SeedClientEvent::Teleport,                   "Teleport"                  },
            {SeedClientEvent::ShowProgress,               "ProgressMessage"           },
            {SeedClientEvent::RequeueLastMessage,         "RequeueLastMessage"        },
            {SeedClientEvent::Reload,                     "Reload"                    },
            {SeedClientEvent::Respawn,                    "Respawn"                   },
            {SeedClientEvent::Tick,                       "Tick"                      },
            {SeedClientEvent::Spawn,                      "Spawn"                     },
            {SeedClientEvent::InkwaterTrialTextRequest,   "InkwaterTrialTextRequest"  },
            {SeedClientEvent::HollowTrialTextRequest,     "HollowTrialTextRequest"    },
            {SeedClientEvent::WellspringTrialTextRequest, "WellspringTrialTextRequest"},
            {SeedClientEvent::WoodsTrialTextRequest,      "WoodsTrialTextRequest"     },
            {SeedClientEvent::ReachTrialTextRequest,      "ReachTrialTextRequest"     },
            {SeedClientEvent::DepthsTrialTextRequest,     "DepthsTrialTextRequest"    },
            {SeedClientEvent::LumaTrialTextRequest,       "LumaTrialTextRequest"      },
            {SeedClientEvent::WastesTrialTextRequest,     "WastesTrialTextRequest"    },
    }
    );
} // namespace randomizer::seed
