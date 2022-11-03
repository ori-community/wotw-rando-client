#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::IsSceneUnloaded {
    IL2CPP_REGISTER_METHOD(0x006479D0, bool, Validate, (app::IsSceneUnloaded * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsSceneUnloaded * this_ptr))
} // namespace app::classes::IsSceneUnloaded
