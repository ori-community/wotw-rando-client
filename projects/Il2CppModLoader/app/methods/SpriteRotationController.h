#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpriteRotationController {
    IL2CPP_REGISTER_METHOD(0x009AE9E0, void, Awake, (app::SpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AEAD0, void, OnDestroy, (app::SpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AEB70, void, FixedUpdate, (app::SpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AED40, void, RotateBackToNormal, (app::SpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AED50, void, RotateTowardsTarget_1, (app::SpriteRotationController * this_ptr, app::Vector3 target, bool face_left))
    IL2CPP_REGISTER_METHOD(0x009AEE40, void, RotateTowardsTarget_2, (app::SpriteRotationController * this_ptr, app::Vector3 target, float angle_offset))
    IL2CPP_REGISTER_METHOD(0x009AEF20, void, RotateToTargetImmediately, (app::SpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsSuspended, (app::SpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsSuspended, (app::SpriteRotationController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0057AAC0, app::SuspendableMask__Enum, get_Mask, (app::SpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AF080, void, set_Mask, (app::SpriteRotationController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x009AF130, void, ctor, (app::SpriteRotationController * this_ptr))
} // namespace app::classes::SpriteRotationController
