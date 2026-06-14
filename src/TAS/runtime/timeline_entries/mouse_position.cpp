#include <TAS/runtime/timeline_entries/mouse_position.h>
#include <Core/input/simulator.h>

namespace tas::runtime::timeline::entries {
    void MousePositionTimelineEntry::activate(TimelineState& timeline_state) {
        auto simulator = core::input::get_mouse_position_simulator();
        simulator->x = this->x;
        simulator->y = this->y;

        core::input::set_mouse_position_simulation_mode(this->mode);
    }
}