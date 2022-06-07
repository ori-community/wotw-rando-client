#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ExitGameAction {
    IL2CPP_REGISTER_METHOD(0x00986ED0, void, Perform, (app::ExitGameAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ExitGameAction * this_ptr))
}
