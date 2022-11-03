#include <TAS/runtime/timeline_entries/action.h>
#include <Core/input/simulator.h>

namespace tas::runtime::timeline::entries {
    void ActionTimelineEntry::activate() {
        auto simulator = core::input::get_simulator_for(this->action);
        simulator->pressed = true;
    }

    void ActionTimelineEntry::deactivate() {
        auto simulator = core::input::get_simulator_for(this->action);
        simulator->pressed = false;
    }
}