#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IKMapping_BoneMap.h>
#include <Modloader/app/structs/IKSolverFullBody.h>
#include <Modloader/app/structs/IKSolver_Node.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::FinalIK::IKMapping_BoneMap {
    IL2CPP_REGISTER_METHOD(0x02BDB2F0, void, Initiate, app::IKMapping_BoneMap* this_ptr, app::Transform* transform, app::IKSolverFullBody* solver)
    IL2CPP_REGISTER_METHOD(0x02BDB330, app::Vector3, get_swingDirection, app::IKMapping_BoneMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02064DE0, void, StoreDefaultLocalState, app::IKMapping_BoneMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BDB4A0, void, FixTransform, app::IKMapping_BoneMap* this_ptr, bool position)
    IL2CPP_REGISTER_METHOD(0x00F43340, bool, get_isNodeBone, app::IKMapping_BoneMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BDB590, void, SetLength, app::IKMapping_BoneMap* this_ptr, app::IKMapping_BoneMap* next_bone)
    IL2CPP_REGISTER_METHOD(0x02BDB760, void, SetLocalSwingAxis_1, app::IKMapping_BoneMap* this_ptr, app::IKMapping_BoneMap* swing_target)
    IL2CPP_REGISTER_METHOD(
        0x02BDB770,
        void,
        SetLocalSwingAxis_2,
        app::IKMapping_BoneMap* this_ptr,
        app::IKMapping_BoneMap* bone1,
        app::IKMapping_BoneMap* bone2
    )
    IL2CPP_REGISTER_METHOD(0x02BDBA20, void, SetLocalTwistAxis, app::IKMapping_BoneMap* this_ptr, app::Vector3 twist_direction, app::Vector3 normal_direction)
    IL2CPP_REGISTER_METHOD(
        0x02BDBBC0,
        void,
        SetPlane,
        app::IKMapping_BoneMap* this_ptr,
        app::IKSolverFullBody* solver,
        app::Transform* plane_bone1,
        app::Transform* plane_bone2,
        app::Transform* plane_bone3
    )
    IL2CPP_REGISTER_METHOD(0x02BDBCA0, void, UpdatePlane, app::IKMapping_BoneMap* this_ptr, bool rotation, bool position)
    IL2CPP_REGISTER_METHOD(0x02BDBF70, void, SetIKPosition, app::IKMapping_BoneMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BDC000, void, MaintainRotation, app::IKMapping_BoneMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BDC090, void, SetToIKPosition, app::IKMapping_BoneMap* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BDC110,
        void,
        FixToNode,
        app::IKMapping_BoneMap* this_ptr,
        app::IKSolverFullBody* solver,
        float weight,
        app::IKSolver_Node* fix_node
    )
    IL2CPP_REGISTER_METHOD(0x02BDC440, app::Vector3, GetPlanePosition, app::IKMapping_BoneMap* this_ptr, app::IKSolverFullBody* solver)
    IL2CPP_REGISTER_METHOD(0x02BDC600, void, PositionToPlane, app::IKMapping_BoneMap* this_ptr, app::IKSolverFullBody* solver)
    IL2CPP_REGISTER_METHOD(0x02BDC690, void, RotateToPlane, app::IKMapping_BoneMap* this_ptr, app::IKSolverFullBody* solver, float weight)
    IL2CPP_REGISTER_METHOD(0x02BDCB00, void, Swing_1, app::IKMapping_BoneMap* this_ptr, app::Vector3 swing_target, float weight)
    IL2CPP_REGISTER_METHOD(0x02BDCBE0, void, Swing_2, app::IKMapping_BoneMap* this_ptr, app::Vector3 pos1, app::Vector3 pos2, float weight)
    IL2CPP_REGISTER_METHOD(0x02BDD2D0, void, Twist, app::IKMapping_BoneMap* this_ptr, app::Vector3 twist_direction, app::Vector3 normal_direction, float weight)
    IL2CPP_REGISTER_METHOD(0x02BDD970, void, RotateToMaintain, app::IKMapping_BoneMap* this_ptr, float weight)
    IL2CPP_REGISTER_METHOD(0x02BDDC00, void, RotateToEffector, app::IKMapping_BoneMap* this_ptr, app::IKSolverFullBody* solver, float weight)
    IL2CPP_REGISTER_METHOD(0x02BDDEB0, app::Quaternion, GetTargetRotation, app::IKMapping_BoneMap* this_ptr, app::IKSolverFullBody* solver)
    IL2CPP_REGISTER_METHOD(0x02BDE230, app::Quaternion, get_lastAnimatedTargetRotation, app::IKMapping_BoneMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BDE760, void, ctor, app::IKMapping_BoneMap* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::IKMapping_BoneMap
