#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CustomPlaybackSettings.h>

namespace app::classes::Moon::Timeline::CustomPlaybackSettings {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CustomPlaybackSettings * this_ptr))
}
