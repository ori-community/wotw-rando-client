#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Projectile_ExplodeCollisionInfo.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::Projectile_ExplodeCollisionInfo {
    IL2CPP_REGISTER_METHOD(0x00C7B420, void, ctor, (app::Projectile_ExplodeCollisionInfo * this_ptr, app::Vector3 position, app::Vector3 normal, app::Collider* collider))
}
