#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SetDemoPlaytimeAction.h>

namespace app::classes::SetDemoPlaytimeAction {
    IL2CPP_REGISTER_METHOD(0x005A2900, void, Perform, app::SetDemoPlaytimeAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::SetDemoPlaytimeAction* this_ptr)
} // namespace app::classes::SetDemoPlaytimeAction
