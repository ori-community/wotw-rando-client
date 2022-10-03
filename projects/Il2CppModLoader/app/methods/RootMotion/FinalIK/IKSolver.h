#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::IKSolver {
    IL2CPP_REGISTER_METHOD(0x02BE42F0, bool, IsValid, (app::IKSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE43A0, void, Initiate, (app::IKSolver * this_ptr, app::Transform* root))
    IL2CPP_REGISTER_METHOD(0x02BE4530, void, Update, (app::IKSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC230, app::Vector3, GetIKPosition, (app::IKSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C51C0, void, SetIKPosition, (app::IKSolver * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00573170, float, GetIKPositionWeight, (app::IKSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE45A0, void, SetIKPositionWeight, (app::IKSolver * this_ptr, float weight))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Transform*, GetRoot, (app::IKSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_initiated, (app::IKSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_initiated, (app::IKSolver * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02BE4670, void, LogWarning, (app::IKSolver * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x02BE4690, app::Transform*, ContainsDuplicateBone, (app::IKSolver_Bone__Array * bones))
    IL2CPP_REGISTER_METHOD(0x02BE4830, bool, HierarchyIsValid, (app::IKSolver_Bone__Array * bones))
    IL2CPP_REGISTER_METHOD(0x02BE48F0, float, PreSolveBones, (app::IKSolver_Bone__Array * *bones))
    IL2CPP_REGISTER_METHOD(0x02BE4F60, void, SolverRotateBonesAroundPoint, (app::IKSolver_Bone__Array * bones, int32_t index, app::Vector3 point, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x02BE5200, void, SolverRotate, (app::IKSolver_Bone__Array * bones, int32_t index, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x02BE53A0, void, ctor, (app::IKSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE53B0, void, cctor, ())
} // namespace app::classes::RootMotion::FinalIK::IKSolver
