#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IsSceneLoaded.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::IsSceneLoaded {
    IL2CPP_REGISTER_METHOD(0x006478E0, bool, Validate, (app::IsSceneLoaded * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsSceneLoaded * this_ptr))
} // namespace app::classes::IsSceneLoaded
