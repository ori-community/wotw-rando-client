#include <TAS/runtime/timeline_entries_base.h>

namespace tas::runtime::timeline::entries {
    unsigned long FixedDurationTimelineEntry::last_frame() {
        return this->frame + this->duration;
    }

    bool FixedDurationTimelineEntry::is_still_active(unsigned long next_frame) {
        return this->frame <= next_frame && next_frame < this->last_frame();
    }
}