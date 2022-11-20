#pragma once

#include <Core/enums/actions.h>
#include <TAS/runtime/timeline_entries_base.h>

namespace tas::runtime::timeline::entries {
    class ActionTimelineEntry : public FixedDurationTimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::Action; };
        Action action;

        ActionTimelineEntry(unsigned long frame, unsigned long duration, Action action) :
                action(action), FixedDurationTimelineEntry(frame, duration) {}

        void activate(TimelineState& timeline_state) override;
        void deactivate(TimelineState& timeline_state) override;
    };
}