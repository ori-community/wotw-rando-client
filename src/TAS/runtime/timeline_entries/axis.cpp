#include <TAS/runtime/timeline_entries/axis.h>
#include <Core/input/simulator.h>

namespace tas::runtime::timeline::entries {
    void AxisTimelineEntry::activate(TimelineState& timeline_state) {
        auto simulator = core::input::get_simulator_for(this->axis);
        simulator->value = this->value;
    }

    void AxisTimelineEntry::deactivate(TimelineState& timeline_state) {
        auto simulator = core::input::get_simulator_for(this->axis);
        simulator->value = 0.f;
    }
}