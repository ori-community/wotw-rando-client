#pragma once

#include <TAS/runtime/timeline_entries_base.h>

namespace tas::runtime::timeline::entries {
    class MousePositionTimelineEntry : public FixedDurationTimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::MousePosition; };
        float x;
        float y;

        MousePositionTimelineEntry(unsigned long frame, unsigned long duration, float x, float y) :
                x(x), y(y), FixedDurationTimelineEntry(frame, duration) {}
    };
}