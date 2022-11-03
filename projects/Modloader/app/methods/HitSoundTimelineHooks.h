#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HitSoundTimelineHooks {
    IL2CPP_REGISTER_METHOD(0x00B583A0, void, Awake, (app::HitSoundTimelineHooks * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B583D0, void, OnReceiveEvent, (app::HitSoundTimelineHooks * this_ptr, app::EntityEvent* event_info))
    IL2CPP_REGISTER_METHOD(0x00B584F0, void, PlayTimeline, (app::HitSoundTimelineHooks * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HitSoundTimelineHooks * this_ptr))
} // namespace app::classes::HitSoundTimelineHooks
