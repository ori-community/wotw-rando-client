#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::StateHolder_1_LeverSetupData_ {
    IL2CPP_REGISTER_METHOD(0x01D19450, app::LeverSetupData*, ResolveCurrent, (app::StateHolder_1_LeverSetupData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A1B0, StateHolder_1_LeverSetupData__ResolveCurrent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D195E0, void, GetSetupStates, (app::StateHolder_1_LeverSetupData_ * this_ptr, app::List_1_IIndexedItem_* to_populate))
} // namespace app::classes::StateHolder_1_LeverSetupData_
