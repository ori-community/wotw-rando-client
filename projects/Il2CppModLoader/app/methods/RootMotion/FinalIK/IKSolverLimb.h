#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKSolverLimb {
    IL2CPP_REGISTER_METHOD(0x02BFC570, void, MaintainRotation, (app::IKSolverLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BFC620, void, MaintainBend, (app::IKSolverLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BFC670, void, OnInitiateVirtual, (app::IKSolverLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BFCF00, void, OnUpdateVirtual, (app::IKSolverLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BFD0F0, void, OnPostSolveVirtual, (app::IKSolverLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BFD3E0, void, ctor_1, (app::IKSolverLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BFD4A0, void, ctor_2, (app::IKSolverLimb * this_ptr, app::AvatarIKGoal__Enum goal))
    IL2CPP_REGISTER_METHOD(0x02BFD570, app::IKSolverLimb_AxisDirection__Array *, get_axisDirections, (app::IKSolverLimb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BFD590, void, StoreAxisDirections, (app::IKSolverLimb * this_ptr, app::IKSolverLimb_AxisDirection__Array * * axis_directions))
    IL2CPP_REGISTER_METHOD(0x02BFDD10, app::Vector3, GetModifiedBendNormal, (app::IKSolverLimb * this_ptr))
}
