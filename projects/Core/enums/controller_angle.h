#pragma once

#include <nlohmann/json.hpp>

enum class ControllerAngle {
    LeftStick,
    RightStick,
};

NLOHMANN_JSON_SERIALIZE_ENUM(
        ControllerAngle,
        {
                { ControllerAngle::LeftStick, "LeftStick" },
                { ControllerAngle::RightStick, "RightStick" },
        }
);
