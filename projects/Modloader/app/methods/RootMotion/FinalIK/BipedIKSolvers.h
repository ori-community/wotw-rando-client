#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BipedIKSolvers.h>
#include <Modloader/app/structs/BipedReferences.h>
#include <Modloader/app/structs/IKSolverLimb__Array.h>
#include <Modloader/app/structs/IKSolver__Array.h>

namespace app::classes::RootMotion::FinalIK::BipedIKSolvers {
    IL2CPP_REGISTER_METHOD(0x020503B0, app::IKSolverLimb__Array*, get_limbs, app::BipedIKSolvers* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020505B0, app::IKSolver__Array*, get_ikSolvers, app::BipedIKSolvers* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020508A0, void, AssignReferences, app::BipedIKSolvers* this_ptr, app::BipedReferences* references)
    IL2CPP_REGISTER_METHOD(0x02050BA0, void, ctor, app::BipedIKSolvers* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::BipedIKSolvers
