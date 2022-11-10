#include <Core/input/simulator.h>
#include <Core/utils/misc.h>
#include <TAS/runtime/timeline_entries/angle.h>

namespace tas::runtime::timeline::entries {
    struct AngleSimulators {
        core::input::SimulatedAxis* x;
        core::input::SimulatedAxis* y;
    };

    AngleSimulators get_simulators_for(ControllerAngle angle) {
        switch (angle) {
            case ControllerAngle::LeftStick:
                return AngleSimulators {
                    core::input::get_simulator_for(ControllerAxis::HorizontalAnalogLeft),
                    core::input::get_simulator_for(ControllerAxis::VerticalAnalogLeft),
                };
            case ControllerAngle::RightStick:
                return AngleSimulators {
                    core::input::get_simulator_for(ControllerAxis::HorizontalAnalogRight),
                    core::input::get_simulator_for(ControllerAxis::VerticalAnalogRight),
                };
        }

        return AngleSimulators { nullptr, nullptr };
    }

    void AngleTimelineEntry::activate(TimelineState& timeline_state) {
        auto simulators = get_simulators_for(this->angle);

        auto radians = utils::deg2rad(this->degrees);

        simulators.x->value = std::cos(radians);
        simulators.y->value = std::sin(radians);
    }

    void AngleTimelineEntry::deactivate(TimelineState& timeline_state) {
        auto simulators = get_simulators_for(this->angle);
        simulators.x->value = 0.f;
        simulators.y->value = 0.f;
    }
}