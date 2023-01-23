#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IsXboxSeriesXCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::IsXboxSeriesXCondition {
    IL2CPP_REGISTER_METHOD(0x00649190, bool, Validate, (app::IsXboxSeriesXCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsXboxSeriesXCondition * this_ptr))
} // namespace app::classes::IsXboxSeriesXCondition
