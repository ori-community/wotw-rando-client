#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GetItemAction {
    IL2CPP_REGISTER_METHOD(0x00E11D20, void, Perform, (app::GetItemAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::GetItemAction * this_ptr))
}
