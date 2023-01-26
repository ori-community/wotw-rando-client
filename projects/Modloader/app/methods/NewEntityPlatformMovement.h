#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NewEntityPlatformMovement.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Kickback.h>
#include <Modloader/app/structs/NewEntityPlatformMovement_KickbackEntry.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::NewEntityPlatformMovement {
    IL2CPP_REGISTER_METHOD(0x005FA060, bool, get_IsAnticipatingLanding, (app::NewEntityPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FA070, bool, get_HeadAndFeetAgainstWall, (app::NewEntityPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FA090, bool, get_HeadOrFeetAgainstWall, (app::NewEntityPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::NewEntityPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FA0B0, void, OnCollisionEnter, (app::NewEntityPlatformMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x005FA0B0, void, OnCollisionStay, (app::NewEntityPlatformMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x005FA0E0, void, MovingGroundCollision, (app::NewEntityPlatformMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x005FA290, void, FixedUpdate, (app::NewEntityPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FABE0, void, AddKickback_1, (app::NewEntityPlatformMovement * this_ptr, app::Kickback* kickback, bool add_last_value_to_local_speed, float air_sustain_duration, bool instant))
    IL2CPP_REGISTER_METHOD(0x005FAC40, void, AddKickback_2, (app::NewEntityPlatformMovement * this_ptr, app::AnimationCurve* curve, app::Vector2 direction, float kickback_multiplier, bool add_last_value_to_local_speed, float air_sustain_duration, bool instant, app::Transform* height_match_transform, bool height_match))
    IL2CPP_REGISTER_METHOD(0x005FAF40, void, AddAirSuspension, (app::NewEntityPlatformMovement * this_ptr, float duration))
    IL2CPP_REGISTER_METHOD(0x005FB0B0, void, RemoveKickbacks, (app::NewEntityPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FB0C0, void, RemoveAirSuspension, (app::NewEntityPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FB0D0, app::Vector2, GetKickback, (app::NewEntityPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FB640, void, CheckForAirSustain, (app::NewEntityPlatformMovement * this_ptr, app::NewEntityPlatformMovement_KickbackEntry** kick_back))
    IL2CPP_REGISTER_METHOD(0x005FB7F0, app::Vector2, GetAirSuspension, (app::NewEntityPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FB9A0, void, UpdateHeadAndFeetAgainstTheWall, (app::NewEntityPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FBD40, void, ctor, (app::NewEntityPlatformMovement * this_ptr))
} // namespace app::classes::NewEntityPlatformMovement
