#pragma once

#include <optional>

namespace randomizer::trials {
    enum class SpiritTrialLocation {
        Marsh,
        Hollow,
        Wellspring,
        Woods,
        Reach,
        Depths,
        Pools,
        Wastes,
    };

    std::optional<SpiritTrialLocation> determine_trial_location_from_trial_state(int group, int state);
} // namespace
