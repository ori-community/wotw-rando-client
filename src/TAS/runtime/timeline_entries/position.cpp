#include <Core/api/game/player.h>
#include <TAS/runtime/timeline_entries/position.h>

namespace tas::runtime::timeline::entries {
    void PositionTimelineEntry::activate(TimelineState& timeline_state) {
        core::api::game::player::set_position(this->x, this->y);
    }
} // namespace tas::runtime::timeline::entries