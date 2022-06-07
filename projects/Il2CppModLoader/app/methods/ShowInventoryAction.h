#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ShowInventoryAction {
    IL2CPP_REGISTER_METHOD(0x005C4960, void, Perform, (app::ShowInventoryAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ShowInventoryAction * this_ptr))
}
