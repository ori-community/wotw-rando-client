#pragma once

#include <Core/enums/actions.h>
#include <TAS/runtime/timeline_entries_base.h>

namespace tas::runtime::timeline::entries {
    class GameReloadTimelineEntry : public TimelineEntry {
    public:
        TimelineEntryType type() override { return TimelineEntryType::GameReload; };

        GameReloadTimelineEntry(unsigned long frame) :
                TimelineEntry(frame) {}

        void activate(TimelineState& timeline_state) override;
    };
}