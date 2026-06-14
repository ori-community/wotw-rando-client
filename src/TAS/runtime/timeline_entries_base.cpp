#include <TAS/runtime/timeline_entries_base.h>

namespace tas::runtime::timeline::entries {
    unsigned long FixedDurationTimelineEntry::last_frame() {
        return this->frame + this->duration - 1;
    }

    bool FixedDurationTimelineEntry::is_active_on_frame(unsigned long f) {
        return this->frame <= f && f <= this->last_frame();
    }
}