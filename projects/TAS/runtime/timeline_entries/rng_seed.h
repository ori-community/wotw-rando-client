#pragma once

#include <TAS/runtime/timeline_entries_base.h>
#include <Modloader/app/types/FixedRandom.h>

using namespace app::classes;

namespace tas::runtime::timeline::entries {
    class RNGSeedTimelineEntry : public TimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::RNGSeed; };

        int seed;

        RNGSeedTimelineEntry(unsigned long frame, int seed) :
                seed(seed), TimelineEntry(frame) {}

        void activate() override;
    };
}