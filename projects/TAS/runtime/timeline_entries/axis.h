#pragma once

#include <Core/enums/controller_axis.h>
#include <TAS/runtime/timeline_entries_base.h>

namespace tas::runtime::timeline::entries {
    class AxisTimelineEntry : public FixedDurationTimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::Axis; };
        ControllerAxis axis;
        float value;

        AxisTimelineEntry(unsigned long frame, unsigned long duration, ControllerAxis axis, float value)
                : FixedDurationTimelineEntry(frame, duration)
                , axis(axis)
                , value(value) {}

        void activate(TimelineState& timeline_state) override;
        void deactivate(TimelineState& timeline_state) override;
    };
} // namespace tas::runtime::timeline::entries