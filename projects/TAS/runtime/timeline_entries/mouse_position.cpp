#include <TAS/runtime/timeline_entries/mouse_position.h>
#include <Core/input/simulator.h>

namespace tas::runtime::timeline::entries {
    void MousePositionTimelineEntry::activate() {
        auto simulator = core::input::get_mouse_position_simulator();
        simulator->x = this->x;
        simulator->y = this->y;
    }
}