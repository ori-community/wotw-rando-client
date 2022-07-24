#pragma once

#include <json/json.hpp>

enum class SoundEventID : uint32_t {
    // Randomizer
    Catching = 1210588850,
};

NLOHMANN_JSON_SERIALIZE_ENUM(SoundEventID, {
                                                   { SoundEventID::Catching, "Catching" },
                                           });


enum class SoundStateGroupID : uint32_t {
    // Game
    CordycepsMusic = 3364462974,
};


enum class SoundStateID : uint32_t {
    // Game
    SpiderBossPhase1 = 568916175,
};