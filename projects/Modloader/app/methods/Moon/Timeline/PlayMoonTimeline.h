#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayMoonTimeline.h>

namespace app::classes::Moon::Timeline::PlayMoonTimeline {
    IL2CPP_REGISTER_METHOD(0x01E79420, void, Awake, (app::PlayMoonTimeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlayMoonTimeline * this_ptr))
} // namespace app::classes::Moon::Timeline::PlayMoonTimeline
