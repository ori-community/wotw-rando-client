#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ReturnToTitleScreenAction.h>

namespace app::classes::ReturnToTitleScreenAction {
    IL2CPP_REGISTER_METHOD(0x0090F900, void, Perform, app::ReturnToTitleScreenAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::ReturnToTitleScreenAction* this_ptr)
} // namespace app::classes::ReturnToTitleScreenAction
