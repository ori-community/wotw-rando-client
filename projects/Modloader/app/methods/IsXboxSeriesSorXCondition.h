#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IsXboxSeriesSorXCondition.h>

namespace app::classes::IsXboxSeriesSorXCondition {
    IL2CPP_REGISTER_METHOD(0x006490C0, bool, Validate, app::IsXboxSeriesSorXCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::IsXboxSeriesSorXCondition* this_ptr)
} // namespace app::classes::IsXboxSeriesSorXCondition
