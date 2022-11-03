#pragma once

#include <Core/enums/controller_axis.h>
#include <TAS/runtime/timeline_entries_base.h>

namespace tas::runtime::timeline::entries {
    class AxisTimelineEntry : public FixedDurationTimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::Axis; };
        ControllerAxis axis;
        float value;

        AxisTimelineEntry(unsigned long frame, unsigned long duration, ControllerAxis axis, float value) :
                axis(axis), value(value), FixedDurationTimelineEntry(frame, duration) {}

        void activate() override;
        void deactivate() override;
    };
}