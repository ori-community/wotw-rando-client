#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Projectile_ExplodeCollisionInfo {
    IL2CPP_REGISTER_METHOD(0x00C7B420, void, ctor, (app::Projectile_ExplodeCollisionInfo * this_ptr, app::Vector3 position, app::Vector3 normal, app::Collider * collider))
}
