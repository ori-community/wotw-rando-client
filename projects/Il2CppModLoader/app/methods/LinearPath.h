#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LinearPath {
    IL2CPP_REGISTER_METHOD(0x00FA76D0, app::Vector3, LocalToWorld, (app::LinearPath * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00FA77E0, app::Vector2, ClosestPoint2D, (app::LinearPath * this_ptr, app::Vector2 world_pos))
    IL2CPP_REGISTER_METHOD(0x00FA7C60, void, OnDrawGizmos, (app::LinearPath * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA8110, void, ctor, (app::LinearPath * this_ptr))
} // namespace app::classes::LinearPath
