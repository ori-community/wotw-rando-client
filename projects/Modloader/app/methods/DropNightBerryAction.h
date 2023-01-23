#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DropNightBerryAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::DropNightBerryAction {
    IL2CPP_REGISTER_METHOD(0x00BDDA70, void, Perform, (app::DropNightBerryAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::DropNightBerryAction * this_ptr))
} // namespace app::classes::DropNightBerryAction
