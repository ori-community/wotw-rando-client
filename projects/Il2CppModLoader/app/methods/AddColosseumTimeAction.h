#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AddColosseumTimeAction {
    IL2CPP_REGISTER_METHOD(0x004CA060, void, Perform, (app::AddColosseumTimeAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (app::AddColosseumTimeAction * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::AddColosseumTimeAction * this_ptr))
}
