#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::IKSolver_Node {
    IL2CPP_REGISTER_METHOD(0x02BE6F90, void, ctor_1, (app::IKSolver_Node * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE6FA0, void, ctor_2, (app::IKSolver_Node * this_ptr, app::Transform* transform))
    IL2CPP_REGISTER_METHOD(0x02BE6FD0, void, ctor_3, (app::IKSolver_Node * this_ptr, app::Transform* transform, float weight))
} // namespace app::classes::RootMotion::FinalIK::IKSolver_Node
