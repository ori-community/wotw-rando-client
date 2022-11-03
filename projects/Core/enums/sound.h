#pragma once

#include <nlohmann/json.hpp>

enum class SoundEventID : uint32_t {
    // Randomizer
    Catching = 1210588850,
};

NLOHMANN_JSON_SERIALIZE_ENUM(SoundEventID, {
                                                   { SoundEventID::Catching, "Catching" },
                                           });

enum class SoundStateGroupID : uint32_t {
    // Game
    cordycepsMusic = 3364462974,
    swampHowlsDenMusic = 2313411230,
};

enum class SoundStateID : uint32_t {
    // Game
    spiderBossPhase1 = 568916175,
    inkwaterMarshPuzzleSolve = 227762898,
    lizardMultiWaveArena = 641759624,
    inkwaterMarshAfterGetSword = 2780012810,
    kwoloksMouthOpen = 1933767348,
    inkwaterMarshSunlitArea = 2381063091,
    pedistalsRise = 3698202205,
};