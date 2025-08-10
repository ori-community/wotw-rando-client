#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Boxed.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem__Array.h>
#include <Modloader/app/structs/TransformAccess.h>

namespace app::classes::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour {
    IL2CPP_REGISTER_METHOD(
        0x0011A640,
        void,
        ctor,
        app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Boxed* this_ptr,
        app::AttachSpriteToPhysicsSystem__Array* items
    )
    IL2CPP_REGISTER_METHOD(
        0x0011A660,
        void,
        Execute,
        app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Boxed* this_ptr,
        int32_t index,
        app::TransformAccess transform
    )
} // namespace app::classes::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour
