#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StartTimelineOnAwake.h>

namespace app::classes::Moon::StartTimelineOnAwake {
    IL2CPP_REGISTER_METHOD(0x01E79420, void, Awake, (app::StartTimelineOnAwake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::StartTimelineOnAwake * this_ptr))
} // namespace app::classes::Moon::StartTimelineOnAwake
