#pragma once

#include <Core/input/simulator.h>
#include <TAS/runtime/timeline_entries_base.h>

namespace tas::runtime::timeline::entries {
    class MousePositionTimelineEntry : public TimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::MousePosition; };

        core::input::MousePositionSimulationMode mode;
        float x;
        float y;

        MousePositionTimelineEntry(unsigned long frame, core::input::MousePositionSimulationMode mode, float x, float y)
                : TimelineEntry(frame)
                , mode(mode)
                , x(x)
                , y(y) {}

        void activate(TimelineState& timeline_state) override;
    };
} // namespace tas::runtime::timeline::entries