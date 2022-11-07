#include <TAS/runtime/timeline_entries/rng_seed.h>
#include <Core/api/game/player.h>

namespace tas::runtime::timeline::entries {
    void RNGSeedTimelineEntry::activate() {
        types::FixedRandom::get_class()->static_fields->FixedUpdateIndex = this->seed;
    }
}