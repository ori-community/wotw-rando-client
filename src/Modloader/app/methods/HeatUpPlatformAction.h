#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HeatUpPlatformAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HeatUpPlatformAction {
    IL2CPP_REGISTER_METHOD(0x010A3170, void, Perform, app::HeatUpPlatformAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::HeatUpPlatformAction* this_ptr)
} // namespace app::classes::HeatUpPlatformAction
