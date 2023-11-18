#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonDriverExecutionOrderMap.h>
#include <Modloader/app/structs/ExecutionOrderMap.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::ExecutionOrderMap {
    IL2CPP_REGISTER_METHOD(0x01221A00, app::IMoonDriverExecutionOrderMap*, Get, ())
    IL2CPP_REGISTER_METHOD(0x01221B40, bool, TryGetExecutionOrderFor, (app::ExecutionOrderMap * this_ptr, app::Type* type, int32_t* order))
    IL2CPP_REGISTER_METHOD(0x01221D10, void, ctor, (app::ExecutionOrderMap * this_ptr))
} // namespace app::classes::Moon::ExecutionOrderMap
