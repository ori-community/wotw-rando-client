#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GameWorldArea {
    IL2CPP_REGISTER_METHOD(0x0040A2E0, app::Bounds, get_Bounds, (app::GameWorldArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040A500, app::Bounds, CreateBoundsFromTransform, (app::GameWorldArea * this_ptr, app::Transform* transform_source))
    IL2CPP_REGISTER_METHOD(0x0040A620, app::Rect, get_BoundingRect, (app::GameWorldArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040A870, bool, InsideFace, (app::GameWorldArea * this_ptr, app::Vector3 world_position))
    IL2CPP_REGISTER_METHOD(0x0040A9C0, void, ctor, (app::GameWorldArea * this_ptr))
} // namespace app::classes::GameWorldArea
