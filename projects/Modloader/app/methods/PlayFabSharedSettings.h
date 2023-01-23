#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayFabSharedSettings.h>

namespace app::classes::PlayFabSharedSettings {
    IL2CPP_REGISTER_METHOD(0x01AD4420, void, ctor, (app::PlayFabSharedSettings * this_ptr))
}
