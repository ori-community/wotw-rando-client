#pragma once

#include <json/json.hpp>

enum class SoundEventID : uint32_t {
    // Game

    // Randomizer
    Catching = 1210588850
};

NLOHMANN_JSON_SERIALIZE_ENUM(SoundEventID, {
                                                   { SoundEventID::Catching, "Catching" },
                                           });
