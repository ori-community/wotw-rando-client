#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IKSolverLookAt_LookAtBone.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::FinalIK::IKSolverLookAt_LookAtBone {
    IL2CPP_REGISTER_METHOD(0x02A066F0, void, ctor_1, (app::IKSolverLookAt_LookAtBone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C02360, void, ctor_2, (app::IKSolverLookAt_LookAtBone * this_ptr, app::Transform* transform))
    IL2CPP_REGISTER_METHOD(0x02C02390, void, Initiate, (app::IKSolverLookAt_LookAtBone * this_ptr, app::Transform* root))
    IL2CPP_REGISTER_METHOD(0x02C02560, void, LookAt, (app::IKSolverLookAt_LookAtBone * this_ptr, app::Vector3 direction, float weight))
    IL2CPP_REGISTER_METHOD(0x02C02A40, app::Vector3, get_forward, (app::IKSolverLookAt_LookAtBone * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::IKSolverLookAt_LookAtBone
