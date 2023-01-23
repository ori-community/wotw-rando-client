#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerTriggerSetup.h>
#include <Modloader/app/structs/PlayerTriggerSetup_TriggerSetupState__Enum.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::PlayerTriggerSetup {
    IL2CPP_REGISTER_METHOD(0x0142EA80, void, Awake, (app::PlayerTriggerSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0142EF40, void, OnDestroy, (app::PlayerTriggerSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0142F3E0, void, Update, (app::PlayerTriggerSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0142F430, void, ChangeState, (app::PlayerTriggerSetup * this_ptr, app::PlayerTriggerSetup_TriggerSetupState__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x0142F4D0, void, OnSleepingEnter, (app::PlayerTriggerSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0142F4E0, void, SleepingUpdate, (app::PlayerTriggerSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0142F530, void, OnTriggerEnter, (app::PlayerTriggerSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0142F540, void, OnTimelineEnterStop, (app::PlayerTriggerSetup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752BF8, PlayerTriggerSetup_OnTimelineEnterStop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0142F580, void, OnTriggerStay, (app::PlayerTriggerSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0142F590, void, OnTimelineStayStop, (app::PlayerTriggerSetup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477C458, PlayerTriggerSetup_OnTimelineStayStop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0142F5F0, void, OnTriggerExit, (app::PlayerTriggerSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0142F600, void, OnTimelineExitStop, (app::PlayerTriggerSetup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E508, PlayerTriggerSetup_OnTimelineExitStop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0142F640, void, PlayTimeline, (app::PlayerTriggerSetup * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x0142F720, void, StopAllTimelines, (app::PlayerTriggerSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0142F880, void, StopAllTimelinesExcluding, (app::PlayerTriggerSetup * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlayerTriggerSetup * this_ptr))
} // namespace app::classes::PlayerTriggerSetup
