#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SetTitleScreenAction {
    IL2CPP_REGISTER_METHOD(0x005A4CD0, void, Perform, (app::SetTitleScreenAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005A4D70, app::String*, GetNiceName, (app::SetTitleScreenAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetTitleScreenAction * this_ptr))
} // namespace app::classes::SetTitleScreenAction
