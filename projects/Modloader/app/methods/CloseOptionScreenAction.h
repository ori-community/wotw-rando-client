#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CloseOptionScreenAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CloseOptionScreenAction {
    IL2CPP_REGISTER_METHOD(0x012C5D00, void, Perform, app::CloseOptionScreenAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::CloseOptionScreenAction* this_ptr)
} // namespace app::classes::CloseOptionScreenAction
