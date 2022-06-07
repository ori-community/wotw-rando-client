#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayExternalTimelineAction {
    IL2CPP_REGISTER_METHOD(0x011790D0, void, Perform, (app::PlayExternalTimelineAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01179220, void, ctor, (app::PlayExternalTimelineAction * this_ptr))
}
