#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IKSolverLimb_AxisDirection__Boxed.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::FinalIK::IKSolverLimb_AxisDirection {
    IL2CPP_REGISTER_METHOD(0x002258E0, void, ctor, (app::IKSolverLimb_AxisDirection__Boxed * this_ptr, app::Vector3 direction, app::Vector3 axis))
}
