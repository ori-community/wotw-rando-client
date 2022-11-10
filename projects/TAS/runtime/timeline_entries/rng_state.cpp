#include <TAS/runtime/timeline_entries/rng_state.h>

namespace tas::runtime::timeline::entries {
    void RNGStateTimelineEntry::activate(TimelineState& timeline_state) {
        timeline_state.current_rng_state = this->state;
    }
}