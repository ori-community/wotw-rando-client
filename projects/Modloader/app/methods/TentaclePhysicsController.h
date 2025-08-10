#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/TentaclePhysicsController.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3__Array.h>

namespace app::classes::TentaclePhysicsController {
    IL2CPP_REGISTER_METHOD(0x010CE240, bool, get_Enabled, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010CE300, bool, get_IsHeadStuck, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010CE310, bool, get_IsAlive, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010CE330, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x010CE3D0, void, OnAwake, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010CEEA0, void, IgnoreInterCollisions_1, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010CF010, void, IgnoreInterCollisions_2, app::TentaclePhysicsController* this_ptr, app::Collider* collider, bool ignore)
    IL2CPP_REGISTER_METHOD(0x010CF140, void, ResetAnimatedSettings, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010CF170, void, StickHead, app::TentaclePhysicsController* this_ptr, app::Transform* stick_transform, app::Vector3 stick_anchor)
    IL2CPP_REGISTER_METHOD(0x010CFBC0, void, UnStickHead, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010CFC00, void, BreakStickJoint, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010D0190, void, IgnoreStickCollisions, app::TentaclePhysicsController* this_ptr, bool ignore)
    IL2CPP_REGISTER_METHOD(0x010D0330, void, FixBodyTransform_1, app::TentaclePhysicsController* this_ptr, app::Rigidbody* rigidbody)
    IL2CPP_REGISTER_METHOD(
        0x010D05B0,
        void,
        FixBodyTransform_2,
        app::TentaclePhysicsController* this_ptr,
        app::Rigidbody* rigidbody,
        app::Vector3* pos,
        app::Quaternion rot,
        float euler_z
    )
    IL2CPP_REGISTER_METHOD(0x010D07A0, void, OnFixedUpdate, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010D4460, app::Vector3, Reproject, app::TentaclePhysicsController* this_ptr, app::Vector3 point, float k)
    IL2CPP_REGISTER_METHOD(0x010D47A0, void, LerpHeadRotataionAlignmentToTarget, app::TentaclePhysicsController* this_ptr, float force, float k)
    IL2CPP_REGISTER_METHOD(0x010D4880, void, AlignAllToAnimation, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010D4DF0, void, Kickback, app::TentaclePhysicsController* this_ptr, app::Vector3 vector, int32_t joint)
    IL2CPP_REGISTER_METHOD(0x010D4FA0, void, UpdateKickback, app::TentaclePhysicsController* this_ptr, float dt)
    IL2CPP_REGISTER_METHOD(0x010D50A0, app::Vector3, GetCurrentKickbackVector, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x010D5210,
        void,
        ApplyKickback,
        app::TentaclePhysicsController* this_ptr,
        app::Vector3__Array* source_joint_pos,
        app::Vector3__Array* result_joint_pos,
        int32_t joint_count
    )
    IL2CPP_REGISTER_METHOD(
        0x010D53D0,
        void,
        ApplyKickbackToJoint,
        app::TentaclePhysicsController* this_ptr,
        app::Vector3__Array* source_joint_pos,
        app::Vector3 kickback_shift,
        app::Vector3__Array* result_joint_pos,
        int32_t joint_index
    )
    IL2CPP_REGISTER_METHOD(0x010D55A0, void, Suspend, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010D55B0, void, Resume, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010D55C0, bool, get_IsKinematic, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010D55D0, void, SetKinematic, app::TentaclePhysicsController* this_ptr, bool kinematic)
    IL2CPP_REGISTER_METHOD(0x010D58A0, void, TurnOffSprings, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010D59C0, void, ResetJoints, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010D61A0, void, ResetActivated, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010D61B0, void, Die, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010D6200, void, ctor, app::TentaclePhysicsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010D67C0, void, cctor, )
} // namespace app::classes::TentaclePhysicsController
