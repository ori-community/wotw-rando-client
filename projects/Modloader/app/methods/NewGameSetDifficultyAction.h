#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::NewGameSetDifficultyAction {
    IL2CPP_REGISTER_METHOD(0x005FC120, void, Perform, (app::NewGameSetDifficultyAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005FC1E0, void, ctor, (app::NewGameSetDifficultyAction * this_ptr))
} // namespace app::classes::NewGameSetDifficultyAction
