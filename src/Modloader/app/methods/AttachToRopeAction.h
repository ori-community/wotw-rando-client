#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttachToRopeAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::AttachToRopeAction {
    IL2CPP_REGISTER_METHOD(0x00850F60, void, Perform, app::AttachToRopeAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::AttachToRopeAction* this_ptr)
} // namespace app::classes::AttachToRopeAction
