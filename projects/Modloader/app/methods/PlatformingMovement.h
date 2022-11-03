#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlatformingMovement {
    IL2CPP_REGISTER_METHOD(0x01173700, bool, get_IsSuspended, (app::PlatformingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01173710, void, set_IsSuspended, (app::PlatformingMovement * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01173720, void, OnAwake, (app::PlatformingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01173790, void, OnCollisionEnter, (app::PlatformingMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x01173790, void, OnCollisionStay, (app::PlatformingMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x011737A0, bool, IsWallLeft, (app::PlatformingMovement * this_ptr, app::Vector3 normal))
    IL2CPP_REGISTER_METHOD(0x011738B0, bool, IsWallRight, (app::PlatformingMovement * this_ptr, app::Vector3 normal))
    IL2CPP_REGISTER_METHOD(0x011739C0, bool, IsGround, (app::PlatformingMovement * this_ptr, app::Vector3 normal))
    IL2CPP_REGISTER_METHOD(0x01173AD0, bool, IsCeiling, (app::PlatformingMovement * this_ptr, app::Vector3 normal))
    IL2CPP_REGISTER_METHOD(0x01173BE0, void, OnCollision, (app::PlatformingMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x01174050, void, FixedUpdate, (app::PlatformingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01175160, bool, PlaceOnGround, (app::PlatformingMovement * this_ptr, float lift, float distance))
    IL2CPP_REGISTER_METHOD(0x011756A0, void, ctor, (app::PlatformingMovement * this_ptr))
} // namespace app::classes::PlatformingMovement
