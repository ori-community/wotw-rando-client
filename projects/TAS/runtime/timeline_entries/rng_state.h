#pragma once

#include <Modloader/app/types/FixedRandom.h>
#include <TAS/runtime/timeline_entries_base.h>

namespace tas::runtime::timeline::entries {
    class RNGStateTimelineEntry : public TimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::RNGState; };

        int state;

        RNGStateTimelineEntry(unsigned long frame, int state)
                : TimelineEntry(frame)
                , state(state) {}

        void activate(TimelineState& timeline_state) override;
    };
} // namespace tas::runtime::timeline::entries