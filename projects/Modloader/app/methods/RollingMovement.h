#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RollingMovement.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RollingMovement {
    IL2CPP_REGISTER_METHOD(0x00724040, float, get_SpeedY, (app::RollingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724050, void, set_SpeedY, (app::RollingMovement * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_SpeedX, (app::RollingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_SpeedX, (app::RollingMovement * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01365050, float, get_GroundAngle, (app::RollingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01365120, app::Vector2, WorldToGround, (app::RollingMovement * this_ptr, app::Vector2 world))
    IL2CPP_REGISTER_METHOD(0x01365170, app::Vector2, GroundToWorld, (app::RollingMovement * this_ptr, app::Vector2 local))
    IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_IsSuspended, (app::RollingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_IsSuspended, (app::RollingMovement * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FD490, app::SuspendableMask__Enum, get_Mask, (app::RollingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013651A0, void, set_Mask, (app::RollingMovement * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x01365250, void, Awake, (app::RollingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01365360, void, OnDestroy, (app::RollingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01365400, void, Serialize, (app::RollingMovement * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x01365430, void, OnCollisionEnter, (app::RollingMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x01365430, void, OnCollisionStay, (app::RollingMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x01365440, void, OnCollision, (app::RollingMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x01365A60, void, add_OnCollisionGroundEvent, (app::RollingMovement * this_ptr, app::Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_* value))
    IL2CPP_REGISTER_METHOD(0x01365B50, void, remove_OnCollisionGroundEvent, (app::RollingMovement * this_ptr, app::Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_* value))
    IL2CPP_REGISTER_METHOD(0x01365C40, void, add_OnCollisionWallLeftEvent, (app::RollingMovement * this_ptr, app::Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_* value))
    IL2CPP_REGISTER_METHOD(0x01365D30, void, remove_OnCollisionWallLeftEvent, (app::RollingMovement * this_ptr, app::Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_* value))
    IL2CPP_REGISTER_METHOD(0x01365E20, void, add_OnCollisionWallRightEvent, (app::RollingMovement * this_ptr, app::Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_* value))
    IL2CPP_REGISTER_METHOD(0x01365F10, void, remove_OnCollisionWallRightEvent, (app::RollingMovement * this_ptr, app::Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_* value))
    IL2CPP_REGISTER_METHOD(0x01366000, app::Vector3, get_GroundBinormal, (app::RollingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01366150, void, FixedUpdate, (app::RollingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01366410, void, ctor, (app::RollingMovement * this_ptr))
} // namespace app::classes::RollingMovement
