#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DestroyOnTimelineStopEvent.h>

namespace app::classes::DestroyOnTimelineStopEvent {
    IL2CPP_REGISTER_METHOD(0x00B8D420, void, OnEnable, app::DestroyOnTimelineStopEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B8D670, void, OnDisable, app::DestroyOnTimelineStopEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B8D8C0, void, OnDestroyOnStopEvent, app::DestroyOnTimelineStopEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00650B90, void, OnDestroy, app::DestroyOnTimelineStopEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00650B90, void, MoonCleanup, app::DestroyOnTimelineStopEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DestroyOnTimelineStopEvent* this_ptr)
} // namespace app::classes::DestroyOnTimelineStopEvent
