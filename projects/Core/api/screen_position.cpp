#include <Core/api/screen_position.h>
#include <Modloader/app/methods/AspectRatioManager.h>

namespace core::api::screen_position {
    using namespace app::classes;

    app::Vector3 get(ScreenPosition position, bool auto_scale_aspect_ratio, float z) {
        // Because these positions are always the same and OnScreenPositions
        // sometimes isn't initialized for all values we hardcode them.

        const auto aspect_ratio_multiplier = auto_scale_aspect_ratio
            ? AspectRatioManager::get_AspectRatio() / 1.777778f
            : 1.f;

        switch (position) {
            case ScreenPosition::TopLeft:
                return {-7.f * aspect_ratio_multiplier, 3.93749950781f, z};
            case ScreenPosition::TopCenter:
                return {0.f * aspect_ratio_multiplier, 3.93749950781f, z};
            case ScreenPosition::TopRight:
                return {7.f * aspect_ratio_multiplier, 3.93749950781f, z};
            case ScreenPosition::MiddleLeft:
                return {-7.f * aspect_ratio_multiplier, 0, z};
            case ScreenPosition::MiddleRight:
                return {7.f * aspect_ratio_multiplier, 0, z};
            case ScreenPosition::BottomLeft:
                return {-7.f * aspect_ratio_multiplier, -3.93749950781f, z};
            case ScreenPosition::BottomCenter:
                return {0.f * aspect_ratio_multiplier, -2.6, z};
            case ScreenPosition::BottomRight:
                return {7.f * aspect_ratio_multiplier, -3.93749950781f, z};
            case ScreenPosition::MiddleCenter:
                default:
                    return {0, 0, z};
        }
    }
}
