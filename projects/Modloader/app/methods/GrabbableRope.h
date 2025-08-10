#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ForceMode__Enum.h>
#include <Modloader/app/structs/GrabbableRope.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GrabbableRope {
    IL2CPP_REGISTER_METHOD(0x010790F0, app::Vector3, get_LastForceApplied, app::GrabbableRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01079110, bool, CanGrab, app::GrabbableRope* this_ptr, app::Vector2 position, app::Vector2 character_movement_dir)
    IL2CPP_REGISTER_METHOD(0x010794B0, void, OnGrabbed, app::GrabbableRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010795E0, void, OnReleased, app::GrabbableRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01079710, float, GetPosition_1, app::GrabbableRope* this_ptr, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(0x01079A70, void, Awake, app::GrabbableRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01079BF0, void, OnDestroy, app::GrabbableRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01079CB0, app::Vector2, Position, app::GrabbableRope* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01079DF0, void, ReversePointsIfNeeded, app::GrabbableRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107A030, bool, TryGetPosition, app::GrabbableRope* this_ptr, int32_t index, app::Vector2* pos)
    IL2CPP_REGISTER_METHOD(0x0107A220, app::Vector2, GetClosestPointOnLineSegment, app::Vector2 p1, app::Vector2 p2, app::Vector2 q)
    IL2CPP_REGISTER_METHOD(0x0107A470, float, LineSegmentMinDistance, app::Vector2 p1, app::Vector2 p2, app::Vector2 q)
    IL2CPP_REGISTER_METHOD(0x0107A580, app::Vector2, GetPosition_2, app::GrabbableRope* this_ptr, float position_on_rope)
    IL2CPP_REGISTER_METHOD(0x0107A7E0, app::Vector2, GetDirection, app::GrabbableRope* this_ptr, float position_on_rope)
    IL2CPP_REGISTER_METHOD(0x0107A7F0, app::Vector2, GetRawDirection, app::GrabbableRope* this_ptr, float position_on_rope)
    IL2CPP_REGISTER_METHOD(0x0107A990, float, GetHorizontalAngle, app::GrabbableRope* this_ptr, float position_on_rope)
    IL2CPP_REGISTER_METHOD(0x0107AA60, float, GetVerticalAngle, app::GrabbableRope* this_ptr, float position_on_rope)
    IL2CPP_REGISTER_METHOD(0x0107AB30, void, CheckRotation, app::GrabbableRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107AD70, bool, IsVertical, app::GrabbableRope* this_ptr, float position_on_rope)
    IL2CPP_REGISTER_METHOD(0x0107AF20, float, AdvancePosition, app::GrabbableRope* this_ptr, float position_on_rope, float distance)
    IL2CPP_REGISTER_METHOD(0x0107B360, bool, AllowVertical, app::GrabbableRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107B380, bool, AllowHorizontal, app::GrabbableRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107B3A0, void, AddForce, app::GrabbableRope* this_ptr, app::Vector3 force, float position_on_rope)
    IL2CPP_REGISTER_METHOD(0x0107B3D0, void, AddImpulse, app::GrabbableRope* this_ptr, app::Vector3 force, float position_on_rope)
    IL2CPP_REGISTER_METHOD(
        0x0107B430,
        void,
        ApplyForce,
        app::GrabbableRope* this_ptr,
        app::Vector3 force,
        float position_on_rope,
        app::ForceMode__Enum force_mode
    )
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, RopeMinPosition, app::GrabbableRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107B600, float, RopeMaxPosition, app::GrabbableRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, IsRopeSlippery, app::GrabbableRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0085E270, bool, CanHandStand, app::GrabbableRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107B690, void, ctor, app::GrabbableRope* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107B6B0, void, cctor, )
} // namespace app::classes::GrabbableRope
