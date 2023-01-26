#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScenesManagerSettings.h>

namespace app::classes::ScenesManagerSettings {
    IL2CPP_REGISTER_METHOD(0x01068120, bool, get_DontUnloadScenes, (app::ScenesManagerSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010681C0, void, ctor, (app::ScenesManagerSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010682E0, void, cctor, ())
} // namespace app::classes::ScenesManagerSettings
