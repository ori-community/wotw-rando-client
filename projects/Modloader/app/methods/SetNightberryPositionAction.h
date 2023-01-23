#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetNightberryPositionAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SetNightberryPositionAction {
    IL2CPP_REGISTER_METHOD(0x005A3100, void, Perform, (app::SetNightberryPositionAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetNightberryPositionAction * this_ptr))
} // namespace app::classes::SetNightberryPositionAction
