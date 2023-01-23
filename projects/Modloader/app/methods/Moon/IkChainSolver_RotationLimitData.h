#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/IkChainSolver_RotationLimitData__Boxed.h>

namespace app::classes::Moon::IkChainSolver_RotationLimitData {
    IL2CPP_REGISTER_METHOD(0x001B5000, app::Vector3, get_SecondaryAxis, (app::IkChainSolver_RotationLimitData__Boxed * this_ptr))
}
