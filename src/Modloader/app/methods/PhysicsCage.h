#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttachJointSettings.h>
#include <Modloader/app/structs/ConfigurableJoint.h>
#include <Modloader/app/structs/IPhysicsAttachable.h>
#include <Modloader/app/structs/PhysicsCage.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PhysicsCage {
    IL2CPP_REGISTER_METHOD(0x013C9650, bool, get_IsSuspended, app::PhysicsCage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014FBF80, void, set_IsSuspended, app::PhysicsCage* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Suspend, app::PhysicsCage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, app::PhysicsCage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00443CC0, void, AttachedBodyEnabled, app::PhysicsCage* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x014FBF90,
        bool,
        Attach,
        app::PhysicsCage* this_ptr,
        app::ConfigurableJoint* joint,
        app::Vector3 attachment_point,
        app::AttachJointSettings* joint_settings
    )
    IL2CPP_REGISTER_METHOD(0x014FC1E0, app::Rigidbody*, GetRigidbody, app::PhysicsCage* this_ptr, app::Vector3 attachment_point)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WasAttached, app::PhysicsCage* this_ptr, app::IPhysicsAttachable* attachable, app::ConfigurableJoint* joint)
    IL2CPP_REGISTER_METHOD(0x014FC710, void, ctor, app::PhysicsCage* this_ptr)
} // namespace app::classes::PhysicsCage
