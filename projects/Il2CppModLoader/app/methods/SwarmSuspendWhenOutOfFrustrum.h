#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SwarmSuspendWhenOutOfFrustrum {
    IL2CPP_REGISTER_METHOD(0x01825520, app::Bounds, get_Bounds, (app::SwarmSuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01825910, void, ctor, (app::SwarmSuspendWhenOutOfFrustrum * this_ptr))
}
