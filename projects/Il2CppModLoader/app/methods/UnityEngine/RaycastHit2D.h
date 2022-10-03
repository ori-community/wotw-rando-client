#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::RaycastHit2D {
    IL2CPP_REGISTER_METHOD(0x0014BC10, app::Vector2, get_point, (app::RaycastHit2D__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024ABD0, app::Vector2, get_normal, (app::RaycastHit2D__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F2880, float, get_distance, (app::RaycastHit2D__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024ABF0, app::Collider2D*, get_collider, (app::RaycastHit2D__Boxed * this_ptr))
} // namespace app::classes::UnityEngine::RaycastHit2D
