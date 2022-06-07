#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DestroyOnTimelineStopEvent {
    IL2CPP_REGISTER_METHOD(0x00B8D420, void, OnEnable, (app::DestroyOnTimelineStopEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8D670, void, OnDisable, (app::DestroyOnTimelineStopEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8D8C0, void, OnDestroyOnStopEvent, (app::DestroyOnTimelineStopEvent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754170, DestroyOnTimelineStopEvent_OnDestroyOnStopEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00650B90, void, OnDestroy, (app::DestroyOnTimelineStopEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00650B90, void, MoonCleanup, (app::DestroyOnTimelineStopEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DestroyOnTimelineStopEvent * this_ptr))
}
