#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPressurePlate.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/PushPullBlockTest.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PushPullBlockTest {
    IL2CPP_REGISTER_METHOD(0x00653A60, app::Vector3, get_Position, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E84A50, bool, IsInAir, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E84D20, bool, get_IsGrabbable, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_IsGrabbed, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B11500, void, set_IsGrabbed, app::PushPullBlockTest* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00E84D30, void, OnPushOrPull, app::PushPullBlockTest* this_ptr, app::PlatformMovement* platform_movement)
    IL2CPP_REGISTER_METHOD(0x00E84FA0, void, OnReleased, app::PushPullBlockTest* this_ptr, app::PlatformMovement* platform_movement)
    IL2CPP_REGISTER_METHOD(0x00E852B0, void, OnHighlight, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E853D0, void, OnDehighlight, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E854F0, void, OnGrabbed, app::PushPullBlockTest* this_ptr, app::PlatformMovement* platform_movement)
    IL2CPP_REGISTER_METHOD(0x0060CCA0, bool, CanBeBashed, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B5650, float, PushableSpeedRatio, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00653A60, app::Vector3, GetPosition, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E85520, void, SetPosition, app::PushPullBlockTest* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Rigidbody*, GetRigidbody, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E855A0, bool, get_IsSuspended, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E855B0, void, set_IsSuspended, app::PushPullBlockTest* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00736620, app::SuspendableMask__Enum, get_Mask, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E855C0, void, set_Mask, app::PushPullBlockTest* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00E85680, void, OnEnable, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E85770, void, OnDisable, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E85890, void, Awake, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E85AB0, void, OnDestroy, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E85B70, void, Start, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E85CD0, void, FixedUpdate, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E86650, void, ConstrainRotationFix, app::PushPullBlockTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E86910, void, IgnoreCollisionWithPlayer, app::PushPullBlockTest* this_ptr, app::PlatformMovement* platform_movement, bool ignore)
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, ICanActivatePressurePlate_OnPressed, app::PushPullBlockTest* this_ptr, app::IPressurePlate* plate)
    IL2CPP_REGISTER_METHOD(0x00A52470, void, ICanActivatePressurePlate_OnReleased, app::PushPullBlockTest* this_ptr, app::IPressurePlate* plate)
    IL2CPP_REGISTER_METHOD(0x00E86AE0, void, ctor, app::PushPullBlockTest* this_ptr)
} // namespace app::classes::PushPullBlockTest
