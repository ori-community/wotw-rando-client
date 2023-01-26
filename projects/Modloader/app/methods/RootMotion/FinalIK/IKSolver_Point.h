#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IKSolver_Point.h>

namespace app::classes::RootMotion::FinalIK::IKSolver_Point {
    IL2CPP_REGISTER_METHOD(0x02BE7010, void, StoreDefaultLocalState, (app::IKSolver_Point * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE7110, void, FixTransform, (app::IKSolver_Point * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE74D0, void, UpdateSolverPosition, (app::IKSolver_Point * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE7560, void, UpdateSolverLocalPosition, (app::IKSolver_Point * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE75F0, void, UpdateSolverState, (app::IKSolver_Point * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE76F0, void, UpdateSolverLocalState, (app::IKSolver_Point * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE77F0, void, ctor, (app::IKSolver_Point * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::IKSolver_Point
