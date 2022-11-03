#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ApplyForceToPhysicsSystem {
    IL2CPP_REGISTER_METHOD(0x005061E0, void, OnEnable, (app::ApplyForceToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005063F0, void, OnDisable, (app::ApplyForceToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005065D0, bool, get_IsSuspended, (app::ApplyForceToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005065E0, void, set_IsSuspended, (app::ApplyForceToPhysicsSystem * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x005065F0, app::SuspendableMask__Enum, get_Mask, (app::ApplyForceToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506600, void, set_Mask, (app::ApplyForceToPhysicsSystem * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00506610, void, OnExplode, (app::ApplyForceToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04709AB8, ApplyForceToPhysicsSystem_OnExplode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00506620, void, Explode, (app::ApplyForceToPhysicsSystem * this_ptr, float force))
    IL2CPP_REGISTER_METHOD(0x00506D20, void, OnUpdatePhysics, (app::ApplyForceToPhysicsSystem * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00506E30, void, OnDrawGizmosSelected, (app::ApplyForceToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00507220, void, ctor, (app::ApplyForceToPhysicsSystem * this_ptr))
} // namespace app::classes::ApplyForceToPhysicsSystem
