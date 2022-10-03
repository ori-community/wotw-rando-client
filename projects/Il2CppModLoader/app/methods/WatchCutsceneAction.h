#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::WatchCutsceneAction {
    IL2CPP_REGISTER_METHOD(0x008D3960, void, Perform, (app::WatchCutsceneAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::WatchCutsceneAction * this_ptr))
} // namespace app::classes::WatchCutsceneAction
