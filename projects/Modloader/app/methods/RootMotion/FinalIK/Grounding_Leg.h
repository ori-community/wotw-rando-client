#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Grounding.h>
#include <Modloader/app/structs/Grounding_Leg.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::FinalIK::Grounding_Leg {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_isGrounded, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_isGrounded, app::Grounding_Leg* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02071CD0, app::Vector3, get_IKPosition, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02071CF0, void, set_IKPosition, app::Grounding_Leg* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x01746A40, app::Quaternion, get_rotationOffset, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02071D00, void, set_rotationOffset, app::Grounding_Leg* this_ptr, app::Quaternion value)
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_initiated, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_initiated, app::Grounding_Leg* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00447340, float, get_heightFromGround, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447350, void, set_heightFromGround, app::Grounding_Leg* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0168C6F0, app::Vector3, get_velocity, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02071D10, void, set_velocity, app::Grounding_Leg* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Transform*, get_transform, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_transform, app::Grounding_Leg* this_ptr, app::Transform* value)
    IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_IKOffset, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A34D0, void, set_IKOffset, app::Grounding_Leg* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02071D20, void, Initiate, app::Grounding_Leg* this_ptr, app::Grounding* grounding, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x02071F30, void, OnEnable, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02072010, void, Reset, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02072200, void, Process, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02073120, float, get_stepHeightFromGround, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02073210, app::RaycastHit, GetCapsuleHit, app::Grounding_Leg* this_ptr, app::Vector3 offset_from_heel)
    IL2CPP_REGISTER_METHOD(0x02073610, app::RaycastHit, GetRaycastHit, app::Grounding_Leg* this_ptr, app::Vector3 offset_from_heel)
    IL2CPP_REGISTER_METHOD(0x02073A20, app::Vector3, RotateNormal, app::Grounding_Leg* this_ptr, app::Vector3 normal)
    IL2CPP_REGISTER_METHOD(0x02073C80, void, SetFootToPoint, app::Grounding_Leg* this_ptr, app::Vector3 normal, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(
        0x02073EA0,
        void,
        SetFootToPlane,
        app::Grounding_Leg* this_ptr,
        app::Vector3 plane_normal,
        app::Vector3 plane_point,
        app::Vector3 heel_hit_point
    )
    IL2CPP_REGISTER_METHOD(0x020742C0, float, GetHeightFromGround, app::Grounding_Leg* this_ptr, app::Vector3 hit_point)
    IL2CPP_REGISTER_METHOD(0x020743D0, void, RotateFoot, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020746E0, app::Quaternion, GetRotationOffsetTarget, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02074860, float, get_rootYOffset, app::Grounding_Leg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02074AC0, void, ctor, app::Grounding_Leg* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::Grounding_Leg
