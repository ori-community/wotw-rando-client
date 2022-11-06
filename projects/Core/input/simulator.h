#pragma once

#include <Core/macros.h>
#include <Core/enums/actions.h>
#include <Core/enums/controller_axis.h>

namespace core::input {
    enum class MousePositionSimulationMode {
        /**
         * Position relative to the screen
         * (0|0) is bottom left, (1|1) is top right.
         */
        ViewportRelative,

        /**
         * Position relative to Ori's position
         * (0|0) is Ori's position. Scaling is the same
         * as world space.
         */
        OriRelative,

        /**
         * Absolute position in UI space
         */
        UI,
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
            MousePositionSimulationMode,
            {
                    { MousePositionSimulationMode::ViewportRelative, "ViewportRelative" },
                    { MousePositionSimulationMode::OriRelative, "OriRelative" },
                    { MousePositionSimulationMode::UI, "UI" },
            }
    );

    struct SimulatedInput {
        bool enabled = false;
    };

    struct SimulatedButton : SimulatedInput {
        bool pressed = false;
    };

    struct SimulatedAxis : SimulatedInput {
        float value = 0.f;
    };

    struct SimulatedPosition : SimulatedInput {
        float x = 0.f;
        float y = 0.f;
    };

    CORE_DLLEXPORT void clear_simulators();
    CORE_DLLEXPORT void register_simulators(app::PlayerInput* input);

    CORE_DLLEXPORT SimulatedButton* get_simulator_for(Action action);
    CORE_DLLEXPORT SimulatedAxis* get_simulator_for(ControllerAxis axis);
    CORE_DLLEXPORT SimulatedPosition* get_mouse_position_simulator();

    CORE_DLLEXPORT void enable_all_simulators(bool reset = true);
    CORE_DLLEXPORT void disable_all_simulators();

    CORE_DLLEXPORT void set_mouse_position_simulation_mode(MousePositionSimulationMode mode);
    CORE_DLLEXPORT MousePositionSimulationMode get_mouse_position_simulation_mode();
    CORE_DLLEXPORT app::Vector2 get_real_mouse_position_in_ui_space();
} // namespace core::input
