#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberStateToWwiseData_UberStateToWWiseEntry.h>

namespace app::classes::Moon::Wwise::UberStateToWwiseData_UberStateToWWiseEntry {
    IL2CPP_REGISTER_METHOD(0x0270D350, bool, IsFulfilled, (app::UberStateToWwiseData_UberStateToWWiseEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270D720, void, AddBoolState, (app::UberStateToWwiseData_UberStateToWWiseEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270D8C0, void, AddIntState, (app::UberStateToWwiseData_UberStateToWWiseEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270DA60, void, AddFloatState, (app::UberStateToWwiseData_UberStateToWWiseEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270DC00, void, AddByteState, (app::UberStateToWwiseData_UberStateToWWiseEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270DDA0, void, AddConditionState, (app::UberStateToWwiseData_UberStateToWWiseEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberStateToWwiseData_UberStateToWWiseEntry * this_ptr))
} // namespace app::classes::Moon::Wwise::UberStateToWwiseData_UberStateToWWiseEntry
