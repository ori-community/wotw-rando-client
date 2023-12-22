#pragma once

#include <nlohmann/json.hpp>

namespace randomizer::seed {
    enum class SeedEvent {
        INVALID,
        Bind1,
        Bind2,
        Bind3,
        Bind4,
        Bind5,
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
            {SeedEvent::Bind1,                      "Bind1"                     },
            {SeedEvent::Bind2,                      "Bind2"                     },
            {SeedEvent::Bind3,                      "Bind3"                     },
            {SeedEvent::Bind4,                      "Bind4"                     },
            {SeedEvent::Bind5,                      "Bind5"                     },
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
