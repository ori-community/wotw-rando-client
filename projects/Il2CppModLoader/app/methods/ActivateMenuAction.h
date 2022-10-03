#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ActivateMenuAction {
    IL2CPP_REGISTER_METHOD(0x004C8BB0, void, Perform, (app::ActivateMenuAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x004C8C00, void, ctor, (app::ActivateMenuAction * this_ptr))
} // namespace app::classes::ActivateMenuAction
