#pragma once

#include <nlohmann/json.hpp>

enum class ControllerAxis {
    HorizontalAnalogLeft,
    VerticalAnalogLeft,
    HorizontalAnalogRight,
    VerticalAnalogRight,
    HorizontalDigiPad,
    VerticalDigiPad,

    TOTAL
};

NLOHMANN_JSON_SERIALIZE_ENUM(
        ControllerAxis,
        {
                { ControllerAxis::HorizontalAnalogLeft, "HorizontalAnalogLeft" },
                { ControllerAxis::VerticalAnalogLeft, "VerticalAnalogLeft" },
                { ControllerAxis::HorizontalAnalogRight, "HorizontalAnalogRight" },
                { ControllerAxis::VerticalAnalogRight, "VerticalAnalogRight" },
                { ControllerAxis::HorizontalDigiPad, "HorizontalDigiPad" },
                { ControllerAxis::VerticalDigiPad, "VerticalDigiPad" },
        }
);
