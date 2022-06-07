#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::NewGameSetDifficultyAction {
    IL2CPP_REGISTER_METHOD(0x005FC120, void, Perform, (app::NewGameSetDifficultyAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x005FC1E0, void, ctor, (app::NewGameSetDifficultyAction * this_ptr))
}
