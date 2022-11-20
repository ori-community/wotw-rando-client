#pragma once

#include <TAS/runtime/timeline_entries_base.h>
#include <Core/input/simulator.h>

namespace tas::runtime::timeline::entries {
    class MouseAngleTimelineEntry : public TimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::MouseAngle; };

        float degrees;
        float distance;

        MouseAngleTimelineEntry(unsigned long frame, float degrees, float distance) :
                degrees(degrees), distance(distance), TimelineEntry(frame) {}

        void activate(TimelineState& timeline_state) override;
    };
}