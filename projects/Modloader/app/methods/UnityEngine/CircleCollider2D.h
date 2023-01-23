#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CircleCollider2D.h>

namespace app::classes::UnityEngine::CircleCollider2D {
    IL2CPP_REGISTER_METHOD(0x0316CC30, void, set_radius, (app::CircleCollider2D * this_ptr, float value))
}
