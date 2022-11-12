#include <TAS/runtime/timeline_entries/game_reload.h>
#include <Core/api/game/game.h>

namespace tas::runtime::timeline::entries {
    void GameReloadTimelineEntry::activate(TimelineState& timeline_state) {
        game::reload_everything();
    }
}