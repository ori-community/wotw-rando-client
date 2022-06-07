#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CompleteGameAction {
    IL2CPP_REGISTER_METHOD(0x011DEF20, void, Perform, (app::CompleteGameAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::CompleteGameAction * this_ptr))
}
