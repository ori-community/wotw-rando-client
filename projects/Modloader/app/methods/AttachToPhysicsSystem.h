#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AttachToPhysicsSystem {
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::ConfigurableJoint*, get_GeneratedConfigurableJoint, (app::AttachToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084F350, bool, IsAttached, (app::AttachToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::AttachToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084F3F0, void, OnEnable, (app::AttachToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PerformAttachment, (app::AttachToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084F4E0, void, Start, (app::AttachToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084F5E0, void, RemoveAllJoints, (app::AttachToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::AttachToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084F6D0, void, ctor, (app::AttachToPhysicsSystem * this_ptr))
} // namespace app::classes::AttachToPhysicsSystem
