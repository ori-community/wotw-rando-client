#pragma once

#include <Core/macros.h>
#include <nlohmann/json.hpp>
#include <Modloader/app/structs/Vector3.h>

namespace core::api::screen_position {
    enum class ScreenPosition {
        TopLeft = 0,
        TopCenter = 1,
        TopRight = 2,
        MiddleLeft = 3,
        MiddleCenter = 4,
        MiddleRight = 5,
        BottomLeft = 6,
        BottomCenter = 7,
        BottomRight = 8
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
        ScreenPosition,
        {
            { ScreenPosition::TopLeft, "TopLeft" },
            { ScreenPosition::TopCenter, "TopCenter" },
            { ScreenPosition::TopRight, "TopRight" },
            { ScreenPosition::MiddleLeft, "MiddleLeft" },
            { ScreenPosition::MiddleCenter, "MiddleCenter" },
            { ScreenPosition::MiddleRight, "MiddleRight" },
            { ScreenPosition::BottomLeft, "BottomLeft" },
            { ScreenPosition::BottomCenter, "BottomCenter" },
            { ScreenPosition::BottomRight, "BottomRight" },
        }
    );

    CORE_DLLEXPORT app::Vector3 get(ScreenPosition position, bool auto_scale_aspect_ratio = true);
}
