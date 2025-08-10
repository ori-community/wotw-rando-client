#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem__Array.h>

namespace app::classes::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour {
    IL2CPP_REGISTER_METHOD(
        0x0084C970,
        void,
        ctor,
        app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour* this_ptr,
        app::AttachSpriteToPhysicsSystem__Array* entities
    )
    IL2CPP_REGISTER_METHOD(0x0084CB90, void, Finalize, app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0084CC20, void, Dispose, app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0084CC50, void, Execute, app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0084D080, void, ExecuteLate, app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour* this_ptr)
} // namespace app::classes::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour
