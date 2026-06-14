#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/SwarmSuspendWhenOutOfFrustrum.h>

namespace app::classes::SwarmSuspendWhenOutOfFrustrum {
    IL2CPP_REGISTER_METHOD(0x01825520, app::Bounds, get_Bounds, app::SwarmSuspendWhenOutOfFrustrum* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01825910, void, ctor, app::SwarmSuspendWhenOutOfFrustrum* this_ptr)
} // namespace app::classes::SwarmSuspendWhenOutOfFrustrum
