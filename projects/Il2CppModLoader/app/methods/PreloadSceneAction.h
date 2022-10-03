#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PreloadSceneAction {
    IL2CPP_REGISTER_METHOD(0x00C6F4B0, void, Perform, (app::PreloadSceneAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PreloadSceneAction * this_ptr))
} // namespace app::classes::PreloadSceneAction
