#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IKSolverLookAt.h>
#include <Modloader/app/structs/IKSolverLookAt_LookAtBone__Array.h>
#include <Modloader/app/structs/IKSolver_Point.h>
#include <Modloader/app/structs/IKSolver_Point__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3__Array.h>

namespace app::classes::RootMotion::FinalIK::IKSolverLookAt {
    IL2CPP_REGISTER_METHOD(0x02BFEBF0, void, SetLookAtWeight_1, app::IKSolverLookAt* this_ptr, float weight)
    IL2CPP_REGISTER_METHOD(0x02BFECC0, void, SetLookAtWeight_2, app::IKSolverLookAt* this_ptr, float weight, float body_weight)
    IL2CPP_REGISTER_METHOD(0x02BFEDD0, void, SetLookAtWeight_3, app::IKSolverLookAt* this_ptr, float weight, float body_weight, float head_weight)
    IL2CPP_REGISTER_METHOD(
        0x02BFEEF0,
        void,
        SetLookAtWeight_4,
        app::IKSolverLookAt* this_ptr,
        float weight,
        float body_weight,
        float head_weight,
        float eyes_weight
    )
    IL2CPP_REGISTER_METHOD(
        0x02BFF030,
        void,
        SetLookAtWeight_5,
        app::IKSolverLookAt* this_ptr,
        float weight,
        float body_weight,
        float head_weight,
        float eyes_weight,
        float clamp_weight
    )
    IL2CPP_REGISTER_METHOD(
        0x02BFF1A0,
        void,
        SetLookAtWeight_6,
        app::IKSolverLookAt* this_ptr,
        float weight,
        float body_weight,
        float head_weight,
        float eyes_weight,
        float clamp_weight,
        float clamp_weight_head,
        float clamp_weight_eyes
    )
    IL2CPP_REGISTER_METHOD(0x02BFF350, void, StoreDefaultLocalState, app::IKSolverLookAt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BFF520, void, FixTransforms, app::IKSolverLookAt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BFF6F0, bool, IsValid, app::IKSolverLookAt* this_ptr, app::String** message)
    IL2CPP_REGISTER_METHOD(0x02BFFB00, app::IKSolver_Point__Array*, GetPoints, app::IKSolverLookAt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BFFE30, app::IKSolver_Point*, GetPoint, app::IKSolverLookAt* this_ptr, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(
        0x02C00040,
        bool,
        SetChain,
        app::IKSolverLookAt* this_ptr,
        app::Transform__Array* spine,
        app::Transform* head,
        app::Transform__Array* eyes,
        app::Transform* root
    )
    IL2CPP_REGISTER_METHOD(0x02C001E0, void, OnInitiate, app::IKSolverLookAt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C007B0, void, OnUpdate, app::IKSolverLookAt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C00960, bool, get_spineIsValid, app::IKSolverLookAt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C00A90, bool, get_spineIsEmpty, app::IKSolverLookAt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C00AB0, void, SolveSpine, app::IKSolverLookAt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C00E10, bool, get_headIsValid, app::IKSolverLookAt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C00E20, bool, get_headIsEmpty, app::IKSolverLookAt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C00ED0, void, SolveHead, app::IKSolverLookAt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C01350, bool, get_eyesIsValid, app::IKSolverLookAt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C01480, bool, get_eyesIsEmpty, app::IKSolverLookAt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C014A0, void, SolveEyes, app::IKSolverLookAt* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02C01840,
        app::Vector3__Array*,
        GetForwards,
        app::IKSolverLookAt* this_ptr,
        app::Vector3__Array** forwards,
        app::Vector3 base_forward,
        app::Vector3 target_forward,
        int32_t bones,
        float clamp
    )
    IL2CPP_REGISTER_METHOD(
        0x02C01D20,
        void,
        SetBones,
        app::IKSolverLookAt* this_ptr,
        app::Transform__Array* array,
        app::IKSolverLookAt_LookAtBone__Array** bones
    )
    IL2CPP_REGISTER_METHOD(0x02C01F80, void, ctor, app::IKSolverLookAt* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::IKSolverLookAt
