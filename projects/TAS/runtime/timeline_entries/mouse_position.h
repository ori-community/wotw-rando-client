#pragma once

#include <TAS/runtime/timeline_entries_base.h>
#include <Core/input/simulator.h>

namespace tas::runtime::timeline::entries {
    class MousePositionTimelineEntry : public TimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::MousePosition; };

        core::input::MousePositionSimulationMode mode;
        float x;
        float y;

        MousePositionTimelineEntry(unsigned long frame, core::input::MousePositionSimulationMode mode, float x, float y) :
                mode(mode), x(x), y(y), TimelineEntry(frame) {}

        void activate(TimelineState& timeline_state) override;
    };
}