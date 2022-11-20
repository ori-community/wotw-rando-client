#pragma once

#include <TAS/runtime/timeline_entries_base.h>

namespace tas::runtime::timeline::entries {
    class PositionTimelineEntry : public TimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::Position; };

        float x;
        float y;

        PositionTimelineEntry(unsigned long frame, float x, float y) :
                x(x), y(y), TimelineEntry(frame) {}

        void activate(TimelineState& timeline_state) override;
    };
}