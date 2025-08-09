#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::V3Tools {
    IL2CPP_REGISTER_METHOD(0x02A2E3A0, app::Vector3, ExtractVertical, app::Vector3 v, app::Vector3 vertical_axis, float weight)
    IL2CPP_REGISTER_METHOD(0x02A2E520, app::Vector3, ExtractHorizontal, app::Vector3 v, app::Vector3 normal, float weight)
    IL2CPP_REGISTER_METHOD(
        0x02A2E6C0,
        app::Vector3,
        ClampDirection_1,
        app::Vector3 direction,
        app::Vector3 normal_direction,
        float clamp_weight,
        int32_t clamp_smoothing,
        bool* changed
    )
    IL2CPP_REGISTER_METHOD(
        0x02A2E9D0,
        app::Vector3,
        ClampDirection_2,
        app::Vector3 direction,
        app::Vector3 normal_direction,
        float clamp_weight,
        int32_t clamp_smoothing,
        float* clamp_value
    )
    IL2CPP_REGISTER_METHOD(
        0x02A2ECF0,
        app::Vector3,
        LineToPlane,
        app::Vector3 origin,
        app::Vector3 direction,
        app::Vector3 plane_normal,
        app::Vector3 plane_point
    )
} // namespace app::classes::RootMotion::V3Tools
