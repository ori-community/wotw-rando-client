#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FBIKChain_ChildConstraint.h>
#include <Modloader/app/structs/IKSolverFullBody.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::RootMotion::FinalIK::FBIKChain_ChildConstraint {
    IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_nominalDistance, app::FBIKChain_ChildConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_nominalDistance, app::FBIKChain_ChildConstraint* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0052A110, bool, get_isRigid, app::FBIKChain_ChildConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A120, void, set_isRigid, app::FBIKChain_ChildConstraint* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(
        0x02060CC0,
        void,
        ctor,
        app::FBIKChain_ChildConstraint* this_ptr,
        app::Transform* bone1,
        app::Transform* bone2,
        float push_elasticity,
        float pull_elasticity
    )
    IL2CPP_REGISTER_METHOD(0x02060CE0, void, Initiate, app::FBIKChain_ChildConstraint* this_ptr, app::IKSolverFullBody* solver)
    IL2CPP_REGISTER_METHOD(0x02060D40, void, OnPreSolve, app::FBIKChain_ChildConstraint* this_ptr, app::IKSolverFullBody* solver)
    IL2CPP_REGISTER_METHOD(0x02061110, void, Solve, app::FBIKChain_ChildConstraint* this_ptr, app::IKSolverFullBody* solver)
} // namespace app::classes::RootMotion::FinalIK::FBIKChain_ChildConstraint
