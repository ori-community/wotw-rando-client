#include <TAS/runtime/timeline_entries/mouse_angle.h>
#include <Core/input/simulator.h>
#include <Core/utils/misc.h>

namespace tas::runtime::timeline::entries {
    void MouseAngleTimelineEntry::activate() {
        auto simulator = core::input::get_mouse_position_simulator();

        simulator->x = std::cos(utils::deg2rad(this->degrees)) * this->distance;
        simulator->y = std::sin(utils::deg2rad(this->degrees)) * this->distance;

        core::input::set_mouse_position_simulation_mode(core::input::MousePositionSimulationMode::OriRelative);
    }
}