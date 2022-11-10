#include <TAS/runtime/timeline_entries/position.h>
#include <Core/api/game/player.h>

namespace tas::runtime::timeline::entries {
    void PositionTimelineEntry::activate(TimelineState& timeline_state) {
        game::player::set_position(this->x, this->y);
    }
}