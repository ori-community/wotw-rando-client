#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SetDifficultyAction {
    IL2CPP_REGISTER_METHOD(0x005A2A20, void, Perform, (app::SetDifficultyAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x005A2AC0, app::String *, GetNiceName, (app::SetDifficultyAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetDifficultyAction * this_ptr))
}
