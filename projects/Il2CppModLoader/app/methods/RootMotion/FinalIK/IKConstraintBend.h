#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKConstraintBend {
    IL2CPP_REGISTER_METHOD(0x02077D90, bool, IsValid, (app::IKConstraintBend * this_ptr, app::IKSolverFullBody * solver, app::Warning_Logger * logger))
    IL2CPP_REGISTER_METHOD(0x0085E270, bool, get_initiated, (app::IKConstraintBend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085E280, void, set_initiated, (app::IKConstraintBend * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02077FC0, void, ctor_1, (app::IKConstraintBend * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02078080, void, ctor_2, (app::IKConstraintBend * this_ptr, app::Transform * bone1, app::Transform * bone2, app::Transform * bone3))
    IL2CPP_REGISTER_METHOD(0x00522850, void, SetBones, (app::IKConstraintBend * this_ptr, app::Transform * bone1, app::Transform * bone2, app::Transform * bone3))
    IL2CPP_REGISTER_METHOD(0x02078160, void, Initiate, (app::IKConstraintBend * this_ptr, app::IKSolverFullBody * solver))
    IL2CPP_REGISTER_METHOD(0x02078AE0, void, SetLimbOrientation, (app::IKConstraintBend * this_ptr, app::Vector3 upper, app::Vector3 lower, app::Vector3 last))
    IL2CPP_REGISTER_METHOD(0x02078D50, void, LimitBend, (app::IKConstraintBend * this_ptr, float solver_weight, float position_weight))
    IL2CPP_REGISTER_METHOD(0x02079B60, app::Vector3, GetDir, (app::IKConstraintBend * this_ptr, app::IKSolverFullBody * solver))
    IL2CPP_REGISTER_METHOD(0x0207A6E0, app::Vector3, OrthoToLimb, (app::IKConstraintBend * this_ptr, app::IKSolverFullBody * solver, app::Vector3 tangent))
    IL2CPP_REGISTER_METHOD(0x0207A880, app::Vector3, OrthoToBone1, (app::IKConstraintBend * this_ptr, app::IKSolverFullBody * solver, app::Vector3 tangent))
}
