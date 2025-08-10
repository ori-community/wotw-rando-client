#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttachJointSettings.h>
#include <Modloader/app/structs/ConfigurableJoint.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IPhysicsAttachable.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Rope.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Rope {
    IL2CPP_REGISTER_METHOD(0x00A1FBC0, app::Vector3, get_OffsetBetweenLinks, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1FBE0, void, set_OffsetBetweenLinks, app::Rope* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x003FC020, float, get_EffectiveLinkDensity, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FC030, void, set_EffectiveLinkDensity, app::Rope* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01367FA0, void, OverrideUpdateLineRenderer, app::Rope* this_ptr, bool on)
    IL2CPP_REGISTER_METHOD(0x01367FB0, void, SetOriginalPosition, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01368380, void, Initialize, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01368750, void, RefreshVertexCount, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01368880, void, ResetRopeToOriginalPosition, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01368BA0, void, Awake, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01368BB0, void, OnDestroy, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01368C60, void, Start, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01368D50, void, SetPhysicsSettingsForAllLinks, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013693D0, void, Update, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013693F0, void, UpdateLineRendererPositions, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01369A50, void, OnEnable, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01369C70, void, Suspend, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01369FF0, void, Resume, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CA2570, bool, get_IsSuspended, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0136A260, void, set_IsSuspended, app::Rope* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x007007F0, app::SuspendableMask__Enum, get_Mask, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0136A2B0, void, set_Mask, app::Rope* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00443CC0, void, AttachedBodyEnabled, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0136A2C0,
        bool,
        Attach,
        app::Rope* this_ptr,
        app::ConfigurableJoint* joint,
        app::Vector3 attachment_point,
        app::AttachJointSettings* joint_settings
    )
    IL2CPP_REGISTER_METHOD(0x0136A4C0, app::Rigidbody*, GetRigidbody, app::Rope* this_ptr, app::Vector3 attachment_point)
    IL2CPP_REGISTER_METHOD(0x0136A730, void, WasAttached, app::Rope* this_ptr, app::IPhysicsAttachable* attachable, app::ConfigurableJoint* joint)
    IL2CPP_REGISTER_METHOD(0x0136A9E0, void, Rebuild, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0136C500, void, ConnectRopeLinks, app::Rope* this_ptr, app::GameObject* previous_link, app::GameObject* next_link)
    IL2CPP_REGISTER_METHOD(0x0136C910, void, ctor, app::Rope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0136CA90, void, cctor, )
} // namespace app::classes::Rope
