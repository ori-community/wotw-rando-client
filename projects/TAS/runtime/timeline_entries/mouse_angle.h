#pragma once

#include <Core/input/simulator.h>
#include <TAS/runtime/timeline_entries_base.h>

namespace tas::runtime::timeline::entries {
    class MouseAngleTimelineEntry : public TimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::MouseAngle; };

        float degrees;
        float distance;

        MouseAngleTimelineEntry(unsigned long frame, float degrees, float distance)
                : TimelineEntry(frame)
                , degrees(degrees)
                , distance(distance) {}

        void activate(TimelineState& timeline_state) override;
    };
} // namespace tas::runtime::timeline::entries