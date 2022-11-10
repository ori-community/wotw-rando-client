#pragma once

#include <TAS/runtime/timeline_entries_base.h>
#include <Modloader/app/types/FixedRandom.h>

using namespace app::classes;

namespace tas::runtime::timeline::entries {
    class RNGStateTimelineEntry : public TimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::RNGState; };

        int state;

        RNGStateTimelineEntry(unsigned long frame, int state) :
                state(state), TimelineEntry(frame) {}

        void activate(TimelineState& timeline_state) override;
    };
}