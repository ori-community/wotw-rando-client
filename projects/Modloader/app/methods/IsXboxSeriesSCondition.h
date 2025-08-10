#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IsXboxSeriesSCondition.h>

namespace app::classes::IsXboxSeriesSCondition {
    IL2CPP_REGISTER_METHOD(0x00649020, bool, Validate, app::IsXboxSeriesSCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::IsXboxSeriesSCondition* this_ptr)
} // namespace app::classes::IsXboxSeriesSCondition
