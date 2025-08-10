#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IKSolverTrigonometric.h>
#include <Modloader/app/structs/IKSolver_Bone.h>
#include <Modloader/app/structs/IKSolver_Bone__Array.h>
#include <Modloader/app/structs/IKSolver_Point.h>
#include <Modloader/app/structs/IKSolver_Point__Array.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::FinalIK::IKSolverTrigonometric {
    IL2CPP_REGISTER_METHOD(0x02C02BB0, void, SetBendGoalPosition, app::IKSolverTrigonometric* this_ptr, app::Vector3 goal_position, float weight)
    IL2CPP_REGISTER_METHOD(0x02C02F00, void, SetBendPlaneToCurrent, app::IKSolverTrigonometric* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C03300, void, SetIKRotation, app::IKSolverTrigonometric* this_ptr, app::Quaternion rotation)
    IL2CPP_REGISTER_METHOD(0x02C03310, void, SetIKRotationWeight, app::IKSolverTrigonometric* this_ptr, float weight)
    IL2CPP_REGISTER_METHOD(0x02C033E0, app::Quaternion, GetIKRotation, app::IKSolverTrigonometric* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091E0B0, float, GetIKRotationWeight, app::IKSolverTrigonometric* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C033F0, app::IKSolver_Point__Array*, GetPoints, app::IKSolverTrigonometric* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C03590, app::IKSolver_Point*, GetPoint, app::IKSolverTrigonometric* this_ptr, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x02C03740, void, StoreDefaultLocalState, app::IKSolverTrigonometric* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C037A0, void, FixTransforms, app::IKSolverTrigonometric* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C03800, bool, IsValid, app::IKSolverTrigonometric* this_ptr, app::String** message)
    IL2CPP_REGISTER_METHOD(
        0x02C03D40,
        bool,
        SetChain,
        app::IKSolverTrigonometric* this_ptr,
        app::Transform* bone1,
        app::Transform* bone2,
        app::Transform* bone3,
        app::Transform* root
    )
    IL2CPP_REGISTER_METHOD(
        0x02C03DB0,
        void,
        Solve,
        app::Transform* bone1,
        app::Transform* bone2,
        app::Transform* bone3,
        app::Vector3 target_position,
        app::Vector3 bend_normal,
        float weight
    )
    IL2CPP_REGISTER_METHOD(
        0x02C04B50,
        void,
        SolveVirtual,
        app::IKSolver_Bone__Array* bones,
        int32_t first,
        int32_t second,
        int32_t third,
        app::Vector3 target_position,
        app::Vector3 bend_normal,
        float weight
    )
    IL2CPP_REGISTER_METHOD(
        0x02C055C0,
        void,
        SolveVirtualPositions,
        app::IKSolver_Bone* bone1,
        app::IKSolver_Bone* bone2,
        app::IKSolver_Bone* bone3,
        app::Vector3 target_position,
        app::Vector3 bend_normal,
        float weight
    )
    IL2CPP_REGISTER_METHOD(
        0x02C05C30,
        app::Vector3,
        GetDirectionToBendPoint,
        app::Vector3 direction,
        float direction_mag,
        app::Vector3 bend_direction,
        float sqr_mag1,
        float sqr_mag2
    )
    IL2CPP_REGISTER_METHOD(0x02C05F70, void, OnInitiate, app::IKSolverTrigonometric* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C061E0, bool, IsDirectHierarchy, app::IKSolverTrigonometric* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C063F0, void, InitiateBones, app::IKSolverTrigonometric* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C065C0, void, OnUpdate, app::IKSolverTrigonometric* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitiateVirtual, app::IKSolverTrigonometric* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateVirtual, app::IKSolverTrigonometric* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostSolveVirtual, app::IKSolverTrigonometric* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02C07420,
        app::Vector3,
        GetBendDirection,
        app::IKSolverTrigonometric* this_ptr,
        app::Vector3 i_k_position,
        app::Vector3 bend_normal
    )
    IL2CPP_REGISTER_METHOD(0x02C07950, void, ctor, app::IKSolverTrigonometric* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::IKSolverTrigonometric
