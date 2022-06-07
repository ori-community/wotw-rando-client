#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EnableMainMenuAction {
    IL2CPP_REGISTER_METHOD(0x00BFC750, void, Perform, (app::EnableMainMenuAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x004C87A0, void, ctor, (app::EnableMainMenuAction * this_ptr))
}
