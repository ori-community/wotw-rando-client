#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ReturnToTitleScreenAction {
    IL2CPP_REGISTER_METHOD(0x0090F900, void, Perform, (app::ReturnToTitleScreenAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ReturnToTitleScreenAction * this_ptr))
}
