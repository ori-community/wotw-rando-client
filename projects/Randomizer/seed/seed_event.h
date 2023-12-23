#pragma once

#include <nlohmann/json.hpp>

namespace randomizer::seed {
    enum class SeedEvent {
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
        SeedEvent,
        {
            {SeedEvent::INVALID,                    "INVALID"                   },
            {SeedEvent::Binding1,                      "Binding1"                     },
            {SeedEvent::Binding2,                      "Binding2"                     },
            {SeedEvent::Binding3,                      "Binding3"                     },
            {SeedEvent::Binding4,                      "Binding4"                     },
            {SeedEvent::Binding5,                      "Binding5"                     },
            {SeedEvent::Teleport,                   "Teleport"                  },
            {SeedEvent::ShowProgress,               "ProgressMessage"           },
            {SeedEvent::RequeueLastMessage,         "RequeueLastMessage"        },
            {SeedEvent::Reload,                     "Reload"                    },
            {SeedEvent::Respawn,                    "Respawn"                   },
            {SeedEvent::Tick,                       "Tick"                      },
            {SeedEvent::Spawn,                      "Spawn"                     },
            {SeedEvent::InkwaterTrialTextRequest,   "InkwaterTrialTextRequest"  },
            {SeedEvent::HollowTrialTextRequest,     "HollowTrialTextRequest"    },
            {SeedEvent::WellspringTrialTextRequest, "WellspringTrialTextRequest"},
            {SeedEvent::WoodsTrialTextRequest,      "WoodsTrialTextRequest"     },
            {SeedEvent::ReachTrialTextRequest,      "ReachTrialTextRequest"     },
            {SeedEvent::DepthsTrialTextRequest,     "DepthsTrialTextRequest"    },
            {SeedEvent::LumaTrialTextRequest,       "LumaTrialTextRequest"      },
            {SeedEvent::WastesTrialTextRequest,     "WastesTrialTextRequest"    },
    }
    );
} // namespace randomizer::seed
