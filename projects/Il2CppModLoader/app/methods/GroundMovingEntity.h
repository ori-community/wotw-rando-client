#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GroundMovingEntity {
    IL2CPP_REGISTER_METHOD(0x00864A60, app::GroundEntityLocomotion *, get_GroundLocomotion, (app::GroundMovingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01097610, void, HandleFootstepEvents, (app::GroundMovingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010979D0, void, OnAwake, (app::GroundMovingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01097AC0, void, OnFixedUpdate, (app::GroundMovingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01097ED0, void, OnEnable, (app::GroundMovingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01097FB0, bool, get_ShouldPlayFootsteps, (app::GroundMovingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01098020, bool, TryGetPlatformMovement, (app::GroundMovingEntity * this_ptr, app::CharacterPlatformMovement * * platform_movement))
    IL2CPP_REGISTER_METHOD(0x01098030, void, OnCacheSerializedComponents, (app::GroundMovingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010980D0, bool, get_TargetIsRunningAway, (app::GroundMovingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01098310, void, ctor, (app::GroundMovingEntity * this_ptr))
}
