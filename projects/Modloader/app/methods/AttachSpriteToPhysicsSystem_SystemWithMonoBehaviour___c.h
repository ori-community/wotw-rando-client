#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttachSpriteToPhysicsSystem.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour___c {
    IL2CPP_REGISTER_METHOD(0x0084D1C0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0084D300,
        app::Transform*,
        __ctor_b__2_0,
        app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c* this_ptr,
        app::AttachSpriteToPhysicsSystem* e
    )
} // namespace app::classes::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour___c
