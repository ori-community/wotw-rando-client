#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonDriverExecutionOrderMap.h>
#include <Modloader/app/structs/DefaultMoonDriverExecutionOrderMap.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::DefaultMoonDriverExecutionOrderMap {
    IL2CPP_REGISTER_METHOD(0x0197FF20, app::IMoonDriverExecutionOrderMap*, Get, ())
    IL2CPP_REGISTER_METHOD(0x01980060, bool, TryGetExecutionOrderFor, (app::DefaultMoonDriverExecutionOrderMap * this_ptr, app::Type* type, int32_t* order))
    IL2CPP_REGISTER_METHOD(0x01980110, void, ctor, (app::DefaultMoonDriverExecutionOrderMap * this_ptr))
} // namespace app::classes::Moon::DefaultMoonDriverExecutionOrderMap
