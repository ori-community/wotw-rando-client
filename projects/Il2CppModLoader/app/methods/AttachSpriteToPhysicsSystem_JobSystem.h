#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AttachSpriteToPhysicsSystem_JobSystem {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::AttachSpriteToPhysicsSystem_JobSystem * this_ptr, app::AttachSpriteToPhysicsSystem__Array * entities))
    IL2CPP_REGISTER_METHOD(0x0084C200, void, Finalize, (app::AttachSpriteToPhysicsSystem_JobSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084C2A0, void, Dispose, (app::AttachSpriteToPhysicsSystem_JobSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084C2D0, void, Execute, (app::AttachSpriteToPhysicsSystem_JobSystem * this_ptr, float dt))
    IL2CPP_REGISTER_METHODINFO(0x0472DA38, AttachSpriteToPhysicsSystem_JobSystem_Execute__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0084C5F0, void, ExecuteLate, (app::AttachSpriteToPhysicsSystem_JobSystem * this_ptr, float dt))
    IL2CPP_REGISTER_METHODINFO(0x04764A90, AttachSpriteToPhysicsSystem_JobSystem_ExecuteLate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0084C870, void, cctor, ())
}
