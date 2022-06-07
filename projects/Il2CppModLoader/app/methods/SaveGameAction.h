#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SaveGameAction {
    IL2CPP_REGISTER_METHOD(0x00C2B2F0, void, Perform, (app::SaveGameAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SaveGameAction * this_ptr))
}
