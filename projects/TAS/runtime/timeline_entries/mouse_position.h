#pragma once

#include <TAS/runtime/timeline_entries_base.h>

namespace tas::runtime::timeline::entries {
    class MousePositionTimelineEntry : public TimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::MousePosition; };
        float x;
        float y;

        MousePositionTimelineEntry(unsigned long frame, float x, float y) :
                x(x), y(y), TimelineEntry(frame) {}

        void activate() override;
    };
}