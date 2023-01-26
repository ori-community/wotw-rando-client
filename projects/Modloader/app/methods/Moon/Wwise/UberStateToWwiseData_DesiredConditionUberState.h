#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberStateToWwiseData_DesiredConditionUberState.h>

namespace app::classes::Moon::Wwise::UberStateToWwiseData_DesiredConditionUberState {
    IL2CPP_REGISTER_METHOD(0x0270D320, bool, IsFulfilled, (app::UberStateToWwiseData_DesiredConditionUberState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberStateToWwiseData_DesiredConditionUberState * this_ptr))
} // namespace app::classes::Moon::Wwise::UberStateToWwiseData_DesiredConditionUberState
