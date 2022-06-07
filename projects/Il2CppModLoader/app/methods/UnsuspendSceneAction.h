#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnsuspendSceneAction {
    IL2CPP_REGISTER_METHOD(0x013AD8B0, void, Perform, (app::UnsuspendSceneAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::UnsuspendSceneAction * this_ptr))
}
