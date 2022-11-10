#pragma once

#include <Core/enums/controller_angle.h>
#include <TAS/runtime/timeline_entries_base.h>

namespace tas::runtime::timeline::entries {
    class AngleTimelineEntry : public FixedDurationTimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::Angle; };
        ControllerAngle angle;
        float degrees;

        AngleTimelineEntry(unsigned long frame, unsigned long duration, ControllerAngle angle, float degrees) :
                angle(angle), degrees(degrees), FixedDurationTimelineEntry(frame, duration) {}

        void activate(TimelineState& timeline_state) override;
        void deactivate(TimelineState& timeline_state) override;
    };
}